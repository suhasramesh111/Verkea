using UnityEngine;
using UnityEngine.UI; // Import the UnityEngine.UI namespace for UI components

public class OutlineScript : MonoBehaviour
{
    private GameObject lastHoveredObject; // Last object hovered by the reticle
    private Vector3 originalScale; // Original scale of the object
    private Vector3 newSize; // Size of the object after scaling
    private bool isScaled = false; // Boolean variable to track if the object is scaled
    public GameObject ObjectMenuPanel; // Reference to the ObjectMenuPanel UI game object

    void Start()
    {
        // Disable the ObjectMenuPanel UI game object initially
        if (ObjectMenuPanel != null)
        {
            ObjectMenuPanel.SetActive(false);
        }

        // Find the Exit button in the ObjectMenuPanel and add a listener to its onClick event
        Button exitButton = ObjectMenuPanel.GetComponentInChildren<Button>();
        if (exitButton != null)
        {
            exitButton.onClick.AddListener(OnExitButtonClick);
        }
    }

    void Update()
    {
        Debug.Log("CHECKING... ");
        // Get the object under the reticle
        GameObject currentObject = GetObjectUnderReticle();

        // Check if the object under the reticle is different from the last one hovered over
        if (currentObject != lastHoveredObject)
        {
            Debug.Log("New object under reticle ");

            // Reset the scale of the last hovered object if it's not null
            if (lastHoveredObject != null)
            {
                ResetSize(lastHoveredObject);
                isScaled = false; // Set isScaled to false when resetting the size
            }

            // Check if the object under the reticle has the "Interactable" tag
            if (currentObject != null && currentObject.CompareTag("Interactable"))
            {
                // Store the original scale of the object
                originalScale = currentObject.transform.localScale;

                // Increase the size of the new hovered object
                newSize = originalScale * 1.8f;
                SetSize(currentObject, newSize);
                lastHoveredObject = currentObject;
                isScaled = true; // Set isScaled to true when scaling the object
            }
            else
            {
                lastHoveredObject = null;
            }
        }
        else if (currentObject == null && lastHoveredObject != null)
        {
            // Reset the size of the object to its original size
            ResetSize(lastHoveredObject);
            lastHoveredObject = null;
            isScaled = false; // Set isScaled to false when resetting the size
        }

        // Handle input to enable ObjectMenuPanel and adjust its position
        if (Input.GetKeyDown(KeyCode.X))
        {
            if (isScaled && ObjectMenuPanel != null)
            {
                // Enable the ObjectMenuPanel UI game object
                ObjectMenuPanel.SetActive(true);

                // Set the position of the ObjectMenuPanel 5 units above the scaled object
                if (lastHoveredObject != null)
                {
                    Vector3 panelPosition = lastHoveredObject.transform.position + Vector3.up * 30f;
                    ObjectMenuPanel.transform.position = panelPosition;

                    // Calculate the rotation needed to face the camera
                    Vector3 directionToCamera = Camera.main.transform.position - ObjectMenuPanel.transform.position;
                    Quaternion rotationToCamera = Quaternion.LookRotation(directionToCamera);

                    // Apply the rotation offset (180-degree rotation around the y-axis)
                    rotationToCamera *= Quaternion.Euler(0f, 180f, 0f);

                    // Apply the rotation
                    ObjectMenuPanel.transform.rotation = rotationToCamera;
                }
            }
        }
    }

    GameObject GetObjectUnderReticle()
    {
        // Create a ray from the camera to the reticle's position
        Ray ray = new Ray(Camera.main.transform.position, Camera.main.transform.forward);
        RaycastHit hit;

        // Perform a physics sphere cast to find the object under the reticle
        if (Physics.SphereCast(ray, 0.1f, out hit))
        {
            Debug.Log("object hit is " + hit.collider.gameObject.name);
            return hit.collider.gameObject;
        }

        return null;
    }

    void SetSize(GameObject obj, Vector3 size)
    {
        // Set the size of the object
        obj.transform.localScale = size;
    }

    void ResetSize(GameObject obj)
    {
        // Reset the size of the object to its original size
        obj.transform.localScale = originalScale;
    }

    // Method to handle the Exit button click event
    public void OnExitButtonClick()
    {
        // Disable the ObjectMenuPanel UI game object
        if (ObjectMenuPanel != null)
        {
            ObjectMenuPanel.SetActive(false);
        }
    }
}
