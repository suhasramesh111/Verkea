using System.Collections;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using ExitGames.Client.Photon;
using System.Linq;

public class AdjustFurnitureScript : MonoBehaviourPunCallbacks
{
    public static AdjustFurnitureScript Instance; // Singleton Instance
    //private int nextViewId = 1000; // Starting from a higher number to avoid conflicts

    public GameObject character; // Reference to the character object

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

        Debug.Log("received furniture " +furnitureName);

        // Calculate the position for the new furniture
        //Vector3 newPosition = character.transform.position + character.transform.forward * 3;
        // Copy the position of the character in world space
        Vector3 newPosition = character.transform.position;

        // Place the object in front of the character
        newPosition += character.transform.forward * 1.0f;

        // Use the character's Y-coordinate for the furniture's Y-coordinate
        newPosition.y = 1.0f;
    
        // Check for collisions
        Collider[] hitColliders = Physics.OverlapSphere(newPosition, 1.0f);
        while (hitColliders.Length > 0 && hitColliders.Any(collider => collider.gameObject.CompareTag("Interactable")))
        {
            // If there is a collision, move the position a bit to the right along the x-axis and forward along the z-axis
            newPosition.x += 1.0f;
            newPosition.z += 1.0f;
            hitColliders = Physics.OverlapSphere(newPosition, 1.0f);
        }



        // Instantiate the new furniture object with a unique name and PhotonView ID
        GameObject newFurniture = PhotonNetwork.Instantiate(furnitureName, newPosition, Quaternion.identity);
        // Set the parent to null to make the position in world space
        //newFurniture.transform.parent = null;

        // Adjust the scale of the new furniture
        // newFurniture.transform.localScale = new Vector3(1, 1, 1);
    }
}