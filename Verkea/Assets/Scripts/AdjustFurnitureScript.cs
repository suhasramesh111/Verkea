using System.Collections;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using ExitGames.Client.Photon;

public class AdjustFurnitureScript : MonoBehaviourPunCallbacks, IOnEventCallback
{
    private bool furnitureInstantiated = false;

    void Start()
    {
        PhotonNetwork.NetworkingClient.EventReceived += OnEvent;
    }

    public void OnEvent(EventData photonEvent)
    {
        if (photonEvent.Code == 1 && PhotonNetwork.IsMasterClient && !furnitureInstantiated)
        {
            object[] data = (object[])photonEvent.CustomData;
            string furnitureName = (string)data[0];
            StartCoroutine(WaitAndAdjustFurniture(furnitureName));
        }
        // The rest of your code...
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

        // Check for collisions
        Collider[] hitColliders = Physics.OverlapSphere(newPosition, 1.0f);
        while (hitColliders.Length > 0)
        {
            // If there is a collision, move the position a bit to the right along the x-axis
            newPosition.x += 1.0f;
            hitColliders = Physics.OverlapSphere(newPosition, 1.0f);
        }

        // Instantiate the new furniture object with a unique name and PhotonView ID
        GameObject newFurniture = PhotonNetwork.Instantiate(furnitureName, newPosition, Quaternion.identity);

        // Adjust the scale of the new furniture
        newFurniture.transform.localScale = new Vector3(3, 3, 3);

        // Add the 'Interactable' tag
        newFurniture.tag = "Interactable";

        furnitureInstantiated = true;
    }

    void OnDestroy()
    {
        PhotonNetwork.NetworkingClient.EventReceived -= OnEvent;
    }
}

