using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EDIT : MonoBehaviour
{
    public void OnClick()
    {
        GlobalContextVariable.updateValue(GlobalContextVariable.GlobalContextVariableValue.gallery_drawing);
    }
}
