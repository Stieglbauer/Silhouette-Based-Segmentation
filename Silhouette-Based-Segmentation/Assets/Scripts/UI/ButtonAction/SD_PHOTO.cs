using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SD_PHOTO : MonoBehaviour
{
    public void OnClick()
    {
        GlobalContextVariable.updateValue(GlobalContextVariable.GlobalContextVariableValue.photo_drawing);
    }
}
