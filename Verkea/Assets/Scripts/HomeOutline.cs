using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using TMPro; // Import TextMeshPro namespace
using System.Collections;
using System.Collections.Generic;

public class HomeOutline : MonoBehaviourPun
{
    private GameObject lastHoveredObject;
    private GameObject lastInteractedObject;
    private bool isScaled = false;
    public GameObject ObjectMenuPanel;
    public TextMeshProUGUI AcceptText; // Reference to TextMeshPro component
    private Dictionary<GameObject, Vector3> originalSizes = new Dictionary<GameObject, Vector3>();
    private bool isRotating = false;
    private float rotationSpeed = 50f; // Adjust rotation speed as needed

    void Awake()
    {
        if (ObjectMenuPanel != null)
        {
            ObjectMenuPanel.SetActive(false);
        }
    }

    void Update()
    {
        GameObject currentObject = GetObjectUnderReticle();

        if (currentObject != lastHoveredObject)
        {
            if (lastHoveredObject != null)
            {
                ResetSize(lastHoveredObject);
                isScaled = false;
            }

            if (currentObject != null && currentObject.CompareTag("Interactable"))
            {
                if (!originalSizes.ContainsKey(currentObject))
                {
                    originalSizes[currentObject] = currentObject.transform.localScale;
                }

                SetSize(currentObject, currentObject.transform.localScale * 1.1f);
                lastHoveredObject = currentObject;
                isScaled = true;
            }
            else
            {
                lastHoveredObject = null;
            }
        }
        else if (currentObject == null && lastHoveredObject != null)
        {
            ResetSize(lastHoveredObject);
            lastHoveredObject = null;
            isScaled = false;
        }

        if (Input.GetKeyDown(KeyCode.X) && lastHoveredObject != null)
        {
            lastInteractedObject = lastHoveredObject;
            if (isScaled && ObjectMenuPanel != null)
            {
                ObjectMenuPanel.SetActive(true);

                if (lastHoveredObject != null)
                {
                    Vector3 panelPosition = lastHoveredObject.transform.position + Vector3.up * 30f;
                    ObjectMenuPanel.transform.position = panelPosition;

                    Vector3 directionToCamera = Camera.main.transform.position - ObjectMenuPanel.transform.position;
                    Quaternion rotationToCamera = Quaternion.LookRotation(directionToCamera);

                    rotationToCamera *= Quaternion.Euler(0f, 180f, 0f);

                    ObjectMenuPanel.transform.rotation = rotationToCamera;
                }
            }
        }

        if (Input.GetKeyDown(KeyCode.R) && lastHoveredObject != null)
        {
            isRotating = true;
        }
        if (Input.GetKeyUp(KeyCode.R))
        {
            isRotating = false;
        }

        if (isRotating && lastHoveredObject != null)
        {
            RotateObject(lastHoveredObject);
        }
    }

    GameObject GetObjectUnderReticle()
    {
        Ray ray = new Ray(Camera.main.transform.position, Camera.main.transform.forward);
        RaycastHit hit;

        if (Physics.SphereCast(ray, 0.1f, out hit))
        {
            return hit.collider.gameObject;
        }

        return null;
    }

    void SetSize(GameObject obj, Vector3 size)
    {
        obj.transform.localScale = size;
    }

    void ResetSize(GameObject obj)
    {
        if (obj != null && originalSizes.ContainsKey(obj))
        {
            obj.transform.localScale = originalSizes[obj];
        }
        else
        {
            Debug.LogWarning("The object is null or its original size is not stored.");
        }
    }

    void RotateObject(GameObject obj)
    {
        obj.transform.Rotate(Vector3.up * rotationSpeed * Time.deltaTime);
    }

    public void ExitMenu()
    {
        if (ObjectMenuPanel != null)
        {
            ObjectMenuPanel.SetActive(false);
        }
    }

    public void Accept()
    {
        if (AcceptText != null)
        {
            AcceptText.gameObject.SetActive(true);

            // Calculate the position in front of the camera
            Vector3 textPosition = Camera.main.transform.position + Camera.main.transform.forward * 2f;
            AcceptText.transform.position = textPosition;

            // Calculate the rotation to face the camera
            Vector3 directionToCamera = Camera.main.transform.position - AcceptText.transform.position;
            Quaternion rotationToCamera = Quaternion.LookRotation(directionToCamera);
            rotationToCamera *= Quaternion.Euler(0f, 180f, 0f); // Adjust rotation as needed

            // Apply the rotation
            AcceptText.transform.rotation = rotationToCamera;

            // Start coroutine to deactivate the text after 3 seconds
            StartCoroutine(DeactivateAcceptText());
        }
    }

    IEnumerator DeactivateAcceptText()
    {
        ObjectMenuPanel.SetActive(false);
        // Wait for 3 seconds
        yield return new WaitForSeconds(3f);

        // Deactivate the AcceptText object
        AcceptText.gameObject.SetActive(false);
    }

    public void Reject()
    {
        Debug.Log("REJECTTT clicked ");
        if (lastInteractedObject != null)
        {

            lastInteractedObject.SetActive(false);
            ObjectMenuPanel.SetActive(false);
        }
    }
}
