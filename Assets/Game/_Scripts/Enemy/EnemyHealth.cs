using UnityEngine;

public class EnemyHealth : MonoBehaviour
{
    public int startingHealth = 100;
    public int currentHealth = 1;
    public float sinkSpeed = 2.5f;
    public int scoreValue = 1;
    public int damageTaken = 35;
    public AudioClip deathClip;

    Animator anim;
    AudioSource enemyAudio;
    CapsuleCollider capsuleCollider;
    public bool isDead;
    bool isSinking;

    public UnityEngine.Events.UnityEvent deathTrigger;

    void Awake()
    {
        anim = GetComponent<Animator>();
        enemyAudio = GetComponent<AudioSource>();
        capsuleCollider = GetComponent<CapsuleCollider>();

        currentHealth = startingHealth;
    }

    void Update()
    {
        if (isSinking)
        {
            transform.Translate(-Vector3.up * sinkSpeed * Time.deltaTime);
        }
        if (isDead == true)
            deathTrigger.Invoke();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("bullet"))
        {
            //this.capsuleCollider.isTrigger = true;
            TakeDamage(damageTaken);
            other.gameObject.SetActive(false);
            //this.capsuleCollider.isTrigger = false;
        }
        if (other.gameObject.CompareTag("floor")) ;
        {
            //this.capsuleCollider.isTrigger = false;
            //this.capsuleCollider.isTrigger = true;
        }
    }

    public void TakeDamage(int amount)
    {
        if (isDead)
        {
            deathTrigger.Invoke();
            return;
        }

        enemyAudio.Play();
        currentHealth -= amount;

        if (currentHealth <= 0)
        {
            Debug.Log("Object Died");
            Death();
            return;
        }
    }

    public void Death()
    {
        isDead = true;
        if (isDead == true)
            deathTrigger.Invoke();

        this.gameObject.SetActive(false);
        capsuleCollider.isTrigger = false;

        anim.SetTrigger("Dead");
        //ScoreManager.score += scoreValue;
        enemyAudio.clip = deathClip;
        enemyAudio.Play();
        //float delay = 0f;
        //delay += delay + Time.deltaTime;
        //if (delay > 3f)
        return;

    }

    public void StartSinking()
    {
        GetComponent<UnityEngine.AI.NavMeshAgent>().enabled = false;
        GetComponent<Rigidbody>().isKinematic = true;
        isSinking = true;
        ScoreManager.score += scoreValue;
        Destroy(gameObject, 2f);
    }
}
