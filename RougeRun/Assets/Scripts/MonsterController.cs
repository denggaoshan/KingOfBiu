using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MonsterController : MonoBehaviour {

	public float speed;

	public GameObject player;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

		float diff = player.transform.position.x - transform.position.x ;

		if (diff > 0) {
			transform.position += new Vector3 (Time.deltaTime * speed, 0, 0);
			transform.localScale = new Vector3(-1f, 1f, 1);
		} else if(diff < 0){
			transform.position += new Vector3 (Time.deltaTime * speed * -1, 0, 0);
			transform.localScale = new Vector3(1f, 1f, 1);
		}

	}
}
