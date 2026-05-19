#include "../src/Player.h"
#include "../src/Item.h"
#include <cassert>
#include <iostream>

void test_remove_item_normal() {
    std::cout << "Remove item (normal)... ";

    Player player("Hero", 100, 10);

    player.addItem(Item("Potion", 25));
    player.addItem(Item("Sword", 50));

    bool removed = player.removeItem("Potion");

    assert(removed);
    assert(player.inventorySize() == 1);

    std::cout << "PASSED\n";
}

void test_remove_item_empty_inventory() {
    std::cout << "Remove item from empty inventory... ";

    Player player("Hero", 100, 10);

    bool removed = player.removeItem("Potion");

    assert(!removed);

    std::cout << "PASSED\n";
}

void test_remove_first_item_boundary() {
    std::cout << "Remove first item boundary... ";

    Player player("Hero", 100, 10);

    player.addItem(Item("Potion", 25));
    player.addItem(Item("Sword", 50));

    bool removed = player.removeItem("Potion");

    assert(removed);
    assert(player.inventorySize() == 1);

    std::cout << "PASSED\n";
}

int main() {
    std::cout << "Running tests...\n";

    test_remove_item_normal();
    test_remove_item_empty_inventory();
    test_remove_first_item_boundary();

    std::cout << "All tests passed.\n";

    return 0;
}
