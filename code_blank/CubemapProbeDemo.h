#pragma once

#include <Tofu.h>

namespace Utility
{
	class GhostPlayer;
}

class CubemapProbeDemo : public CodeEngine::Module
{
public:

	virtual int32_t Init() override;

	virtual int32_t Shutdown() override;

	virtual int32_t Update() override;

private:
	CodeEngine::SceneManager			sceneMgr;
	Utility::GhostPlayer*		ghostPlayer;
};