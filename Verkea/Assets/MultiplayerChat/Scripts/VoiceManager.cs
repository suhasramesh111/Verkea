using UnityEngine;
using Photon.Pun;
using Photon.Voice.Unity;

public class VoiceManager : MonoBehaviourPunCallbacks
{
    public static VoiceManager Instance;

    public Recorder PrimaryRecorder { get; private set; }

    void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject); // Don't destroy this object when loading a new scene
        }
        else
        {
            Destroy(gameObject);
            return;
        }

        // Get the Recorder component from the VoiceManager
        PrimaryRecorder = GetComponent<Recorder>();
    }

    public override void OnJoinedRoom()
    {
        StartVoiceChat();
    }

    public override void OnLeftRoom()
    {
        // Voice chat will be stopped when loading a new scene
        StopVoiceChat();
    }

    public void StartVoiceChat()
    {
        if (PrimaryRecorder != null)
        {
            PrimaryRecorder.TransmitEnabled = true;
        }
    }

    public void StopVoiceChat()
    {
        if (PrimaryRecorder != null)
        {
            PrimaryRecorder.TransmitEnabled = false;
        }
    }
}
