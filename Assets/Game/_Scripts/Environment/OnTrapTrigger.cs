using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class OnTrapTrigger : MonoBehaviour
{
    public int currentScene;
    //public GameObject player;

    private void Start()
    {
        
    }

    public void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Enemy")
            Destroy(other);
        else if (other.gameObject.tag == "Player")
        {
            //audio
            //time delay
            SceneManager.LoadScene(currentScene);
        }
        else
            ;
    }
}
