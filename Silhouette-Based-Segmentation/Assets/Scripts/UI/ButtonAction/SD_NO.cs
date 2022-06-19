using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SD_NO : MonoBehaviour
{
    public void OnClick()
    {
        if(GlobalContextVariable.globalContextVariable == GlobalContextVariable.GlobalContextVariableValue.gallery_drawing)
        {
            GlobalContextVariable.updateValue(GlobalContextVariable.GlobalContextVariableValue.gallery);
        } else if(GlobalContextVariable.globalContextVariable == GlobalContextVariable.GlobalContextVariableValue.photo_drawing || GlobalContextVariable.globalContextVariable == GlobalContextVariable.GlobalContextVariableValue.settings)
        {
            GlobalContextVariable.updateValue(GlobalContextVariable.GlobalContextVariableValue.main_view);
        }
    }
}
