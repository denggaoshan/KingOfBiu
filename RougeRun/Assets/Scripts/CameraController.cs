using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {

	public GameObject player;
	public GameObject background;

	public float watch;

	private Vector3 offset;

	// Use this for initialization
	void Start () {
		offset = transform.position - player.transform.position;
	}
	
	// Update is called once per frame
	void Update () {

		transform.position = player.transform.position + offset;

		watch = player.transform.position.x - background.transform.position.x;
		if(player.transform.position.x - background.transform.position.x > 3 ){
			
			background.transform.position += new Vector3 (4f,0,0);
		}else if(player.transform.position.x - background.transform.position.x < -3 ){
			background.transform.position -= new Vector3 (4f,0,0);
		}

	}
}
