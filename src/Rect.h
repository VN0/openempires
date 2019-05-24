#pragma once

#include "Tile.h"

typedef struct
{
    Point a;
    Point b;
}
Rect;

Rect Rect_GetFrameOutline(const Tile);