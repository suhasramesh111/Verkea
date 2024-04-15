using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine.SceneManagement;
using TMPro;

public class TransferScript : MonoBehaviourPunCallbacks
{
    private new PhotonView photonView; // PhotonView component from this GameObject
    public TextMeshProUGUI statusText; // TextMeshPro to display status

    [System.Serializable]
    public class ObjectData
    {
        public string objectName;
        public Vector3 objectPosition;
        public Vector3 objectRotation;

        public ObjectData(string name, Vector3 position, Vector3 rotation)
        {
            objectName = name;
            objectPosition = position;
            objectRotation = rotation;
        }
    }

    void Start()
    {
        // Get the PhotonView component attached to this GameObject
        photonView = GetComponent<PhotonView>();

        if (photonView == null)
        {
            Debug.LogError("PhotonView component on this GameObject is missing.");
        }

        // Initialize the status text
        if (statusText == null)
        {
            Debug.LogWarning("StatusText is not assigned.");
        }
        else
        {
            statusText.text = "Ready";
        }
    }

    public void SendObjectToOtherPlayer(GameObject objectToSend)
    {
        // Check if we are in the store scene
        if (SceneManager.GetActiveScene().name == "STORE")
        {
            statusText.text = "Sending object to other player...";
            Debug.Log("Sending object to other player...");

            // Serialize the object's data
            string objectName = objectToSend.name;
            Vector3 objectPosition = objectToSend.transform.position;
            Vector3 objectRotation = objectToSend.transform.eulerAngles;

            ObjectData objectData = new ObjectData(objectName, objectPosition, objectRotation);
            string jsonData = JsonUtility.ToJson(objectData);

            photonView.RPC("ReceiveObjectFromOtherPlayer", RpcTarget.Others, jsonData);
        }
        else
        {
            statusText.text = "Not in the store scene, cannot send object.";
            Debug.Log("Not in the store scene, cannot send object.");
        }
    }

    [PunRPC]
    void ReceiveObjectFromOtherPlayer(string jsonData)
    {
        // Check if we are in the room scene
        if (SceneManager.GetActiveScene().name == "LIVINGROOM")
        {
            statusText.text = "Receiving object from other player...";
            Debug.Log("Receiving object from other player...");

            // Deserialize the object's data
            ObjectData objectData = JsonUtility.FromJson<ObjectData>(jsonData);

            // Load the GameObject from the Resources folder
            GameObject objectToInstantiate = Resources.Load<GameObject>(objectData.objectName);

            if (objectToInstantiate != null)
            {
                // Instantiate the received object in the room scene relative to the main camera
                GameObject receivedObject = Instantiate(objectToInstantiate, objectData.objectPosition, Quaternion.Euler(objectData.objectRotation));
            }
            else
            {
                statusText.text = $"Object {objectData.objectName} not found in Resources folder.";
                Debug.LogError($"Object {objectData.objectName} not found in Resources folder.");
            }
        }
        else
        {
            statusText.text = "Not in the living room scene, cannot receive object.";
            Debug.Log("Not in the living room scene, cannot receive object.");
        }
    }
}
