using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BACK : MonoBehaviour
{
    public void OnClick()
    {
        GlobalContextVariable.updateValue(GlobalContextVariable.GlobalContextVariableValue.main_view);
    }
}
