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

        Debug.Log("received furniture " + furnitureName);

        // Copy the position of the character in world space
        Vector3 newPosition = character.transform.position;

        // Place the object 2 units in front of the character
        newPosition += character.transform.forward * 4.0f;
        GameObject newFurniture = PhotonNetwork.Instantiate(furnitureName, newPosition, Quaternion.identity);
        float scaleFactor = 0.3f; // 30% of the original size
        newFurniture.transform.localScale = new Vector3(
            newFurniture.transform.localScale.x * scaleFactor,
            newFurniture.transform.localScale.y * scaleFactor,
            newFurniture.transform.localScale.z * scaleFactor
        );

        // Use a Raycast to find the Y-coordinate of the floor
        RaycastHit hit;
        if (Physics.Raycast(newPosition + Vector3.up, Vector3.down, out hit))
        {
            // Check if the raycast hit the floor
            if (hit.collider.gameObject.CompareTag("Floor"))
            {
                newPosition.y = hit.point.y; // Adjust the Y-coordinate to be on the floor
            }
        }

        // Check for collisions
        Collider[] hitColliders = Physics.OverlapSphere(newPosition, 1.0f);
        while (hitColliders.Length > 0 && hitColliders.Any(collider => collider.gameObject.CompareTag("Interactable")))
        {
            // If there is a collision, move the position a bit to the right along the x-axis and forward along the z-axis
            newPosition.x += 1.0f;
            newPosition.z += 1.0f;
            hitColliders = Physics.OverlapSphere(newPosition, 1.0f);
        }

        // Set the final position of the furniture
        newFurniture.transform.position = newPosition;
    }


}