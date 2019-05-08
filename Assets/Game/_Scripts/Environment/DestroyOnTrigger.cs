using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyOnTrigger : MonoBehaviour
{
    public void OnTriggerEnter(Collider other)
    {
        if (other.tag == "bullet")
            Destroy(other);
        else if (other.tag != "Player")
            Destroy(this);
        else
            ;
    }

}
