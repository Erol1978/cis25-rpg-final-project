#include "Map.h"

Map::Map(int width, int height)
    : width(width), height(height) {}

int Map::getWidth() const {
    return width;
}

int Map::getHeight() const {
    return height;
}

bool Map::isInside(int x, int y) const {
    return x >= 0 && x < width && y >= 0 && y < height;
}
