#pragma once
#include <string>

class Character {
protected:
    std::string name;
    int health;
    int maxHealth;
    int attackPower;

public:
    Character(std::string name = "Character", int health = 100, int attackPower = 10);

    std::string getName() const;
    int getHealth() const;
    int getMaxHealth() const;
    int getAttackPower() const;

    void takeDamage(int amount);
    void heal(int amount);
    void boostAttack(int amount);
};
