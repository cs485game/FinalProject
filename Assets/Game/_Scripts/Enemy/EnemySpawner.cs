using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace CompleteProject
{
    public class EnemySpawner : MonoBehaviour
    {
        private PlayerHealth playerHealth;       // Reference to the player's heatlh.
        public GameObject enemy;                // The enemy prefab to be spawned.
        public float spawnTime;            // How long between each spawn.
        public Transform[] spawnPoints;         // An array of the spawn points this enemy can spawn from.
        private GameObject spawner;
        public bool canSpawn = true;

        private bool beingHandled = false;
        public bool initialSpawn = true;
        private bool initialBeingHandled = false;

        // Start is called before the first frame update
        public void Start()
        {
            //spawnTime = spawnTime/Time.deltaTime;
            GameObject player = GameObject.FindGameObjectWithTag("Player");
            playerHealth = player.GetComponent<PlayerHealth>();

            onCreateSpawner();
            //initialHandler();

            initialSpawn = false;

            if (this.gameObject.activeSelf == true && this.gameObject.activeInHierarchy == true)
            {
                beingHandled = false;
                //StartCoroutine(HandleIt());
                // Call the Spawn function after a delay of the spawnTime and then continue to call after the same amount of time.
                //InvokeRepeating("Spawn", spawnTime, spawnTime);
            }
        }

        public void onCreateSpawner()
        {
            if (initialSpawn == true)
            {
                Spawn();
                initialSpawn = false;
            }
            else
                initialSpawn = false;
        }
        
        public void Update()
        {
            //Debug.Log("Enemy Spawner Update called");
            //Debug.Log("Enemy Spawner Update called, CoRoutine Started, being handled: " + beingHandled);
            if (this.gameObject.activeInHierarchy == false || this.gameObject.activeSelf == false)
                beingHandled = false;

            if (playerHealth.currentHealth >= 1 && !beingHandled && (this.gameObject.activeInHierarchy == true || this.gameObject.activeSelf))
            {
                Debug.Log("Enemy Spawner Update called, CoRoutine Started, being handled: " + beingHandled);
                StartCoroutine(HandleIt());
            }
            /*
            if (this.gameObject.activeSelf == false || this.gameObject.activeInHierarchy == false)
            {
                if (playerHealth.currentHealth >= 1 && !beingHandled)
                {
                    CancelInvoke("Spawn");
                }
            }
            */
        }

        //COROUTINE WILL NOT SPAWN ENEMIES AFTER BEING SETACTIVEFALSE AND THEN SETACTIVETRUE, BEINGHANDLED IS LOCKED IN TRUE
        //INVOKEREPEATING DOES NOT STOP IF SPAWNER IS SETACTIVEFALSE
        //MAYBE TRY BUILDING SCRIPT/EVENT MANAGER FOR PARENT EMPTY GAME OBJECT, FILL WIHT SPAWNER OBJECTS, ON SETACTIVETRUE CALL EACH SPAWNERS UPDATE OR START
        
        private IEnumerator HandleIt()
        {
            beingHandled = true;
            //canSpawn = this.gameObject.activeInHierarchy;
            //Debug.Log("Active " + canSpawn);
            yield return new WaitForSeconds(spawnTime);
            //if (canSpawn == true)
                Spawn();
            beingHandled = false;
        }

        private IEnumerator initialHandler()
        {
            initialBeingHandled = true;
            yield return new WaitForSeconds(5f);
            //onCreateSpawner();
            Spawn();
            initialBeingHandled = false;
        }

        public void Spawn()
        {
            if (canSpawn == true && this.GetComponent<EnemyHealth>().isDead == false && (this.gameObject.activeInHierarchy == true || this.gameObject.activeSelf))
            {
                // If the player has no health left...
                if (playerHealth.currentHealth <= 0f || this.GetComponent<EnemyHealth>().currentHealth < 1)
                {
                    // ... exit the function.
                    Debug.Log("Spawner Killed");
                    canSpawn = false;
                    //CancelInvoke("Spawn");
                    Destroy(this.GetComponent<EnemySpawner>());
                    return;
                }
                ///*
                //for (int i = 0; i < spawnPoints.Length; i++)
                //{
                int i = 0;
                Instantiate(enemy, spawnPoints[i].position, spawnPoints[i].rotation);
                //}
                //*/
            }
        }
    }
}