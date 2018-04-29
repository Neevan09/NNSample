#pragma once

#include <Tofu.h>

namespace Utility
{
	class GhostPlayer
	{
	public:
		GhostPlayer(CodeEngine::math::float3 pos, CodeEngine::Material* skybox = nullptr);
		~GhostPlayer();

		int32_t Update();

	private:
		CodeEngine::Entity				entity;
		CodeEngine::TransformComponent	transform;
		CodeEngine::CameraComponent		camera;
		float						pitch;
		float						yaw;
		float						speed;
	};
}