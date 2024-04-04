using System.Collections;       
using System.Collections.Generic;
using UnityEngine;

public class cube : MonoBehaviour
{
   
    // Start is called before the first frame update
    void Start()
    {
        // Moves the object forward two units in the direction it's facing.
        transform.Translate(0, 0, 2);
    }

    // Update is called once per frame
    void Update()
    {
        // Moves the object forward at two units per second.
        transform.position = new Vector3(0, 0, 2) * Time.deltaTime;
    }
}
