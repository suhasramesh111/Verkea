using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using TMPro;
using Photon.Realtime;

public class Launcher : MonoBehaviourPunCallbacks
{
    public static Launcher Instance;


    [SerializeField] TMP_InputField roomNameInputField;
    [SerializeField] TMP_Text errorText;
    [SerializeField] TMP_Text roomNameText;
    [SerializeField] Transform roomListContent;
    [SerializeField] GameObject roomListItemPrefab;

    public LoadingMenuScript roomMenu;


    void Awake()
    {
        Instance = this;

    }
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("joined a Master");
        PhotonNetwork.ConnectUsingSettings(); 
    }

    public override void OnConnectedToMaster()
    {
        PhotonNetwork.JoinLobby();
        PhotonNetwork.AutomaticallySyncScene = true;
    }

    public override void OnJoinedLobby()
    {
        Debug.Log("joined a lobby");
        if (MenuManager.Instance == null)
        {
            Debug.Log("instance is null not correct");
        }
        
        else
        {
            MenuManager.Instance.OpenMenu("Title");
        }
        

    }

    public void CreateRoom()
    {
        Debug.Log("create button clicked in CREATE ROOM");
        if (string.IsNullOrEmpty(roomNameInputField.text))
        {
            return; 
        }
        PhotonNetwork.CreateRoom(roomNameInputField.text);
        MenuManager.Instance.OpenMenu("Loading");

    }

    public override void OnJoinedRoom()
    {
        Debug.Log("room joined ");
        MenuManager.Instance.OpenMenu("room menu");
        roomNameText.text = PhotonNetwork.CurrentRoom.Name;
    }

    public override void OnCreateRoomFailed(short returnCode, string message)
    {
        errorText.text = "Room Creation failed" + message;
        MenuManager.Instance.OpenMenu("error");
    }

    public void LeaveRoom()
    {
        PhotonNetwork.LeaveRoom();
        MenuManager.Instance.OpenMenu("Loading");
    }


    public void JoinRoom(RoomInfo info)
    {
        Debug.Log("join room clicked");
        if (info.Name != null)
        {
            Debug.Log("the room name is " + info.Name);
            PhotonNetwork.JoinRoom(info.Name);
        }
        else
        {
            Debug.Log("no room found");
        }
        
        MenuManager.Instance.OpenMenu("Loading");
    }



    public override void OnLeftRoom()
    {
        MenuManager.Instance.OpenMenu("Title");
    }

    

    public override void OnRoomListUpdate(List<RoomInfo> roomList)
    {
        foreach( Transform trans in roomListContent)
        {
            Destroy(trans.gameObject);
        }

        for (int i = 0; i < roomList.Count; i++)
        {
            Instantiate(roomListItemPrefab, roomListContent).GetComponent<RoomListItem>().SetUp(roomList[i]);
        }
    }


    public void StoreScene()
    {

        MenuManager.Instance.CloseMenu(roomMenu);
        Debug.Log("switch to store scene");
        PhotonNetwork.LoadLevel(1);
    }

    public void HomeScene()
    {
        MenuManager.Instance.CloseMenu(roomMenu);
        Debug.Log("switch to home scene");
        PhotonNetwork.LoadLevel(2);
    }

}
