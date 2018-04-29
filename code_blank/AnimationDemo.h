#pragma once
#include <Tofu.h>
#include <LightComponent.h>

class AnimationDemo : public CodeEngine::Module
{
public:
	virtual int32_t Init() override;

	virtual int32_t Shutdown() override;

	virtual int32_t Update() override;

private:
	CodeEngine::Entity				eBox;

	CodeEngine::CameraComponent		cam;
	CodeEngine::AnimationComponent	anim;
	CodeEngine::TransformComponent	tPlayer;
	CodeEngine::TransformComponent	tPlayer2;
	CodeEngine::TransformComponent	tBox;
	CodeEngine::TransformComponent	tCamera;

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

