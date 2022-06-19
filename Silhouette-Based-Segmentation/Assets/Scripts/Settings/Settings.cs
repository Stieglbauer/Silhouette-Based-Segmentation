using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/*
 * Handles the UI and data for the settings menu.
 * Any script trying to get a user defined settings value, calls this script.
 */
public class Settings : MonoBehaviour, IGlobalContextSubscriber
{

    [SerializeField] internal GameObject headlineUI, boolValueUI, intValueUI, floatValueUI, container, settings;

    private List<SettingsValue> settingsValues;

    public void update()
    {
        if(GlobalContextVariable.globalContextVariable == GlobalContextVariable.GlobalContextVariableValue.settings)
        {
            settings.SetActive(true);
            foreach(var settingsValue in settingsValues)
            {
                settingsValue.openSettings();
            }
        } else
        {
            settings.SetActive(false);
        }
    }

    #region getter
    public float getFloatByName(string name)
    {
        foreach(var settingsValue in settingsValues)
        {
            if(typeof(FloatValue).IsAssignableFrom(settingsValue.GetType()) && settingsValue.name.Equals(name))
            {
                return ((FloatValue)settingsValue).actualValue;
            }
        }
        throw new KeyNotFoundException("There is not float value with name " + name + "!");
    }

    public bool getBoolByName(string name)
    {
        foreach (var settingsValue in settingsValues)
        {
            if (typeof(BoolValue).IsAssignableFrom(settingsValue.GetType()) && settingsValue.name.Equals(name))
            {
                return ((BoolValue)settingsValue).actualValue;
            }
        }
        throw new KeyNotFoundException("There is not bool value with name " + name + "!");
    }

    public int getIntByName(string name)
    {
        foreach (var settingsValue in settingsValues)
        {
            if (typeof(IntValue).IsAssignableFrom(settingsValue.GetType()) && settingsValue.name.Equals(name))
            {
                return ((IntValue)settingsValue).actualValue;
            }
        }
        throw new KeyNotFoundException("There is not int value with name " + name + "!");
    }
    #endregion getter

    private void Awake()
    {
        // New settings parameters are just added by type, name and initial value.
        // The settings class takes care of the UI then.
        // External scripts can get the current value by getting them via the name string.
        settingsValues = new List<SettingsValue>() {
            new Headline(headlineUI, "------ Base grid ------"),
            new BoolValue(boolValueUI, "Show Cube outline"),
            new FloatValue(floatValueUI, "Outline alpha", 0.1f),
            new FloatValue(floatValueUI, "X start", -0.1f),
            new FloatValue(floatValueUI, "X end", 0.1f),
            new FloatValue(floatValueUI, "Y start", 0),
            new FloatValue(floatValueUI, "Y end", 0.2f),
            new FloatValue(floatValueUI, "Z start", -0.1f),
            new FloatValue(floatValueUI, "Z end", 0.1f),
            new Headline(headlineUI, "------------"),
            new Headline(headlineUI, "------ Cutout voxel grid ------"),
            new FloatValue(floatValueUI, "Initial voxel size", 0.03f),
            new FloatValue(floatValueUI, "Voxel alpha", 0.1f),
            new IntValue(intValueUI, "Max number of voxels to subdivide", 500),
            new IntValue(intValueUI, "Max number subdivison iterations", 8),
            new Headline(headlineUI, "------------"),
        };

        // set the UI up
        float offset = 0;
        foreach (var settingsValue in settingsValues)
        {
            offset = settingsValue.initialize(container, offset);
        }
        RectTransform contentPanel = container.GetComponent<RectTransform>();
        contentPanel.sizeDelta = new Vector2(contentPanel.sizeDelta.x, offset);
    }

    // apply the values set in the UI to all internal values
    public void applyAll()
    {
        foreach (var settingsValue in settingsValues)
        {
            settingsValue.applyValue();
        }
    }

    /*
     * The value elements, which handle UI and value storage
     */
    #region settingsValues
    internal abstract class SettingsValue
    {
        internal string name { get; private set; }
        protected GameObject valueUI;

        internal SettingsValue(GameObject valueUI, string name)
        {
            this.valueUI = valueUI;
            this.name = name;
        }

        private bool wasInitialized = false;

        internal float initialize(GameObject container, float offset)
        {
            float ret = 0;
            if(!wasInitialized)
            {
                wasInitialized = true;
                ret = _initialize(container, offset);
            }
            openSettings();
            return ret;
        }

        internal abstract void openSettings();

        protected abstract float _initialize(GameObject container, float offset);

        internal abstract void applyValue();
    }

    internal class BoolValue : SettingsValue
    {
        internal BoolValue(GameObject valueUI, string name, bool initialValue = false) : base(valueUI, name) { actualValue = initialValue; }

        internal bool actualValue { get; private set; }

        private BoolValueUI wrapper;

        protected override float _initialize(GameObject container, float offset)
        {
            wrapper = Instantiate(valueUI, container.transform).GetComponent<BoolValueUI>();
            wrapper.GetComponent<RectTransform>().anchoredPosition = new Vector2(0, -offset);
            wrapper.setName(name);
            return offset + wrapper.GetComponent<RectTransform>().rect.height;
        }

        internal override void openSettings()
        {
            wrapper.setValue(actualValue);
        }

        internal override void applyValue()
        {
            try
            {
                actualValue = wrapper.getValue();
            }
            catch (FormatException) { }
        }
    }

    internal class FloatValue : SettingsValue
    {
        internal FloatValue(GameObject valueUI, string name, float initialValue = 0) : base(valueUI, name) { actualValue = initialValue; }

        internal float actualValue { get; private set; }

        private FloatValueUI wrapper;

        protected override float _initialize(GameObject container, float offset)
        {
            wrapper = Instantiate(valueUI, container.transform).GetComponent<FloatValueUI>();
            wrapper.GetComponent<RectTransform>().anchoredPosition = new Vector2(0, -offset);
            wrapper.setName(name);
            return offset + wrapper.GetComponent<RectTransform>().rect.height;
        }

        internal override void openSettings()
        {
            wrapper.setValue(actualValue);
        }

        internal override void applyValue()
        {
            try
            {
                actualValue = wrapper.getValue();
            }
            catch (FormatException) { }
        }
    }

    internal class IntValue : SettingsValue
    {
        internal IntValue(GameObject valueUI, string name, int initialValue=0) : base(valueUI, name) { actualValue = initialValue;  }

        internal int actualValue { get; private set; }

        private IntValueUI wrapper;

        protected override float _initialize(GameObject container, float offset)
        {
            wrapper = Instantiate(valueUI, container.transform).GetComponent<IntValueUI>();
            wrapper.GetComponent<RectTransform>().anchoredPosition = new Vector2(0, -offset);
            wrapper.setName(name);
            return offset + wrapper.GetComponent<RectTransform>().rect.height;
        }

        internal override void openSettings()
        {
            wrapper.setValue(actualValue);
        }

        internal override void applyValue()
        {
            try
            {
                actualValue = wrapper.getValue();
            }
            catch (FormatException) { }
        }
    }

    internal class Headline : SettingsValue
    {
        internal Headline(GameObject valueUI, string name) : base(valueUI, name) { }

        private HeadlineUI wrapper;

        protected override float _initialize(GameObject container, float offset)
        {
            wrapper = Instantiate(valueUI, container.transform).GetComponent<HeadlineUI>();
            wrapper.GetComponent<RectTransform>().anchoredPosition = new Vector2(0, -offset);
            wrapper.setName(name);
            return offset + wrapper.GetComponent<RectTransform>().rect.height;
        }

        internal override void openSettings()
        {
            // do nothing, as this is just a headline and has no value
        }

        internal override void applyValue()
        {
            // do nothing, as this is just a headline and has no value
        }
    }
    #endregion settingsValues
}
