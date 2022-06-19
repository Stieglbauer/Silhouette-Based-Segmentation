using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*
 * Stores the current camera position and projection matrix (which also accounts for rotation) whenever photo_drawing mode is entered
 */
public class CamPos : MonoBehaviour, IGlobalContextSubscriber
{

    [SerializeField]
    private Camera main_camera;

    public Matrix4x4 projectionMat { get; private set; }
    public Vector3 position { get; private set; }

    public void update()
    {

        switch (GlobalContextVariable.globalContextVariable)
        {
            case GlobalContextVariable.GlobalContextVariableValue.photo_drawing:
                position = main_camera.transform.position;
                this.projectionMat = main_camera.nonJitteredProjectionMatrix * main_camera.worldToCameraMatrix;// * Matrix4x4.Translate(-main_camera.transform.position);
                break;
        }
    }
}
