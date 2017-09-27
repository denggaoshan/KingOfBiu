using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MonsterController : MonoBehaviour {

	public float speed;
	public GameObject player;

	public int life = 100;


	private Animator animator;



	// Use this for initialization
	void Start () {
		animator = GetComponent<Animator> ();
		player = GameManager.getPlayer ();
	}
	
	// Update is called once per frame
	void Update () {

		float diff = GameManager.getPlayer().transform.position.x - transform.position.x ;

		if (life <= 0) {
			this.gameObject.SetActive (false);
			Destroy (this);
			GameManager.getGameManager ().SendMessage ("KillMonster");
		}

		if (diff > 0) {
			transform.position += new Vector3 (Time.deltaTime * speed, 0, 0);
			transform.localScale = new Vector3(-1f, 1f, 1);
		} else if(diff < 0){
			
			transform.position += new Vector3 (Time.deltaTime * speed * -1, 0, 0);
			transform.localScale = new Vector3(1f, 1f, 1);
		}

	}

	void OnCollisionEnter2D(Collision2D coll) {

		if (coll.gameObject.tag == "Player") {
			animator.SetTrigger ("Attack");
		}else if(coll.gameObject.tag == "Bullet") {
			//掉血
			life -= 30 ;
			//显示血条


		}
	}
}
