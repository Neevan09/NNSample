#pragma once

#include <PhysicsComponent.h>
#include <TransformComponent.h>
#include <AnimationComponent.h>
#include "CombatManager.h"
#include "GameplayAnimationMachine.h"

class Character
{
public:

	Character();
	~Character();

	void Init(bool, void*, CombatManagerDetails);

	// Virtual Functions
	//virtual void MoveReg(float, bool, CodeEngine::math::float3, CodeEngine::math::quat);
	//virtual void MoveAim(float, CodeEngine::math::float3, CodeEngine::math::quat, CodeEngine::math::float3);
	//virtual void MoveEnemy(float, bool, CodeEngine::math::float3);
	virtual void Update(float);
	virtual void UpdateState(float);

	virtual void Attack();
	virtual void Dodge();
	virtual void Die();

	void AnimationParameter(int _animationParameter);
	
	void CheckGroundStatus();
	void CurrentState(CharacterState _currentState);
	
	void HasEffect(bool _hasEffect);
	void HandleAirborneMovement(CodeEngine::math::float3, bool, float);
	void HandleGroundedMovement(CodeEngine::math::float3, bool, bool, float);
	void LastState(CharacterState _lastState);
	virtual void Special(float, bool, bool);
	void Sprint(bool);
	void StateTimer(float _stateTimer);

	bool HasEffect();
	virtual bool IsDead();
	virtual bool IsGrounded();

	float StateTimer();

	CharacterState CurrentState();
	CharacterState LastState();

	// Shared Functions
	void ForceMove(float, float);
	void ForceMove(float, float, int);
	void ForceMove(float, float, CodeEngine::math::float3);

	void TakeDamage(float);

	void UseSpecial(float, bool, bool);

	CombatManager* GetCombatManager();
	std::string GetTag();
	CodeEngine::math::float3 GetPosition();
	CodeEngine::math::float3 GetForward();
	CodeEngine::math::float3 GetRight();


	void SetComponents(CodeEngine::TransformComponent, CodeEngine::PhysicsComponent, CodeEngine::AnimationComponent);

protected:

	std::string tag;

	CodeEngine::TransformComponent	tCharacter;
	CodeEngine::PhysicsComponent		pCharacter;
	CodeEngine::AnimationComponent	aCharacter;
	CodeEngine::PhysicsSystem*		physics;
	GameplayAnimationMachine*	gCharacter;

	CombatManager*				combatManager;

	CharacterState charState; // Do I need this one??
	CharacterState currentState;
	CharacterState lastState;

	// Player Stats
	float health;
	float groundCheckDistance;

	int animationParameter;

	// Movement
	float speed;
	float baseSpeedMultiplier;
	
	float moveSpeedMultiplier;
	float sprintSpeedMultiplier;
	float gravityMultiplier = 7.0f;
	float airbornMaxVelocity = 2.0f;
	float slopeSpeedMultiplier = 0.18f;
	float airborneSpeedMultiplier;
	float jumpPower;	//[Range(1f, 20f)]

	// Bools
	bool isAiming;
	bool isGrounded;
	bool isRolling;
	bool isSprinting;
	bool inAir;
	bool jump;
	bool moving;
	bool hasJumped = false;
	bool isDead;
	bool hasEffect;
	bool once;

	float turnMod;
	float origGroundCheckDistance;
	float stateTimer;
	float groundCheckRadius;
	float lerpMod = 0.01f;
	float vertLerp = 0.35f;
	float horiLerp = 0.35f;
	float deathTimer = 3.0f;

	CodeEngine::math::float3 groundNormal;
	CodeEngine::math::float3 move;
	CodeEngine::math::float3 lastVelocity;
	CodeEngine::math::float3 velocity;
	CodeEngine::math::quat charRot;

	CodeEngine::math::quat charBodyRotation;
	CodeEngine::math::quat rotation;

	// Constants
	const float kMaxSpeed = 8.0f;			// 12.0f
	const float kAccelerate = 4.0f;		// 6.67f
	const float kDeaccelerate = 10.0f;		// 10.0f
	const float kAirDeaccelerate = 2.0f;	// 2.0f
};