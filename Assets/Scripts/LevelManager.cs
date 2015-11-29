using UnityEngine;
using System.Collections;

public class LevelManager : MonoBehaviour {

	public void LoadLevel(string name){
		Debug.Log ("level requested for " + name);
		Brick.breakableCount = 0;
		Application.LoadLevel (name);
	}

	public void QuitLevel(){
		Debug.Log ("Quit game ");
		Application.Quit ();
	}

	public void BackLevel(){
		Application.LoadLevel ("Start");
	}
	public void LoadNextLevel(){
		Brick.breakableCount = 0;
		Application.LoadLevel (Application.loadedLevel +1);
	}

	public void BrickDestroyed(){
		if(Brick.breakableCount<=0){
			LoadNextLevel();
		}
	}
}
