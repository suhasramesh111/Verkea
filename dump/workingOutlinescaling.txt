using UnityEngine;

public class OutlineScript : MonoBehaviour
{
    private GameObject lastHoveredObject; // Last object hovered by the reticle
    private Vector3 originalScale; // Original scale of the object
    private Vector3 newSize; // Size of the object after scaling

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
}
