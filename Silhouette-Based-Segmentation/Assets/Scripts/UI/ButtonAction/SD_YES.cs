using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SD_YES : MonoBehaviour
{
    [SerializeField]
    private SP_Controller sp_Controller;

    public void OnClick()
    {
        if(GlobalContextVariable.globalContextVariable == GlobalContextVariable.GlobalContextVariableValue.photo_drawing)
        {
            sp_Controller.saveImageMarking();
            GlobalContextVariable.updateValue(GlobalContextVariable.GlobalContextVariableValue.main_view);
        } else if(GlobalContextVariable.globalContextVariable == GlobalContextVariable.GlobalContextVariableValue.gallery_drawing)
        {
            sp_Controller.updateImageMarking();
            GlobalContextVariable.updateValue(GlobalContextVariable.GlobalContextVariableValue.gallery);
        }
    }
}
