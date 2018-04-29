#pragma once

#include "Character.h"

class Enemy : public Character
{
public:
	Enemy(CharacterDetails, void*);
	~Enemy();

	void MoveEnemy(float, bool, CodeEngine::math::float3);
	//void MoveReg(float, bool, CodeEngine::math::float3, CodeEngine::math::quat);
	//void MoveAim(float, CodeEngine::math::float3, CodeEngine::math::quat, CodeEngine::math::float3);
	void Update(float);
	void UpdateState(float);

	void Aim();
	//void AnimationParameter(int _animationParameter);
	void Attack();
	//void CheckGroundStatus();
	//void CurrentState(CharacterState _currentState);
	//void Dodge();
	void Die();
	//void ForceMove(float, float, int);
	//void ForceMove(float, float, CodeEngine::math::float3);
	//void Special();



private:
	CodeEngine::TransformComponent	tEnemy;
	CodeEngine::PhysicsComponent		pEnemy;
	CodeEngine::AnimationComponent	aEnemy;
	GameplayAnimationMachine*	gEnemy;
	CodeEngine::PhysicsSystem*		physics;

	// Movement
	float walkSpeed;
	float dashSpeed;
	float speed;
	bool inAir;
	bool isDashing;

	// Enemy Stats
	float health;

	const float kMaxSpeed = 5.0f;
	const float kAccelerate = 6.67f;
	const float kDeaccelerate = 10.0f;

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