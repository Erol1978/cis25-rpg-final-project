#include "../src/Player.h"
#include "../src/Item.h"
#include <cassert>
#include <iostream>

void test_remove_item_normal() {
    Player player("Hero", 100, 10);

    player.addItem(Item("Potion", 25));
    player.addItem(Item("Sword", 50));

    bool removed = player.removeItem("Potion");

    assert(removed);
    assert(player.inventorySize() == 1);
}

void test_remove_item_empty_inventory() {
    Player player("Hero", 100, 10);

    bool removed = player.removeItem("Potion");

    assert(!removed);
}

void test_use_healing_potion() {
    Player player("Hero", 100, 10);

    player.takeDamage(50);
    player.addItem(Item("Potion", 25));

    bool used = player.useHealingPotion();

    assert(used);
    assert(player.getHealth() == 75);
    assert(player.inventorySize() == 0);
}

int main() {
    std::cout << "Running tests...\n";

    test_remove_item_normal();
    test_remove_item_empty_inventory();
    test_use_healing_potion();

    std::cout << "All tests passed.\n";

    return 0;
}
