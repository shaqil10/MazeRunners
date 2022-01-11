#pragma once

#include "common.hpp"
//#include "tiny_ecs.hpp"
#include "components.hpp"
#include "world_system.hpp"
#include <entt.hpp>

extern entt::registry registry;

// A simple physics system that moves rigid bodies and checks for collision
class PhysicsSystem : public Subject
{
public:
	void step(float elapsed_ms, float window_width_px, float window_height_px);

	PhysicsSystem()
	{
	}
};