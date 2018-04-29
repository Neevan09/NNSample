#pragma once

#include <AnimationComponent.h>
#include <TransformComponent.h>
#include<TofuMath.h>

// Player Companion Class
// Sword/Gun for the player to use in combat
// Also may act as the map displayer, among other possible features
class Companion
{
public:
	Companion(CodeEngine::math::float3);
	~Companion();

	void Update(float, CodeEngine::math::float3, CodeEngine::math::float3);
	void FixedUpdate(float, CodeEngine::math::float3, CodeEngine::math::float3);

	void SetInUse(bool);
	void SetActive(bool);
	void SetTarget(CodeEngine::math::float3);

	bool ActiveSelf();
	CodeEngine::math::float3 GetPosition();

private:
	CodeEngine::TransformComponent	tComp;
	CodeEngine::AnimationComponent	aComp;

	bool inUse;
	bool targetSet;
	bool isActive;

	CodeEngine::math::float3 target;
	CodeEngine::math::float3 targetLastPos;
	CodeEngine::math::float3 targetFwd;


	float distance = 50.0f;
	float height = 1.7f;
	float heightDamping = 1.0f;
	float positionDamping = 2.0f;
	float rotationDamping = 1.0f;
};