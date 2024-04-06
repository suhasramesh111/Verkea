using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuManager : MonoBehaviour
{
    public static MenuManager Instance;
    [SerializeField] LoadingMenuScript[] menus;

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
        for (int i=0; i<menus.Length; i++)
        {
            if(menus[i].menuName == menuName)
            {
                OpenMenu(menus[i]);
            }
            else if(menus[i].open)
            {
                //Debug.Log("menu open is: " + menus[i].menuName);
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
                //Debug.Log("menu open is: " + menus[i].menuName);
                CloseMenu(menus[i]);
            }
        }
        menu.Open();
    }


    public void CloseMenu(LoadingMenuScript menu)
    {
        //Debug.Log("menu closed is: " + menu.menuName);
        menu.Close();
    }

}
