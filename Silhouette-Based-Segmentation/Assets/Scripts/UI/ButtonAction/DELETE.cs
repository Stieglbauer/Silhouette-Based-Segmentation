using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DELETE : MonoBehaviour
{
    [SerializeField]
    private GalleryStorage gallery;

    public void OnClick()
    {
        gallery.removeLatestImageMarking();
    }
}
