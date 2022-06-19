using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GALLERY : MonoBehaviour
{
    [SerializeField]
    private GalleryStorage gallery;

    [SerializeField]
    private PopupMessage popupMessage;

    public void OnClick()
    {
        if(gallery.getImageMarkingCount() > 0)
        {
            GlobalContextVariable.updateValue(GlobalContextVariable.GlobalContextVariableValue.gallery);
        } else
        {
            popupMessage.popUp(PopupMessage.NOPHOTOSWARNING);
        }
    }
}
