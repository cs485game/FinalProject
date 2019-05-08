using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BossHealthTriggers : MonoBehaviour
{
    public UnityEngine.Events.UnityEvent fullHealthTrigger;
    public UnityEngine.Events.UnityEvent healthTrigger0;
    public UnityEngine.Events.UnityEvent healthTrigger1;
    public UnityEngine.Events.UnityEvent healthTrigger2;

    EnemyHealth enemyHP;
    public int HP;

    bool stageFlag0, stageFlag1, stageFlag2, stageFlag3;

    // Start is called before the first frame update
    void Start()
    {
        enemyHP = GetComponent<EnemyHealth>();
        HP = enemyHP.startingHealth;
        stageFlag0 = true;
        stageFlag1 = true;
        stageFlag2 = true;
        stageFlag3 = true;
        fullHealthTrigger.Invoke();
    }

    // Update is called once per frame
    void Update()
    {
        HP = enemyHP.currentHealth;
        HP = HP % 100;

        if (HP <= 50 && HP > 25 && stageFlag0 == true)
        {
            Debug.Log(HP);
            Debug.Log("Next Stage 1");
            healthTrigger0.Invoke();
            stageFlag0 = false;
        }

        if (HP <= 25 && HP > 10 && stageFlag1 == true)
        {
            Debug.Log(HP);
            Debug.Log("Next Stage 2");
            healthTrigger1.Invoke();
            stageFlag1 = false;
        }

        if (HP <= 10 && HP > 0 && stageFlag2 == true)
        {
            Debug.Log(HP);
            Debug.Log("Next Stage 3");
            healthTrigger2.Invoke();
            stageFlag2 = false;
        }
    }
}
