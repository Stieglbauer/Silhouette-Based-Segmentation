using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DONE : MonoBehaviour
{
    [SerializeField]
    private GalleryStorage gallery;

    public void OnClick()
    {
        gallery.intersectEverythingNew();
    }
}
