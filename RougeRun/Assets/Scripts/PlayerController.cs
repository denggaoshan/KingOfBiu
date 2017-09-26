using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class PlayerController : MonoBehaviour {

	public float moveSpeed = 10f;
	public float jumpForce = 10f;

	public float life = 100f;

	public GameObject bullet;

	/* Debug */
	//public float seeHorizontal;

	private Animator animator;

	private int faceDirection = 1;


	private bool ifJump = false;
	private int jumpFrameRemaining;

	private Rigidbody2D rb2d;



	// Use this for initialization
	void Start () {
		animator = GetComponent<Animator> ();
		rb2d = GetComponent<Rigidbody2D> ();
	}


	void Attack(){
		animator.SetTrigger ("Attack");

		Vector3 position = transform.position;
		position.x += 0.2f * faceDirection ; 
			
		GameObject go= GameObject.Instantiate (bullet,position,Quaternion.identity) as GameObject;
		go.GetComponent<Rigidbody2D> ().AddForce ( new Vector2(faceDirection * 200,50));

	}
	
	// Update is called once per frame
	void Update () {

		float vertical = Input.GetAxis("Vertical");
		float horizontal = Input.GetAxis("Horizontal");

		//Attack
		if (Input.GetKeyDown ("j")) {
			Attack ();
		}

		//Jump
		if( !ifJump && Input.GetKeyDown("k")){
			ifJump = true;
			jumpFrameRemaining = 20;
			rb2d.AddForce (new Vector2 (0, jumpForce));
		}

		if (ifJump) {
			if (jumpFrameRemaining >= 0) {
				jumpFrameRemaining--;

			} else {
				ifJump = false;
			}
		}

		if (horizontal > 0) {
			faceDirection = 1;
			transform.localScale = new Vector3(1f, 1f, 1);
		} else if(horizontal <0){
			faceDirection = -1;
			transform.localScale = new Vector3(-1f, 1, 1);
		}
		transform.position = transform.position + new Vector3 (horizontal * moveSpeed * Time.deltaTime ,0, 0);

	}
}
