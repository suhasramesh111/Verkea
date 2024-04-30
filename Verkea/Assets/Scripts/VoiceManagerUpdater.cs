using UnityEngine;

public class VoiceManagerUpdater : MonoBehaviour
{
    private GameObject player; // Reference to the player game object

    private void Start()
    {
        // Ensure this game object persists across scene changes
        DontDestroyOnLoad(gameObject);

        // Find the player game object based on tag
        FindPlayer();
    }

    private void Update()
    {
        // Update the position of the VoiceManager to match the player's position
        if (player != null)
        {
            transform.position = player.transform.position;
        }
        else
        {
            // If player object is not found, find it again
            FindPlayer();
        }
    }

    private void FindPlayer()
    {
        // Find the player game object based on tag
        player = GameObject.FindGameObjectWithTag("Player");

        // Check if player is found
        if (player == null)
        {
            Debug.LogError("Player game object not found! Make sure it is tagged with 'Player'.");
        }
    }
}
