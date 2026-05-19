#pragma once

class Map {
private:
    int width;
    int height;

public:
    Map(int width = 10, int height = 10);

    int getWidth() const;
    int getHeight() const;
    bool isInside(int x, int y) const;
};
