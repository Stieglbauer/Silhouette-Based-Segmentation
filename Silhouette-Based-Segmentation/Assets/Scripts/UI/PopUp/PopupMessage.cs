using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/*
 * Makes a message pop up
 */ 
public class PopupMessage : MonoBehaviour
{
    [SerializeField]
    private MaskableGraphic[] renderers;

    [SerializeField]
    private Text textObj;

    public static readonly string
        NOPHOTOSWARNING = "No photos have been made yet!",
        NOPHOTOSELECTED = "No photo selected!",
        NOMARKING = "No marking has been added!";

    public void popUp(string messageText, float seconds=2)
    {
        StopAllCoroutines();
        StartCoroutine(show(messageText, seconds));
    }
    
    private IEnumerator show(string messageText, float seconds)
    {
        textObj.text = messageText;

        foreach(var renderer in renderers)
        {
            renderer.color = new Color(renderer.color.r, renderer.color.g, renderer.color.b, 1);
        }

        while (seconds > 0)
        {
            seconds -= Time.deltaTime;
            yield return new WaitForEndOfFrame();
        }

        seconds = 1;
        while (seconds > 0)
        {
            seconds -= Time.deltaTime;
            foreach(var renderer in renderers)
            {
                renderer.color = new Color(renderer.color.r, renderer.color.g, renderer.color.b, seconds);
            }
            yield return new WaitForEndOfFrame();
        }

        foreach (var renderer in renderers)
        {
            renderer.color = new Color(renderer.color.r, renderer.color.g, renderer.color.b, 0);
        }
    }
}
