using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuManager : MonoBehaviour
{
    public static MenuManager Instance;
    [SerializeField] LoadingMenuScript[] menus;
    public GameObject mainCamera; // Reference to the main camera
    public float distanceFromCamera = 30f; // Distance from the camera to place the menu

    private void Awake()
    {
        // Check if an instance already exists
        if (Instance == null)
        {
            // If not, set the instance to this
            Instance = this;
        }
        else if (Instance != this)
        {
            // If an instance already exists and it's not this, destroy this GameObject
            Destroy(gameObject);
        }

        // Ensure that the Instance persists between scenes
        DontDestroyOnLoad(gameObject);
    }

    public void OpenMenu(string menuName)
    {
        for (int i = 0; i < menus.Length; i++)
        {
            if (menus[i].menuName == menuName)
            {
                OpenMenu(menus[i]);
            }
            else if (menus[i].open)
            {
                CloseMenu(menus[i]);
            }
        }
    }

    public void OpenMenu(LoadingMenuScript menu)
    {
        for (int i = 0; i < menus.Length; i++)
        {
            if (menus[i].open)
            {
                CloseMenu(menus[i]);
            }
        }

        // Calculate the position in front of the camera
        Vector3 menuPosition = mainCamera.transform.position + mainCamera.transform.forward * distanceFromCamera;
        menu.transform.position = menuPosition;

        // Calculate the rotation to face the camera
        Quaternion rotationToCamera = Quaternion.LookRotation(mainCamera.transform.forward, mainCamera.transform.up);
        menu.transform.rotation = rotationToCamera;

        menu.Open();
    }

    public void CloseMenu(LoadingMenuScript menu)
    {
        menu.Close();
    }
}