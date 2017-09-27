using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bulletController : MonoBehaviour {

	private int remainFrames;


	// Use this for initialization
	void Start () {
		
		remainFrames = 80;

	}
	
	// Update is called once per frame
	void Update () {

		remainFrames--;

		if (remainFrames < -0) {
			this.gameObject.SetActive (false);
			Destroy (this);
		}

	}

	void OnCollisionEnter2D(Collision2D coll) {

		if (coll.gameObject.tag == "Monster") {
			this.gameObject.SetActive (false);
			Destroy (this);
		}
	}


}
