using UnityEngine;
using System.Collections;

public class Brick : MonoBehaviour {

	public Sprite[] hitSprites;
	public AudioClip crackSound;
	public GameObject smoke;

	private int timesHit;
	private LevelManager levelManager;

	public static int breakableCount =0;
	private bool isBreakable ;
	private int breakCounter =0;
	private bool destroyFlag= false;
	// Use this for initialization
	void Start () {
		isBreakable = (this.tag == "Breakable");
		if (isBreakable) {
			breakableCount++;
		}
		timesHit = 0;
		levelManager = GameObject.FindObjectOfType <LevelManager>();
	}
	
	// Update is called once per frame
	void Update () {
		if (destroyFlag) {
			breakCounter+=1;
			if (breakCounter >= 4) {
				//breakCounter = 0;
				GameObject.Destroy (gameObject);
			}
		}
	}

	void OnCollisionEnter2D(Collision2D collision){
		AudioSource.PlayClipAtPoint (crackSound, transform.position,0.2f);
		if (isBreakable) {
			HandleHits();
		}
		//SimulateWin ();
	}

	public void HandleHits(){
		timesHit = timesHit + 1;
		int maxHits = hitSprites.Length + 1;
		if (timesHit >= maxHits) {
			breakableCount--;
			levelManager.BrickDestroyed();
			GameObject smokeObj = Instantiate(smoke,gameObject.transform.position,Quaternion.identity) as GameObject;
			smokeObj.GetComponent<ParticleSystem>().startColor = gameObject.GetComponent<SpriteRenderer>().color;
			 //WaitForSeconds(5);
			destroyFlag = true;
		} else {
			LoadSprite();
		}
	}

	public void LoadSprite(){
		int spriteIndex = timesHit - 1;
		if(hitSprites[spriteIndex])
			this.GetComponent<SpriteRenderer> ().sprite = hitSprites [spriteIndex];
	}
	//TODO Remove this function when logic is ready
	void SimulateWin(){
		levelManager.LoadNextLevel ();
	}
}
