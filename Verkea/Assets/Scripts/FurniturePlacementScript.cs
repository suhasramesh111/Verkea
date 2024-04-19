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
            Debug.Log("Received event to instantiate furniture: " + furnitureName);
        }
    }
}
