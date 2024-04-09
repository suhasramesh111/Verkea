using UnityEngine;

public class OutlineToggler : MonoBehaviour
{
    private Outline lastOutline; // Reference to the last outlined object

    void Start()
    {
        // Disable outline for all objects at the start
        Outline[] outlines = FindObjectsOfType<Outline>();
        foreach (Outline outline in outlines)
        {
            outline.enabled = false;
        }
    }

    void Update()
    {
        // Cast a ray from the reticle pointer to check for objects
        Ray ray = new Ray(transform.position, transform.forward);
        RaycastHit hit;

        // Check if the ray hits something
        if (Physics.Raycast(ray, out hit))
        {
            GameObject hitObject = hit.collider.gameObject;

            // Check if the hit object has an outline component
            Outline outline = hitObject.GetComponent<Outline>();

            if (outline != null)
            {
                // Enable outline for the hit object
                outline.enabled = true;

                // If there was a previously outlined object, disable its outline
                if (lastOutline != null && lastOutline != outline)
                {
                    lastOutline.enabled = false;
                }

                // Update the last outlined object
                lastOutline = outline;
            }
            else
            {
                // If the hit object does not have an outline, disable the outline of the last outlined object
                if (lastOutline != null)
                {
                    lastOutline.enabled = false;
                    lastOutline = null;
                }
            }
        }
        else
        {
            // If the ray doesn't hit anything, disable the outline of the last outlined object
            if (lastOutline != null)
            {
                lastOutline.enabled = false;
                lastOutline = null;
            }
        }
    }
}
