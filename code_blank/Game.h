#pragma once

#include <Tofu.h>
#include "Character.h"
#include "PController.h"
#include "Camera.h"
#include "Enemy.h"
#include "Utility.h"

// Game: The main game loop.
// Runs all things game related.
class Game : public CodeEngine::Module
{
public:
	virtual int32_t Init() override;

	virtual int32_t Shutdown() override;

	virtual int32_t Update() override;

	virtual int32_t FixedUpdate() override;

	virtual ~Game() override;

private:
	// Temp variables for testing
	CodeEngine::TransformComponent tIntro;
	CodeEngine::TransformComponent tCube;
	CodeEngine::TransformComponent tBox;
	CodeEngine::TransformComponent tBox2;
	CodeEngine::TransformComponent tBox3;
	CodeEngine::TransformComponent tBox4;
	CodeEngine::TransformComponent tBox5;
	CodeEngine::TransformComponent tBox6;
	CodeEngine::TransformComponent tBox7;
	CodeEngine::TransformComponent tGround;

	CodeEngine::TransformComponent tStair;
	CodeEngine::PhysicsComponent pStair;

	// Class variables
	//CodeEngine::CameraComponent cam;
	Camera* cam;
	Player* player;
	Companion* comp;
	PController* pControl;

	std::vector<Character*>* enemyList;
	std::vector<PathNode*>* pathNodes;

	enum sceneType
	{
		intro = 0,
		menu = 1,
		options = 2,
		help = 3,
		loading = 4,
		tutorial = 5,
		level = 6,
		pause = 7,
		death = 8,
		levelEnd = 9,
		credits = 10,
	};

	CodeEngine::SceneManager sceneMgr;
	sceneType currentScene;
	sceneType lastScene;

	// Member Functions
	// These may be temporary or call the needed functions.
	// Will change int to file name later for JSON use.
	bool LoadScene(sceneType);
	bool UnloadScene(sceneType);
	bool LoadOnTop(sceneType);
	bool UnloadOffTop(sceneType);

	//*********************************************************************************************
	//temp for test
	//Enemy* enemy01;
	//Enemy* enemy02;
	//Enemy* enemy03;
	float timePassed;
	float startTime;
	bool loopStart;

	bool debugMode;

	Utility::GhostPlayer* DebugPlayer;

	CodeEngine::AudioSource			gameplay{ "assets/sounds/Game_Play.wav" };
	CodeEngine::AudioSource			jumpSfx{ "assets/sounds/Jump.wav" };

	//*********************************************************************************************
};