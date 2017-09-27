using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour {


	public GameObject monster;

	public GameObject player;

	private static GameObject _player;

	private int monsterCount = 1;


	private int level = 2;


	public static GameObject getPlayer(){
		return _player;
	}

	private static GameManager gameManager;

	public static GameManager getGameManager(){
		return gameManager;
	}

	// Use this for initialization
	void Start () {
		gameManager = this;
		_player = player;
	}
	
	// Update is called once per frame
	void Update () {
		//补充怪物
		if (monsterCount <= 0) {
			level++;
			int num = (int)Mathf.Sqrt(level * 10) ;

			for (int i = 0; i < num; i++) {


				Vector3 position = player.transform.position + new Vector3(10,0,0);
				if (Random.Range (0, 4) >= 2) {
					position.x = - position.x;
				}
				GameObject go= GameObject.Instantiate (monster,position,Quaternion.identity) as GameObject;

				monsterCount++;
			}

		}
	}

	public void KillMonster(){
		monsterCount--;
	}
}
