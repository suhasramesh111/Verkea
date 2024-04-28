using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using Photon.Pun;
using Photon.Realtime;
using Photon.Voice.PUN;
using Photon.Voice.Unity;
using TMPro;
using System.Collections;
using System.Collections.Generic;


public class HomeGlobalMenu : MonoBehaviour
{
    public TextMeshProUGUI CheckoutText;
    public GameObject globalMenu; // Reference to the global menu GameObject
    public Camera mainCamera; // Reference to the main camera
    public GameObject outlineObject; // Reference to the OutlineObject
    public Button resumeButton; // Reference to the Resume button
    private Vector3 initialPosition; // Store the initial position of the camera
    private Quaternion initialRotation; // Store the initial rotation of the camera
    private bool menuActive = false; // Flag to track if the global menu is active
    private Button[] menuButtons; // Array to store menu buttons
    private float distanceFromCamera = 2f; // Adjust as needed

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
       /* else if (menuActive)
        {
            // Handle manual navigation with arrow keys
            if (Input.GetKeyDown(KeyCode.DownArrow) || Input.GetKeyDown(KeyCode.UpArrow))
            {
                NavigateMenu(Input.GetKeyDown(KeyCode.DownArrow));
            }
            // Handle Enter key press to invoke button click event
            else if (Input.GetKeyDown(KeyCode.Return) || Input.GetKeyDown(KeyCode.KeypadEnter))
            {
                InvokeSelectedButton();
            }
        }*/
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

                // Set the initial selected button
                /*if (resumeButton != null)
                {
                    resumeButton.Select();
                }*/
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

   /* void NavigateMenu(bool moveDown)
    {
        int currentIndex = GetSelectedButtonIndex();

        if (currentIndex != -1)
        {
            int nextIndex = currentIndex + (moveDown ? 1 : -1);
            nextIndex = Mathf.Clamp(nextIndex, 0, menuButtons.Length - 1);
            menuButtons[nextIndex].Select();
        }
    }

    void InvokeSelectedButton()
    {
        Button selectedButton = EventSystem.current.currentSelectedGameObject.GetComponent<Button>();
        if (selectedButton != null)
        {
            selectedButton.onClick.Invoke();
        }
    }

    int GetSelectedButtonIndex()
    {
        for (int i = 0; i < menuButtons.Length; i++)
        {
            if (menuButtons[i].gameObject == EventSystem.current.currentSelectedGameObject)
            {
                return i;
            }
        }
        return -1;
    }
   */
    public void Checkout()
    {
        if (CheckoutText != null)
        {
            CheckoutText.gameObject.SetActive(true);

            // Calculate the position in front of the camera
            Vector3 textPosition = Camera.main.transform.position + Camera.main.transform.forward * 2f;
            CheckoutText.transform.position = textPosition;

            // Calculate the rotation to face the camera
            Vector3 directionToCamera = Camera.main.transform.position - CheckoutText.transform.position;
            Quaternion rotationToCamera = Quaternion.LookRotation(directionToCamera);
            rotationToCamera *= Quaternion.Euler(0f, 180f, 0f); // Adjust rotation as needed

            // Apply the rotation
            CheckoutText.transform.rotation = rotationToCamera;

            Application.Quit();
            // Start coroutine to deactivate the text after 3 seconds
            StartCoroutine(DeactivateCheckoutText());
            

        }
    }
    IEnumerator DeactivateCheckoutText()
    {
        // Deactivate the canvas
        globalMenu.SetActive(false); 
        Time.timeScale = 1f;

        Debug.Log("deactivate store checkout called");
        yield return new WaitForSeconds(3f); // Wait for 3 seconds with the canvas visible
        Debug.Log("After yield");

        PhotonNetwork.LoadLevel(0);

        // Leave the current room if in a Photon network
        if (PhotonNetwork.InRoom)
        {
            PhotonNetwork.LeaveRoom();
        }

        // Load the lobby scene
    }


    public void BacktoLobby()
    {
        PhotonNetwork.LeaveRoom();
        SceneManager.LoadScene("Lobby");
        MenuManager.Instance.OpenMenu("Loading");
    }

    public void Quit()
    {
        Application.Quit();
    }

}
