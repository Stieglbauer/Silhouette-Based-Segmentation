using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using TriangleNet;
using TriangleNet.Geometry;
using UnityEngine.EventSystems;

/*
 * Controls the handling of drawing input on images.
 * 
 * It is not too sophisticated, it just does what it's supposed to do.
 */

[RequireComponent(typeof(LineRenderer))]
public class ScreenDrawing : MonoBehaviour, IGlobalContextSubscriber
{


    [SerializeField]
    private bool allowMouseDrawing = true;

    [SerializeField]
    private Camera main_cam, drawing_cam;

    public List<Vector3> points = new List<Vector3>(); // stored backwards!! to save lookup time
    
    // distanceThreshold:   The higher it is set, the longer the distance between the new point and the last added point can be.
    // angleThreshold:      The higher is is set, the larger the angle between three points can be before NOT being considered a straight line.
    //                      If a new point is added and "in line" (according to angleThreshold) with the two points added before, the middle point is simply ignored.
    // frequencyThreshold:  The higher it is set, the longer a straight line can be, before adding a point to it to split it up.
    private const float distanceThreshold = 0.01f, angleThreshold = 0.03f, frequencyTreshold = 0.1f;

    // rendering depth of the drawing
    private const float zDepth = 10;

    private LineRenderer lineRenderer;

    [SerializeField]
    private RectTransform[] uiRects;


    private enum PointAddition
    {                   // initial state:                       O---O---O   +   *
        None,           // don't add the new point              O---O---O
        Addition,       // add the new point                    O---O---O-------*
        Replacement,    // replace the newest existing point    O---O-----------*       this might need to propagate back until no replacement
    }

    private void Awake()
    {
        lineRenderer = gameObject.GetComponent<LineRenderer>();
    }

    private IEnumerator drawingRoutineAction()
    {
        while(GlobalContextVariable.globalContextVariable == GlobalContextVariable.GlobalContextVariableValue.photo_drawing || GlobalContextVariable.globalContextVariable == GlobalContextVariable.GlobalContextVariableValue.gallery_drawing)
        {
            Vector3 position;
            //maybe insert preprocessor directives to not check mouse input in mobile build?
            if ((allowMouseDrawing && receiveMouseDrawing(out position)) || receiveTouchDrawing(out position))
            {
                PointAddition state = evaluateNewPoint(position);
                // replace all points which are "in line"
                while(state == PointAddition.Replacement)
                {
                    points.RemoveAt(0);
                    state = evaluateNewPoint(position);
                    // It might be possible, that points get removed, but in the end, not replaced, because the last evaluation results in Addition.None.
                    // As the algorithm seems to work properly in testing, we are just going to assume that this will not cause any problems.
                }
                // add the new point to the end of the current line if valid
                if (state == PointAddition.Addition)
                {
                    points.Insert(0, position);
                    updateLineRenderer();
                }
            }
            yield return new WaitForEndOfFrame();
        }
    }

    // checks if the mouse position is valid and returns its coordinates
    private bool receiveMouseDrawing(out Vector3 position)
    {
        if (!Input.GetMouseButton(0))
        {
            position = Vector3.zero;
            return false;
        }

        position = drawing_cam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, zDepth));

        return !pointerOverUIElement(position);
    }

    // checks if the touch position is valid and returns its coordinates
    private bool receiveTouchDrawing(out Vector3 position)
    {
        position = Vector3.zero;
        if (Input.touchCount < 1 || !(Input.touches[0].phase == TouchPhase.Moved)) {
            return false;
        } else
        {
            Vector2 pos = Input.GetTouch(0).position;
            position = drawing_cam.ScreenToWorldPoint(new Vector3(pos.x, pos.y, zDepth));
            return !pointerOverUIElement(position);
        }
    }
    
    // evaluates what is to do with a newly received point based on the existing point chain
    private PointAddition evaluateNewPoint(Vector3 newPoint)
    {
        // add the first two points no matter what
        // because the two points before are needed in the evaluation of new points
        if (points.Count <= 1) return PointAddition.Addition;

        // if the two points before are too far away (maybe because point[0] keeps being replaced by new points) then add a third point instead of replacing
        float frequencyScore = Vector3.Distance(points[0], points[1]);
        if(frequencyScore > frequencyTreshold)
        {
            return PointAddition.Addition;
        }

        // if our three points are almost on a line, delete the middle one
        float angleScore = 0.5f - 0.5f * Vector3.Dot((newPoint - points[0]).normalized, (points[0] - points[1]).normalized);
        if(angleScore < angleThreshold)
        {
            return PointAddition.Replacement;
        }

        // add a new point if its far away from the last added point
        float distanceScore = Vector3.Distance(newPoint, points[0]);
        if(distanceScore > distanceThreshold)
        {
            return PointAddition.Addition;
        }

        // if nothing applies, just do nothing with the new point
        return PointAddition.None;
    }
    
    private void updateLineRenderer()
    {
        lineRenderer.positionCount = points.Count;
        lineRenderer.SetPositions(points.ToArray());
    }

    public void update()
    {
        switch (GlobalContextVariable.globalContextVariable)
        {
            case GlobalContextVariable.GlobalContextVariableValue.photo_drawing:
            case GlobalContextVariable.GlobalContextVariableValue.gallery_drawing:
                StartCoroutine(drawingRoutineAction());
                break;
            case GlobalContextVariable.GlobalContextVariableValue.main_view:
            case GlobalContextVariable.GlobalContextVariableValue.gallery:
                points = new List<Vector3>();
                updateLineRenderer();
                break;
        }
    }

    // create a TriangleNetMesh from the stored point chain
    public TriangleNetMesh triangulate()
    {
        Polygon poly = new Polygon();
        poly.Add(new Contour(points.ConvertAll<Vertex>(vec3 => { return new Vertex(vec3.x, vec3.y); })));
        return ((TriangleNetMesh)poly.Triangulate());
    }


    // create a TriangleNetMesh from the given point chain
    public static TriangleNetMesh triangulate(List<Vector3> points)
    {
        Polygon poly = new Polygon();
        poly.Add(new Contour(points.ConvertAll<Vertex>(vec3 => { return new Vertex(vec3.x, vec3.y); })));
        return ((TriangleNetMesh)poly.Triangulate());
    }

    // check, whether the position pos is over an UI element
    // there are definetly better ways to check this, than checking the rect transforms of the UI elements
    // there is even a Unity function I am aware of, but in the beginning, I ran into some issues with it and went with this workaround
    public bool pointerOverUIElement(Vector3 pos)
    {
        pos = drawing_cam.WorldToScreenPoint(pos);

        foreach(RectTransform rect in uiRects)
        {
            if(rect.rect.Contains(pos - rect.position))
            {
                return true;
            }
        }
        return false;
    }


}
