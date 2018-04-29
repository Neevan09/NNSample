#include "Companion.h"
#include<cassert>
#include <RenderingComponent.h>

using namespace CodeEngine;

Companion::Companion(CodeEngine::math::float3 _target)
{
	{
		Entity e = Entity::Create();

		tComp = e.AddComponent<TransformComponent>();

		RenderingComponent r = e.AddComponent<RenderingComponent>();


		//aComp = e.AddComponent<AnimationComponent>();

		Model* compModel = RenderingSystem::instance()->CreateModel("assets/cube.model");

		Material* cubeMat = RenderingSystem::instance()->CreateMaterial(MaterialType::kMaterialDeferredGeometryOpaque);
		TextureHandle diffuse = RenderingSystem::instance()->CreateTexture("assets/stone_wall.texture");


		cubeMat->SetTexture(diffuse);

		r->SetMaterial(cubeMat);
		r->SetModel(compModel);

		tComp->SetLocalPosition(math::float3{ 0.0f, 1.0f, 0.0f });
		tComp->SetLocalScale(math::float3{ 0.2f, 0.2f, 0.2f });
	}

	targetSet = false;
	inUse = false;
	isActive = true;

	SetTarget(_target);
	targetLastPos = _target;
}

Companion::~Companion() {}

void Companion::FixedUpdate(float fDT, CodeEngine::math::float3 _target, CodeEngine::math::float3 _targetFwd)
{
	target = _target;
	targetFwd = -_targetFwd;


	if (!inUse)
	{
		CodeEngine::math::float3 dir = target - targetLastPos;
		CodeEngine::math::float3 pos = tComp->GetLocalPosition();

		float wantedHeight = target.y + height;
		float currentHeight = pos.y;

		// TODO
		// Damp the height
		currentHeight = currentHeight + (heightDamping * (wantedHeight - currentHeight));	// Basic Lerp, make more robust later
		//currentHeight = Mathf.Lerp(currentHeight, wantedHeight, heightDamping * dT);

		// TODO
		// Set the position of the companion 
		CodeEngine::math::float3 wantedPosition = target - (targetFwd * distance);

		pos = pos + ((heightDamping * fDT) * (wantedPosition - pos));	// Basic Lerp, make more robust later
		//transform.position = CodeEngine::math::float3.Lerp(transform.position, wantedPosition, positionDamping * dT);

		// adjust the height of the companion
		pos.y = currentHeight;

		// look at the target

		//transform.forward = CodeEngine::math::float3.Lerp(transform.forward, target.position - transform.position, rotationDamping * dT);

		tComp->SetLocalPosition(pos + dir);

		targetLastPos = target;
	}

	//CodeEngine::math::float3 wantedPosition;

	////check to see if there is anything behind the target
	//RaycastHit hit;
	//CodeEngine::math::float3 back = transform.TransformDirection(-1 * CodeEngine::math::float3.forward);

	//// cast the bumper ray out from rear and check to see if there is anything behind
	//if (Physics.Raycast(target.TransformPoint(bumperRayOffset), back, out hit, bumperDistanceCheck)
	//	&& hit.transform != target) // ignore ray-casts that hit the user. DR
	//{
	//	wantedPosition = transform.position;
	//	// clamp wanted position to hit position
	//	wantedPosition.x = hit.point.x;
	//	wantedPosition.z = hit.point.z;
	//	wantedPosition.y = Mathf.Lerp(hit.point.y + bumperHeight, wantedPosition.y, dt * damping);

	//	transform.position = CodeEngine::math::float3.Lerp(transform.position, wantedPosition, dt * damping);
	//}
}


// Update
// Am I needed???
void Companion::Update(float dT, CodeEngine::math::float3 _target, CodeEngine::math::float3 _targetFwd)
{
	assert(targetSet);
}

//-------------------------------------------------------------------------------------------------
// Setters

void Companion::SetActive(bool _isActive)
{
	isActive = _isActive;
}

// 
void Companion::SetInUse(bool _inUse)
{
	inUse = _inUse;
}

// 
void Companion::SetTarget(CodeEngine::math::float3 _target)
{
	target = _target;
	targetSet = true;
}

//-------------------------------------------------------------------------------------------------
// Getters

// Returns Companion's active state
bool Companion::ActiveSelf()
{
	return isActive;
}

CodeEngine::math::float3 Companion::GetPosition()
{
	return tComp->GetLocalPosition();
}