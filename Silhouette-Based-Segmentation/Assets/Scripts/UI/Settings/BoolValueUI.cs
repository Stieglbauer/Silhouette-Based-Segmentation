using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

/*
 * Represents a bool value interface in the settings
 */ 
public class BoolValueUI : MonoBehaviour
{
    [SerializeField] private Toggle toggle;
    [SerializeField] private Text text;

    public bool getValue()
    {
        return toggle.isOn;
    }

    public void setValue(bool value)
    {
        toggle.isOn = value;
    }

    public void setName(string name)
    {
        text.text = name;
    }
}
