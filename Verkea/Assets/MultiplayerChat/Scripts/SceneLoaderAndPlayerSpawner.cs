using UnityEngine;
using UnityEngine.SceneManagement;
using Photon.Pun;

public class SceneLoaderAndPlayerSpawner : MonoBehaviourPunCallbacks
{
    public string storeSceneName = "Store";
    public string livingRoomSceneName = "LivingRoom";
    public string playerPrefabName = "DesignerCharacter"; // Name of the player prefab

    void Awake()
    {
        DontDestroyOnLoad(gameObject);
    }

    public void LoadLivingRoom()
    {
        photonView.RPC("LoadSceneRPC", RpcTarget.All, livingRoomSceneName);
    }

    [PunRPC]
    void LoadSceneRPC(string sceneName)
    {
        PhotonNetwork.LoadLevel(sceneName);
    }

    // This method is called on all clients when a scene finishes loading
    public override void OnJoinedRoom()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            // Master client loads the initial scene for all players
            LoadLivingRoom();
        }
    }
}
