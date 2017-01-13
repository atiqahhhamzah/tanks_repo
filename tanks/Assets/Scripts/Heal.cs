using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Heal : MonoBehaviour {

	public float maxLife = 15f;
	public float lifeAdd = 25f;

	private void Start()
	{
		Destroy(gameObject, maxLife);
	}

	private void OnTriggerEnter(Collider other)
	{
		
			Rigidbody targetRigidbody = other.GetComponent<Rigidbody> ();

			if (!targetRigidbody)
				return;

			TankHealth targetHealth = targetRigidbody.GetComponent<TankHealth> ();

			if (!targetHealth)
				return;

		targetHealth.healing (lifeAdd);

		Destroy (gameObject);
	}
}
