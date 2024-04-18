using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using ExitGames.Client.Photon;

public class FurniturePlacementScript : MonoBehaviourPunCallbacks, IOnEventCallback
{
    public static FurniturePlacementScript Instance;
    public string furniturePath = "Resources/";

    void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    void Start()
    {
        // Manual check to verify if the prefab can be loaded
        GameObject testPrefab = Resources.Load<GameObject>("3Seat3");
        if (testPrefab != null)
        {
            Debug.Log("Prefab found at: " + furniturePath + "3Seat3.prefab");
        }
        else
        {
            Debug.LogError("Prefab not found at: " + furniturePath + "3Seat3.prefab");
        }
    }

    public void TryFurniture()
    {
        if (PlayerPrefs.HasKey("SelectedFurniture"))
        {
            string furnitureName = PlayerPrefs.GetString("SelectedFurniture");
            string fullPath = furniturePath + furnitureName;
            Debug.Log("Searching for prefab at: " + fullPath); // Log the full path

            // Load the prefab
            GameObject furniturePrefab = Resources.Load<GameObject>(furnitureName);

            if (furniturePrefab != null)
            {
                Debug.Log("Prefab loaded successfully: " + furniturePrefab.name);

                // Raise an event to notify the living room scene to instantiate the furniture
                object[] data = new object[] { furniturePrefab.name };
                RaiseEventOptions raiseEventOptions = new RaiseEventOptions { Receivers = ReceiverGroup.All };
                PhotonNetwork.RaiseEvent(1, data, raiseEventOptions, SendOptions.SendReliable);
            }
            else
            {
                Debug.LogWarning("Furniture prefab not found: " + furnitureName);
            }

            PlayerPrefs.DeleteKey("SelectedFurniture");
        }
    }

    public void OnEvent(EventData photonEvent)
    {
        if (photonEvent.Code == 1)
        {
            object[] data = (object[])photonEvent.CustomData;
            string furnitureName = (string)data[0];
            InstantiateFurniture(furnitureName);
        }
    }

    void InstantiateFurniture(string furnitureName)
    {
        string fullPath = furniturePath + furnitureName;
        GameObject furniturePrefab = Resources.Load<GameObject>(furnitureName);

        if (furniturePrefab != null)
        {
            Vector3 spawnPosition = new Vector3(5f, 0f, 5f); // Adjust the position as needed
            PhotonNetwork.InstantiateRoomObject(furniturePrefab.name, spawnPosition, Quaternion.identity);
            Debug.Log("Furniture instantiated: " + furniturePrefab.name);
        }
        else
        {
            Debug.LogError("Furniture prefab not found: " + furnitureName);
        }
    }
}
