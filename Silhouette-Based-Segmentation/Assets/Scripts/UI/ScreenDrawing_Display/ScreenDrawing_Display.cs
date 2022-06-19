using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*
 * Displays a screen drawing / a marking
 */ 
public class ScreenDrawing_Display : MonoBehaviour
{
    [SerializeField]
    private LineRenderer lineRenderer;

    public void showPoints(Vector3[] points)
    {
        lineRenderer.positionCount = points.Length;
        lineRenderer.SetPositions(points);
    }
}
