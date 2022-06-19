using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/*
 * Makes a flash appear for a few seconds to indicate that a photo has been taken
 */ 
public class PhotoFlash : MonoBehaviour
{
    [SerializeField]
    private Image white;

    private IEnumerator flashAnimation(float seconds)
    {
        white.enabled = true;

        float maxSeconds = seconds;

        white.color = new Color(1, 1, 1, 1);

        yield return new WaitForEndOfFrame();

        while(seconds > 0)
        {
            seconds -= Time.deltaTime;

            white.color = new Color(1, 1, 1, seconds / maxSeconds);

            yield return new WaitForEndOfFrame();
        }

        white.enabled = false;
    }

    public void photoFlash(float seconds)
    {
        StopCoroutine("flashAnimation");

        StartCoroutine(flashAnimation(seconds));
    }
}
