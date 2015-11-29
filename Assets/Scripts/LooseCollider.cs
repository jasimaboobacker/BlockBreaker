using UnityEngine;
using System.Collections;

public class LooseCollider : MonoBehaviour {

	private LevelManager levelManager;
	//public AudioClip endSound;


	void OnTriggerEnter2D(Collider2D trigger){

		//print ("asdfasdF");
		levelManager = GameObject.FindObjectOfType<LevelManager> ();
		levelManager.LoadLevel ("Loose Screen");
	}
	void OnCollisionEnter2D(Collision2D collision){
		//audio.Play ();
		print ("collision");
	}
}
