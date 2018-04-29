#pragma once

#include <PhysicsSystem.h>
#include <TransformComponent.h>
#include <CameraComponent.h>

// Camera class
// Has a camera component and takes input from PController
class Camera
{
public:
	Camera();
	~Camera();

	// TODO
	// move, rotate, 
	void Rotate(CodeEngine::math::float2);
	void FixedUpdate(float);
	void Update(float);

	CodeEngine::math::quat GetRotation();
	CodeEngine::math::float3 GetForward();

	void SetClearColor(CodeEngine::math::float4);
	void SetDistMod(CodeEngine::math::float3);
	void SetFov(float);
	void SetPosition(CodeEngine::math::float3);
	void SetSensitivity(float);
	void SetSkybox(CodeEngine::TextureHandle);
	void SetTarget(CodeEngine::math::float3);

private:
	//void AdjustCameraPosition(RayTestResult, CodeEngine::math::float3, float dT);
	bool BumperCheck(CodeEngine::math::float3);
	bool movedBack;

	CodeEngine::CameraComponent		cam;
	CodeEngine::TransformComponent	tCamera;
	CodeEngine::PhysicsSystem*		physics;

	CodeEngine::math::float3 camTarget;
	CodeEngine::math::quat camRot;
	CodeEngine::math::float3 camPos;
	CodeEngine::math::float3 distMod;			// sets the distance between target and look at target
	CodeEngine::math::float3 targetLastPos;	// target's last known position
	CodeEngine::math::float3 toTarget;
	CodeEngine::math::float3 bumperRayOffset;	// allows offset of the bumper ray from target origin

	float fov;
	float pitch;
	float yaw;
	float sensitive;
	float bumperDistanceCheck = 2.0f;	// length of bumper ray
	float bumperMaxDistance = 0.5f;
	float damping = 6.0f;				// damping
	float lowerTiltAngle = 45.0;		// lower limit of camera Y tilt
	float upperTiltAngle = 110.0f;		// upper limit of camera Y tilt
	float minDistance = 3.0f;			// closet camera should get
	float maxDistance = 6.0f;			// furthest camera should get
	float adjustLerpTime = 0.0f;
	float lerpTime = 1.0f;
	float distanceFromTarget;

	const float kMaxPitch = CodeEngine::math::PI * 0.25f;
	const float kMinPitch = CodeEngine::math::PI * -0.125f;
};