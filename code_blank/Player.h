#pragma once

#include "Character.h"
#include "Gun.h"

class Player : public Character
{
public:
	Player(CharacterDetails, void*);
	~Player();

	void MoveReg(float, bool, CodeEngine::math::float3, CodeEngine::math::quat);
	//void MoveEnemy(float, bool, CodeEngine::math::float3);
	void Update(float);
	void FixedUpdate(float);
	void UpdateState(float);

	void Attack(bool, float);
	void Dodge(CodeEngine::math::float3);
	void Die();
	void Interact();
	void Special(bool, float);
	void VisionHack();

	/*
	void AnimationParameter(int _animationParameter);
	
	void CheckGroundStatus();
	void CurrentState(CharacterState _currentState);
	
	
	void ForceMove(float, float, int);
	void ForceMove(float, float, CodeEngine::math::float3);
	void HasEffect(bool _hasEffect);
	void HandleAirborneMovement(CodeEngine::math::float3);
	void HandleGroundedMovement(bool);
	
	void LastState(CharacterState _lastState);
	
	void Sprint(bool);
	void StateTimer(float _stateTimer);
	

	bool HasEffect();
	bool IsDead();
	bool IsGrounded();

	float StateTimer();*/

	/*CodeEngine::math::float3 GetPosition();
	CodeEngine::math::float3 GetForward();
	CodeEngine::math::float3 GetRight();*/

	//CharacterState CurrentState();
	//CharacterState LastState();

private:
	float GetAnimationDuration(CharacterState);

	CodeEngine::TransformComponent	tPlayer;
	CodeEngine::PhysicsComponent		pPlayer;
	CodeEngine::AnimationComponent	aPlayer;
	CodeEngine::PhysicsSystem*		physics;
	
	CodeEngine::math::quat camRotation;

	CodeEngine::math::float3 lastMoveDir;

	Gun* gun;

	bool attackButtonDown;
	bool specialButtonDown;
	float attackButtonTimer;
	float minHoldTime;
	float maxHoldTime;
	float specialButtonTimer;
	float rollDodgeCost;

	//GameObject charBody;
	//GameObject camera;

	
	//CapstoneAnimation animator;

	//Rigidbody rigidbody;


	// Audio
	/*
	AudioSource charAudio;
	AudioSource charCombatAudio;
	AudioClip footsteps1;
	AudioClip footsteps2;
	AudioClip footsteps3;
	AudioClip footsteps4;
	AudioClip jumpFX;
	AudioClip landFX;
	*/
};
