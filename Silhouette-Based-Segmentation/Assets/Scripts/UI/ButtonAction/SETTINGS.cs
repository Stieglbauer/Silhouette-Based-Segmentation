using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SETTINGS : MonoBehaviour
{
    public void OnClick()
    {
        GlobalContextVariable.updateValue(GlobalContextVariable.GlobalContextVariableValue.settings);
    }
}
