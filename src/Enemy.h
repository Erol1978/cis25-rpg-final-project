#pragma once
#include "Character.h"

class Enemy : public Character {
public:
    Enemy(std::string name = "Slime", int health = 30, int attackPower = 5);
};
