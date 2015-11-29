using UnityEngine;
using System.Collections;

public class Paddle : MonoBehaviour {

	public bool autoPlay =false;
	private Ball ball;
	// Use this for initialization
	void Start () {
		ball = GameObject.FindObjectOfType<Ball> ();
	}
	
	// Update is called once per frame
	void Update () {
		//print (Input.mousePosition);

		if (!autoPlay) {
			MoveWithMouse ();
		} else {
			AutoPlay();
		}

	}

	void MoveWithMouse(){
		Vector3 paddlePos = new Vector3 (0.5f, this.transform.position.y, 0f);
		
		float mousePosInBlocks = Input.mousePosition.x / Screen.width * 16;
		//print (mousePosInBlocks);
		paddlePos.x = Mathf.Clamp (mousePosInBlocks, 0.7f, 15.3f);
		this.transform.position = paddlePos;
	}

	void AutoPlay(){


		Vector3 paddlePos = new Vector3 (0.5f, this.transform.position.y, 0f);
		
		//float mousePosInBlocks = Input.mousePosition.x / Screen.width * 16;
		//print (mousePosInBlocks);
		paddlePos.x = Mathf.Clamp (ball.transform.position.x, 0.5f, 15.25f);
		this.transform.position = paddlePos;
	}
}
