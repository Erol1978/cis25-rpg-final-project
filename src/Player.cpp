#include "Player.h"
#include <iostream>

Player::Player(std::string name, int health, int attackPower)
    : Character(name, health, attackPower) {}

void Player::addItem(const Item& item) {
    inventory.addItem(item);
}

bool Player::removeItem(const std::string& itemName) {
    return inventory.removeItem(itemName);
}

int Player::inventorySize() const {
    return inventory.size();
}

void Player::displayStatus() const {
    std::cout << "Player Status" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Health: " << health << "/" << maxHealth << std::endl;
    std::cout << "Attack: " << attackPower << std::endl;
    std::cout << "Inventory Items: " << inventory.size() << std::endl;
}
