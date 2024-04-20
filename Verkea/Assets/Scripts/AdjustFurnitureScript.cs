
using System.Collections;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using ExitGames.Client.Photon;

public class AdjustFurnitureScript : MonoBehaviourPunCallbacks, IOnEventCallback
{
    private int nextViewId = 1000; // Starting from a higher number to avoid conflicts

    void Start()
    {
        PhotonNetwork.NetworkingClient.EventReceived += OnEvent;
    }

    public void OnEvent(ExitGames.Client.Photon.EventData photonEvent)
    {
        if (photonEvent.Code == 1)
        {
            object[] data = (object[])photonEvent.CustomData;
            string furnitureName = (string)data[0];
            StartCoroutine(WaitAndAdjustFurniture(furnitureName));
        }
        else if (photonEvent.Code == 202) // The custom operation code to set ownership
        {
            object[] content = (object[])photonEvent.CustomData;
            if (content != null && content.Length == 3)
            {
                int viewId = (int)content[0];
                int ownerId = (int)content[1];
                byte[] data = (byte[])content[2];

                PhotonView photonView = PhotonNetwork.GetPhotonView(viewId);
                if (photonView != null)
                {
                    photonView.OwnerActorNr = ownerId;
                    photonView.RequestOwnership();
                }
                else
                {
                    Debug.LogErrorFormat("Failed to find a PhotonView with ID={0} for incoming OwnershipUpdate event (newOwnerActorNumber={1}), sender={2}. If you load scenes, make sure to pause the message queue.", viewId, ownerId, photonEvent.Sender);
                }
            }
            else
            {
                Debug.LogErrorFormat("Invalid content in OwnershipUpdate event: {0}", photonEvent.ToStringFull());
            }
        }
    }

    IEnumerator WaitAndAdjustFurniture(string furnitureName)
    {
        // Wait for the next frame to ensure that the furniture has been instantiated
        yield return new WaitForEndOfFrame();

        // Calculate the position for the new furniture
        Vector3 newPosition = Camera.main.transform.position + Camera.main.transform.forward * 5;
        newPosition.x += 3.0f;

        // Use the character's camera Y-coordinate for the furniture's Y-coordinate
        newPosition.y = -40;

        // Instantiate the new furniture object with a unique name and PhotonView ID
        GameObject newFurniture = PhotonNetwork.Instantiate(furnitureName, newPosition, Quaternion.identity);

        // Assign a unique PhotonView ID
        PhotonView photonView = newFurniture.GetPhotonView();
        photonView.ViewID = nextViewId++;

        // Append a unique identifier to the object name
        newFurniture.name = furnitureName + "_" + photonView.ViewID;

        // Adjust the scale of the new furniture
        newFurniture.transform.localScale = new Vector3(3, 3, 3);

        // Add the 'Interactable' tag
        newFurniture.tag = "Interactable";
    }


    void OnDestroy()
    {
        PhotonNetwork.NetworkingClient.EventReceived -= OnEvent;
    }
}
