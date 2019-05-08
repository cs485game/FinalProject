using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace CompleteProject
{
    public class OnHealthTrigger : MonoBehaviour
    {
        public int healthGained = 50;

        public void OnTriggerEnter(Collider other)
        {
            if (other.gameObject.tag == "Player")
            {
                other.GetComponent<PlayerHealth>().Heal(healthGained);
                Destroy(this);
            }
        }
    }
}
