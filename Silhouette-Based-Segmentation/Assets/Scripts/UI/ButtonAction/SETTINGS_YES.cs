using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SETTINGS_YES : MonoBehaviour
{
    [SerializeField] private Settings settings;

    public void onClick()
    {
        settings.applyAll();
        GlobalContextVariable.updateValue(GlobalContextVariable.GlobalContextVariableValue.main_view);
    }
}
