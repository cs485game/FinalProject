using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OnPlayerTrigger : MonoBehaviour
{
    public UnityEngine.Events.UnityEvent trigger;

    public void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            Debug.Log("Trigger Activated");
            this.trigger.Invoke();
        }
    }

}
