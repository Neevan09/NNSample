#pragma once

#include <Tofu.h>

enum CharacterStates
{
	kStateIdle,
	kStateFalling,
	kStateRunning,
	kStateJumpingPrepare,
	kStateJumpingUp,
};

class CharacterControllerJam : public CodeEngine::Module
{
public:
	virtual int32_t Init() override;

	virtual int32_t Shutdown() override;

	virtual int32_t Update() override;

	virtual int32_t FixedUpdate() override;

private:

	void AddAnimState(const char* name, bool isLoop = true, const char* clipname = nullptr);

private:
	CodeEngine::SceneManager			sceneMgr;
	CodeEngine::CameraComponent		cam;
	CodeEngine::AnimationComponent	anim;
	CodeEngine::TransformComponent	tPlayer;
	CodeEngine::TransformComponent	tCamera;
	CodeEngine::PhysicsComponent		pPlayer;
	CodeEngine::TransformComponent	tBox;
	// Dummy light
	CodeEngine::TransformComponent    tSun;
	CodeEngine::LightComponent        lSun;
	CodeEngine::TransformComponent    tMoon;
	CodeEngine::TransformComponent    tBulb;
	CodeEngine::LightComponent        lMoon;
	CodeEngine::LightComponent        lBulb;
	float						pitch;
	float						yaw;
	float						speed;

	CharacterStates				state;
	bool						inAir;
};