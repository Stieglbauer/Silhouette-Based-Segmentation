using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading;
using TriangleNet.Geometry;
using TriangleNet;
using System;

/*
 * Spatial Partitioning Controller
 * 
 * Acts as an interface to other scripts in the scene for handling the entire intersection process within the voxel grid
 */
public class SP_Controller : MonoBehaviour
{

    [SerializeField]
    private VoxelGrid voxelGrid;
    [SerializeField]
    private ScreenDrawing screenDrawing;
    [SerializeField]
    private CamPos camPos;
    [SerializeField]
    private VoxelGridVisualizer visualizer;
    [SerializeField]
    private GalleryStorage galleryStorage;
    [SerializeField]
    private RenderToTexture renderToTexture;
    [SerializeField]
    private PopupMessage popupMessage;
    [SerializeField]
    private Settings settings;
    [SerializeField]
    private GameObject loadingScreen;

    private TriangleNetMesh triangleNetMesh;

    private GalleryStorage.ImageMarking[] markings;


    private void Awake()
    {
        voxelGrid.initialize();
    }

    /*
     * Intersect the projected image markings by testing each voxel against the view planes' markings, subdividing and repeating
     */
    public IEnumerator intersectAreaNew(List<GalleryStorage.ImageMarking> markings)
    {
        loadingScreen.SetActive(true);

        voxelGrid.initialize();

        this.markings = markings.ToArray();

        // end after x iterations
        int maxSubdivisonIterations = settings.getIntByName("Max number subdivison iterations");

        // end, if the algorithm would have to subdivide more than x voxels (due to performance); does not apply for the first iteration
        int maxVoxelsToSubdivide = settings.getIntByName("Max number of voxels to subdivide");

        for (int iteration=0; iteration < maxSubdivisonIterations && (voxelGrid.getVoxelCount() < maxVoxelsToSubdivide || iteration == 0); iteration++)
        {
            voxelGrid.subdivideVoxels(checkForIntersectionFromImageMarkings);
            while(!voxelGrid.calculationDone())
            {
                yield return new WaitForEndOfFrame();
            }
        }

        loadingScreen.SetActive(false);
        visualizer.visualize();
        GlobalContextVariable.updateValue(GlobalContextVariable.GlobalContextVariableValue.main_view);
    }

    /*
     * Check, if a single point is within EVERY projected marking
     * The checked point is meant to be a corner of a voxel
     * 
     * This algorithm results in:
     *  - a true negative, if not every marking contains at least one corner of this voxel
     *  - a true positive, if at least one corner projects into EVERY marking 
     *  - BUT a true negative, if EVERY corner projects into EVERY marking (because we want to highlight and subdivide only those voxels, which lie on the border of the resulting volume)
     *  - [BUG] a false negative, if no corner projects into ALL the markings, but EVERY marking contains at least one corner of this voxel (which should trigger a true positive)
     *      =>  possible solution: don't return true or false but return what markings (by index) the point is projected into.
     *          E.g. return an integer defined by the sum of all 2^i where i is the index of a marking it projects into.
     *          So if the first and third marking of three markings contain this point, the function returns 0b101. If the OR of all returns it 0b111... all markings contain at least one corner.
     *          Just check if there is at least one corner not returning 0b111... to make sure it is a corner voxel
     *  - [BUG] a false negative, if the voxel is too big and no corner projects into a certain marking, which is still intersecting the projected voxel
     */
    private bool checkForIntersectionFromImageMarkings(Vector3 vec3)
    {
        if(markings.Length == 0)
        {
            return false;
        }
        foreach(GalleryStorage.ImageMarking im in markings)
        {
            Vector4 tmp;
            tmp = im.projectionMatrix * (vec3 - im.position);
            if (tmp.z < 0)
            {
                return false;
            }

            Point screenPoint = new Point(tmp.x / tmp.z, tmp.y / tmp.z);

            bool contains = false;
            TriangleNetMesh triangleNetMesh = ScreenDrawing.triangulate(im.marking);
            foreach (TriangleNet.Topology.Triangle triangle in triangleNetMesh.Triangles)
            {
                if (triangle.Contains(screenPoint))
                {
                    contains = true;
                    break;
                }
            }
            if(!contains)
            {
                return false;
            }
        }
        return true;
    }

    // pass down the function
    public void saveImageMarking()
    {
        galleryStorage.addImageMarking(renderToTexture.photoTexture, camPos.projectionMat, camPos.position);
        if(screenDrawing.points.Count >= 3)
        {
            galleryStorage.setMarkingForLatest(screenDrawing.points);
        }
    }

    // pass down the function
    public void updateImageMarking()
    {
        if(screenDrawing.points.Count >= 3)
        {
            galleryStorage.setMarkingForActive(screenDrawing.points);
        } else
        {
            popupMessage.popUp(PopupMessage.NOMARKING);
        }
    }
}
