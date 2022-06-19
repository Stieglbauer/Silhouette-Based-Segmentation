using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*
 * Used to render a voxel grid into the scene
 */ 
public class VoxelGridVisualizer : MonoBehaviour
{
    [SerializeField]
    private VoxelGrid voxelGrid;

    [SerializeField]
    private GameObject voxelPrefab;

    // for triggering a visualization/update from inspector for debug purposes
    [SerializeField] private bool visualizing;
    public void Update()
    {
        if (visualizing)
        {
            visualizing = false;
            visualize();
        }
    }


    // store references too all instantiated game objects to delete them (reusing them would be more efficient...)
    private List<GameObject> voxelMarkers = new List<GameObject>();


    public void visualize()
    {
        foreach(GameObject voxelMarker in voxelMarkers)
        {
            Destroy(voxelMarker);
        }
        voxelMarkers = new List<GameObject>();

        Vector3[] voxels = voxelGrid.getVoxels();

        voxelPrefab.transform.localScale = voxelGrid.voxelSize * Vector3.one;

        foreach(Vector3 voxel in voxels)
        {
            voxelMarkers.Add(Instantiate(voxelPrefab, voxel, Quaternion.identity, voxelGrid.gridSpace()));
        }
    }
}
