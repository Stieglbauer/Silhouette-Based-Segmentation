using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GALLERY_IMAGE : MonoBehaviour
{
    public int index = 0;
    public GalleryStorage gallery;

    public void OnClick()
    {
        gallery.showImage(index);
    }
}
