using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using Photon.Pun;
using Photon.Realtime;
using Photon.Voice.PUN;
using Photon.Voice.Unity;
using System.Collections;
using System.Collections.Generic;
using TMPro;

public class GlobalMenuController : MonoBehaviour
{
    public TextMeshProUGUI StoreCheckoutText;
    public GameObject globalMenu; // Reference to the global menu GameObject
    public Camera mainCamera; // Reference to the main camera
    public GameObject outlineObject; // Reference to the OutlineObject
    public Button resumeButton; // Reference to the Resume button
    private Vector3 initialPosition; // Store the initial position of the camera
    private Quaternion initialRotation; // Store the initial rotation of the camera
    private bool menuActive = false; // Flag to track if the global menu is active
    private Button[] menuButtons; // Array to store menu buttons
    private float distanceFromCamera = 4f; // Adjust as needed

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

        // Get all buttons in the menu
        menuButtons = globalMenu.GetComponentsInChildren<Button>();
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.G) || Input.GetButton("js11"))
        {
            ToggleGlobalMenu(); // Toggle the global menu when 'G' key is pressed
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

                // Calculate the position in front of the camera
                Vector3 menuPosition = mainCamera.transform.position + mainCamera.transform.forward * distanceFromCamera;
                globalMenu.transform.position = menuPosition;

                // Calculate the rotation to face the camera
                Quaternion rotationToCamera = Quaternion.LookRotation(mainCamera.transform.forward, mainCamera.transform.up);
                globalMenu.transform.rotation = rotationToCamera;

                // Disable the OutlineObject
                if (outlineObject != null)
                {
                    outlineObject.SetActive(false);
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

    public void StoreCheckout()
    {
        if (StoreCheckoutText != null)
        {
            StoreCheckoutText.gameObject.SetActive(true);

            // Calculate the position in front of the camera
            Vector3 textPosition = mainCamera.transform.position + mainCamera.transform.forward * 2f;
            StoreCheckoutText.transform.position = textPosition;

            // Calculate the rotation to face the camera
            Vector3 directionToCamera = mainCamera.transform.position - StoreCheckoutText.transform.position;
            Quaternion rotationToCamera = Quaternion.LookRotation(directionToCamera);
            rotationToCamera *= Quaternion.Euler(0f, 180f, 0f); // Adjust rotation as needed

            // Apply the rotation
            StoreCheckoutText.transform.rotation = rotationToCamera;

            // Start coroutine to deactivate the text after 3 seconds
            StartCoroutine(DeactivateStoreCheckoutText());
        }
    }

    IEnumerator DeactivateStoreCheckoutText()
    {
        globalMenu.SetActive(false);
        // Wait for 3 seconds
        yield return new WaitForSeconds(3f);
        Application.Quit();
    }

    public void BacktoLobby()
    {
        PhotonNetwork.LeaveRoom();
        SceneManager.LoadScene("Lobby");
        //MenuManager.Instance.OpenMenu("Loading");
    }

    public void Quit()
    {
        Application.Quit();
    }
}
