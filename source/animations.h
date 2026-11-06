#pragma once

#include <stddef.h>
#include <stdint.h>

struct AnimSprite {
    int child_slot;
    float x, y;
    float scale_x, scale_y;
    int flip_x, flip_y;
    float rot;
    int z;
};

struct AnimFrame {
    const AnimSprite* sprites;
    int sprite_count;
};

struct Animation {
    const AnimFrame* frames;
    int frame_count;
    float fps;
};

enum class AnimationID {
    ANIM_BLACKSLUDGE_LOOP = 0,
    ANIM_GJBEAST01_ATTACK01 = 1,
    ANIM_GJBEAST01_ATTACK01_END = 2,
    ANIM_GJBEAST01_ATTACK01_LOOP = 3,
    ANIM_GJBEAST01_BITE = 4,
    ANIM_GJBEAST01_IDLE01 = 5,
    ANIM_GJBEAST02_IDLE01 = 6,
    ANIM_GJBEAST02_IDLE02 = 7,
    ANIM_GJBEAST03_IDLE01 = 8,
    ANIM_GJBEAST03_IDLE02 = 9
};

#define ANIMATION_COUNT 10

extern const Animation animations[ANIMATION_COUNT];
