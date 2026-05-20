#pragma once
#include "Character.h"
#include "Inventory.h"

class Player : public Character {
private:
    Inventory inventory;

public:
    Player(std::string name = "Hero", int health = 100, int attackPower = 10);

    void addItem(const Item& item);
    bool removeItem(const std::string& itemName);
    int inventorySize() const;
    void displayStatus() const;
    bool useHealingPotion();
};
