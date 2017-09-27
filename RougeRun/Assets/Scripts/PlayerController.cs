using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PlayerController : MonoBehaviour {

	public float moveSpeed = 10f;
	public float jumpForce = 10f;

	public float life = 100f;

	public GameObject bullet;

	public Scrollbar bloodBar;

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

		//Check Live
		if(life <= 0){
			Die ();
		}

		//Blood Bar
		bloodBar.size = life / 100;
	}

	void OnCollisionEnter2D(Collision2D coll) {
		
		if (coll.gameObject.tag == "Monster") {
			//掉血
			life -= 5;
			//后退
			animator.SetTrigger("Dodge");
			rb2d.AddForce (new Vector2(10,10));
		}
			
	}


	void Attack(){
		animator.SetTrigger ("Attack");

		Vector3 position = transform.position;
		position.x += 0.2f * faceDirection ; 

		GameObject go= GameObject.Instantiate (bullet,position,Quaternion.identity) as GameObject;

		go.GetComponent<Rigidbody2D> ().AddForce ( new Vector2(faceDirection * 200,50));
		if (faceDirection == -1) {
			go.transform.localScale = new Vector3 (go.transform.localScale.x,go.transform.localScale.y );
		}
	}

	void Die(){
		SceneManager.LoadScene ("GameOver");
	}
}
