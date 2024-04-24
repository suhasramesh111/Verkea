using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class GlobalMenuController : MonoBehaviour
{
    public GameObject globalMenu; // Reference to the global menu GameObject
    public Camera mainCamera; // Reference to the main camera
    public GameObject outlineObject; // Reference to the OutlineObject
    public Button resumeButton; // Reference to the Resume button
    private Vector3 initialPosition; // Store the initial position of the camera
    private Quaternion initialRotation; // Store the initial rotation of the camera
    private bool menuActive = false; // Flag to track if the global menu is active

    void Start()
    {
        if (globalMenu != null)
        {
            globalMenu.SetActive(false); // Ensure the global menu is initially deactivated
        }

        if (mainCamera != null)
        {
            initialPosition = mainCamera.transform.position; // Store the initial position of the camera
            initialRotation = mainCamera.transform.rotation; // Store the initial rotation of the camera
        }
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.G))
        {
            ToggleGlobalMenu(); // Toggle the global menu when 'G' key is pressed
        }
        else if (menuActive && Input.GetKeyDown(KeyCode.DownArrow))
        {
            Selectable nextButton = GetNextButton();
            if (nextButton != null)
            {
                nextButton.Select();
            }
        }
    }

    void ToggleGlobalMenu()
    {
        if (globalMenu != null)
        {
            // If the global menu is currently disabled, enable it
            if (!menuActive)
            {
                menuActive = true;
                globalMenu.SetActive(true); // Enable the global menu
                Time.timeScale = 0f; // Freeze the game
                if (mainCamera != null)
                {
                    // Freeze the camera position and rotation by setting them to the initial values
                    mainCamera.transform.position = initialPosition;
                    mainCamera.transform.rotation = initialRotation;
                }

                // Disable the OutlineObject
                if (outlineObject != null)
                {
                    outlineObject.SetActive(false);
                }

                // Highlight the Resume button
                if (resumeButton != null)
                {
                    resumeButton.Select();
                }
            }
        }
    }

    // Method to resume the game
    public void Resume()
    {
        if (globalMenu != null && menuActive)
        {
            menuActive = false;
            globalMenu.SetActive(false); // Disable the global menu
            Time.timeScale = 1f; // Unfreeze the game

            // Enable the OutlineObject
            if (outlineObject != null)
            {
                outlineObject.SetActive(true);
            }
        }
    }

    private Selectable GetNextButton()
    {
        Selectable[] selectables = globalMenu.GetComponentsInChildren<Selectable>(true);
        Selectable currentButton = EventSystem.current.currentSelectedGameObject.GetComponent<Selectable>();

        int currentIndex = System.Array.IndexOf(selectables, currentButton);
        int nextIndex = (currentIndex + 1) % selectables.Length;

        return selectables[nextIndex];
    }
}
