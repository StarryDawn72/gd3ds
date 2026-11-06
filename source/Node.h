#pragma once

#include "types.h"

namespace gd3ds
{

class Node {
public:
    virtual void draw();
protected:
    Point position_{};
    Point scale_{1.0f, 1.0f};
    float rotation_ = 0.0f;
}; 

}