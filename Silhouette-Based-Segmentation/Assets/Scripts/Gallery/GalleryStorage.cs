using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/*
 * Stores and manages the taken photos including the marking and calculation information (position and projection matrix)
 */
public class GalleryStorage : MonoBehaviour
{
     
    public int lastImageSelected = -1;
    
    /*
     * ImageMarking = image + marking + projection matrix + position
     */
    public struct ImageMarking
    {
        public ImageMarking(Texture2D image, List<Vector3> marking, Matrix4x4 projectionMatrix, Vector3 position)
        {
            this.image = image;
            this.marking = marking;
            this.projectionMatrix = projectionMatrix;
            this.position = position;
        }

        public readonly Texture2D image;
        public readonly List<Vector3> marking;
        public readonly Matrix4x4 projectionMatrix;
        public readonly Vector3 position;
    }

    [SerializeField]
    private PopupMessage popupMessage;

    [SerializeField]
    private List<ImageMarking> imageMarkings = new List<ImageMarking>();

    [SerializeField]
    private GalleryUI galleryUI;

    [SerializeField]
    private SP_Controller intersector;

    public int getImageMarkingCount()
    {
        return imageMarkings.Count;
    }

    public void addImageMarking(Texture2D tex, Matrix4x4 projectionMatrix, Vector3 position)
    {
        imageMarkings.Add(new ImageMarking(tex, null, projectionMatrix, position));
        galleryUI.updateUI(imageMarkings, this);
    }
    
    public void removeLatestImageMarking()
    {
        if(lastImageSelected != -1)
        {
            imageMarkings.RemoveAt(lastImageSelected);
            lastImageSelected = -1;
            galleryUI.updateUI(imageMarkings, this);
        } else
        {
            popupMessage.popUp(PopupMessage.NOPHOTOSELECTED);
        }
        galleryUI.unshowImage();
    }

    private void setMarking(List<Vector3> newMarking, int index)
    {
        imageMarkings[index] = new ImageMarking(imageMarkings[index].image, newMarking, imageMarkings[index].projectionMatrix, imageMarkings[index].position);
        galleryUI.updateUI(imageMarkings, this);
    }

    public void setMarkingForLatest(List<Vector3> newMarking)
    {
        setMarking(newMarking, imageMarkings.Count - 1);
        galleryUI.updateUI(imageMarkings, this);
    }

    public void setMarkingForActive(List<Vector3> newMarking)
    {
        setMarking(newMarking, lastImageSelected);
        galleryUI.updateUI(imageMarkings, this);
    }

    public void showImage(int index)
    {
        lastImageSelected = index;
        galleryUI.showImage(imageMarkings[index]);
    }

    public Texture getActiveImage()
    {
        return imageMarkings[lastImageSelected].image;
    }

    /*
     * Applies the intersection algorithm to all images, where there is a marking.
     * Images without markings are being ignored but remain stored.
     */
    public void intersectEverythingNew()
    {
        StartCoroutine(intersector.intersectAreaNew(imageMarkings.FindAll(IM => IM.marking != null)));
    }
}
