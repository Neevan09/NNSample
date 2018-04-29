#pragma once

#include <Tofu.h>

#define UI_ENABLED  0

class RenderingTest : public CodeEngine::Module
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

#if UI_ENABLED == 1
	CodeEngine::TextureHandle			uiTex;
	CodeEngine::TextureHandle			uiTex1;
	CodeEngine::Atlas					atlas;

	uint32_t					mainMenuSelectedItem;
	uint32_t					levelMenuSelectedItem;
	uint32_t					optionMenuSelectedItem;

	bool						uiEnabled;

	bool						mainMenuFocused;
	bool						levelMenuFocused;
	bool						optionMenuFocused;

	uint32_t					inverseCameraAxisX;
	uint32_t					inverseCameraAxisY;
#endif

	bool						sceneLoaded;
};