#pragma once

#include "player_anim_data.h"

#define ROBOT_SPRITE_COUNT 8
#define ROBOT_BLEND_DURATION 0.05f
#define SPIDER_BLEND_DURATION 0.05f

enum class RobotSpriteIdx {
    Part1Color,
    Part1Glow,

    Part2Color,
    Part2Glow,

    Part3Color,
    Part3Glow,

    Part4Color,
    Part4Glow
};

enum class RobotAnimId {
    Run,
    JumpStart,
    Jump,
    FallStart,
    Fall,
    Idle
};

extern const PlayerAnimation robot_animations[ROBOT_ANIM_COUNT];
