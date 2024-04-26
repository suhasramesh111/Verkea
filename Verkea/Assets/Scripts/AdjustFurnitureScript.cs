using System.Collections;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using ExitGames.Client.Photon;

public class AdjustFurnitureScript : MonoBehaviourPunCallbacks
{
    public static AdjustFurnitureScript Instance; // Singleton Instance
    private int nextViewId = 1000; // Starting from a higher number to avoid conflicts

    void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
        else
        {
            Destroy(gameObject);
        }
    }

    public void AdjustFurniture(string furnitureName)
    {
        StartCoroutine(WaitAndAdjustFurniture(furnitureName));
    }

    IEnumerator WaitAndAdjustFurniture(string furnitureName)
    {
        // Wait for the next frame to ensure that the furniture has been instantiated
        yield return new WaitForEndOfFrame();

        // Calculate the position for the new furniture
        Vector3 newPosition = Camera.main.transform.position + Camera.main.transform.forward * 5;
        newPosition.x += 5.0f;

        // Use the character's camera Y-coordinate for the furniture's Y-coordinate
        newPosition.y = -40f;

        // Check for collisions
        Collider[] hitColliders = Physics.OverlapSphere(newPosition, 1.5f);
        while (hitColliders.Length > 0)
        {
            // If there is a collision, move the position a bit to the right along the x-axis and forward along the z-axis
            newPosition.x += 3.0f;
            newPosition.z += 2.0f;
            hitColliders = Physics.OverlapSphere(newPosition, 2.5f);
        }

        // Instantiate the new furniture object with a unique name and PhotonView ID
        GameObject newFurniture = PhotonNetwork.Instantiate(furnitureName, newPosition, Quaternion.identity);

        // Assign a unique PhotonView ID
        PhotonView photonView = newFurniture.GetPhotonView();
        photonView.ViewID = nextViewId++;

        // Append a unique identifier to the object name
        newFurniture.name = furnitureName + "_" + photonView.ViewID;

        // Adjust the scale of the new furniture
        newFurniture.transform.localScale = new Vector3(8, 8, 8);

        // Add the 'Interactable' tag
        newFurniture.tag = "Interactable";
    }
}