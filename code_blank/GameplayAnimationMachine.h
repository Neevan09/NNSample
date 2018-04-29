#pragma once
#include <AnimationComponent.h>
#include "GameplayDS.h"

class CombatManager;

class GameplayAnimationMachine
{
public:
	GameplayAnimationMachine(CombatManager*);
	~GameplayAnimationMachine();

	void Play(CharacterState, float, size_t);
	void SetAnimComp(CodeEngine::AnimationComponent);

private:
	CodeEngine::AnimationComponent	aComp;
	CombatManager*				combatManager;
};