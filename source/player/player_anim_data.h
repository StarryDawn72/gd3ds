#pragma once
#include <vector>

struct PlayerSpritePart {
    int   textureIndex;
    float px, py;
    float rotation;
    float sx, sy;
    int   zOrder;
};

struct PlayerFrame {
    std::vector<PlayerSpritePart> parts;
    int part_count;
    float delay;
};