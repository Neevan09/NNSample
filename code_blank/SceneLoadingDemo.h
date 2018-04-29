#pragma once

#include <Tofu.h>

class SceneLoadingDemo : public CodeEngine::Module
{
public:
	virtual int32_t Init() override;

	virtual int32_t Shutdown() override;

	virtual int32_t Update() override;


private:
	CodeEngine::SceneManager			sceneMgr;
	CodeEngine::CameraComponent		cam;
	CodeEngine::AnimationComponent	anim;
	CodeEngine::TransformComponent	tPlayer;
	CodeEngine::TransformComponent	tCamera;
	CodeEngine::PhysicsComponent		pPlayer;
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
};