#pragma once


enum CharacterState
{
	kNoState,
	kIdleOutCombat,
	kIdleInCombat,
	kWalk,
	kRun,
	kJumpingPrepare,
	kJumpUp,
	kJumpAir,
	kJumpDown,
	kAttack,
	kAdjustPosition,
	kHit,
	kDodge,
	kRoll,
	kDead
};

enum HitPosition
{
	kHigh,
	kMid,
	kLow
};

enum HitDirection
{
	kHitForward,
	kHitBackward,
	kHitLeft,
	kHitRight
};

enum CombatDirection
{
	kDirForward,
	kDirLeft,
	kDirRight
};

enum HitPower
{
	kWeak,
	kPowerful,
	kKO
};

enum Combat
{
	kNone,
	kPunchJabL,
	kPunchJabR,
	kPunchHookL,
	kPunchHookR,
	kPunchUpperCutL,
	kPunchUpperCutR,
	kKickStraightMidR,
	kKickKnee,
	kKickAxeKick,
	kKickHorseKick,
	kSwordAttackR,
	kSwordAttackRL,
	kSwordAttackSpU,
	kSwordAttackComboLL,
	kNumberOfItems
};

struct CombatMoveDetails
{
	// AT - Attack Time
	// ET - Effect Time
	// ED - Effect Distance
	// HT - Hit Time
	// Dmg = Damage Amount
	// Name doesn't matter but is good for recognising.

	std::string name;
	float AT;
	float AD;
	float ET;
	float ED;
	float HT;
	float Dmg;
	HitPosition pos;
	CombatDirection dir;
	HitPower power;
};

struct CharacterDetails
{
	std::string			modelName;
	std::string			diffuseName;
	std::string			normalMapName;
	std::string			tag;
	CodeEngine::math::float3	position;
	CodeEngine::math::float3	scale;
	float				health;
	float				walkSpeed;//
	float				sprintSpeed;
	float				jumpPower;
	float				rollDodgeCost;
	CodeEngine::math::float2	capsuleColliderSize;
	CodeEngine::math::float3	colliderOrigin;
	float				acceleration;
	float				deacceleration;
	// Add more as needed
};


struct CombatManagerDetails
{
	int moveDir;
	float inCombatDuration;
	float maxShotDistance;
	float minShotDistance;
	float jumpUpTime;
	float jumpAirTime;
	float jumpDownTime;
	float comboTimer;
	float maxComboTime;
	float dodgeTime;
	float rollTime;
	float rollSpeed;
	float hitTime;
	float hitMaxWalkSpeed;
	float adjustSpeed;
	float adjustMinDistance;
	float adjustMaxDistance;
	float adjustAgle;
};

struct PathNode
{
	std::string name;
	CodeEngine::math::float3 position;
	PathNode* nearby_1;
	PathNode* nearby_2;
	PathNode* nearby_3;
	PathNode* nearby_4;
};

struct SpawnNode
{
	CodeEngine::math::float3 position;
};

struct TriggerNode
{
	CodeEngine::math::float3 position;
};