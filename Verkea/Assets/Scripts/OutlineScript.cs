using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using System.Collections.Generic;

public class OutlineScript : MonoBehaviourPun
{
    private GameObject lastHoveredObject;
    private GameObject lastInteractedObject;
    private bool isScaled = false;
    public GameObject ObjectMenuPanel;
    private Dictionary<GameObject, Vector3> originalSizes = new Dictionary<GameObject, Vector3>();

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


    public void ExitMenu()
    {
        if (ObjectMenuPanel != null)
        {
            ObjectMenuPanel.SetActive(false);
        }
    }

    public void TryFurniture()
    {
        Debug.Log("try furniture clicked " );
        if (lastInteractedObject != null)
        {
            string furnitureName = lastInteractedObject.name;
            Debug.Log("trying : " + furnitureName);
            PlayerPrefs.SetString("SelectedFurniture", furnitureName);
            FurniturePlacementScript.Instance.TryFurniture();
            ObjectMenuPanel.SetActive(false);
        }
    }

}
