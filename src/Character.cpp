#include "Character.h"

Character::Character(std::string name, int health, int attackPower)
    : name(name), health(health), maxHealth(health), attackPower(attackPower) {}

std::string Character::getName() const {
    return name;
}

int Character::getHealth() const {
    return health;
}

int Character::getMaxHealth() const {
    return maxHealth;
}

int Character::getAttackPower() const {
    return attackPower;
}

void Character::takeDamage(int amount) {
    health -= amount;
    if (health < 0) {
        health = 0;
    }
}

void Character::heal(int amount) {
    health += amount;
    if (health > maxHealth) {
        health = maxHealth;
    }
}

void Character::boostAttack(int amount) {
    attackPower += amount;
}
