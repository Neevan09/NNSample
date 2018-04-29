#pragma once

#include <Module.h>

#include <Entity.h>
#include <TransformComponent.h>
#include <CameraComponent.h>
#include <RenderingComponent.h>
#include <AnimationComponent.h>
#include <PhysicsComponent.h>
#include <LightComponent.h>
#include <AudioManager.h>

class TestGame : public CodeEngine::Module
{
public:
	virtual int32_t Init() override;

	virtual int32_t Shutdown() override;

	virtual int32_t Update() override;

private:
	CodeEngine::TransformComponent	tGround;
	CodeEngine::TransformComponent	tBox;
	CodeEngine::TransformComponent	tPlayer;
	CodeEngine::TransformComponent	tCamera;
	CodeEngine::TransformComponent    tSun;
	CodeEngine::TransformComponent    tMoon;
	CodeEngine::TransformComponent    tBulb;
	CodeEngine::PhysicsComponent		pPlayer;
	CodeEngine::AnimationComponent	anim;
	CodeEngine::CameraComponent		cam;
	CodeEngine::LightComponent        lSun;
	CodeEngine::LightComponent        lMoon;
	CodeEngine::LightComponent        lBulb;
	float pitch;
	float yaw;
	float speed;
	bool inAir;

	CodeEngine::AudioSource			gameplay { "assets/sounds/Game_Play.wav" };
	CodeEngine::AudioSource			jumpSfx { "assets/sounds/Jump.wav" };
};