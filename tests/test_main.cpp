#include "../src/Player.h"
#include "../src/Item.h"
#include "../src/Map.h"
#include <cassert>
#include <iostream>
#include <sstream>

void test_player_display_normal() {
    Player player("Hero", 100, 10);
    Item potion("Potion", 25);
    player.addItem(potion);

    std::ostringstream output;
    std::streambuf* oldCout = std::cout.rdbuf(output.rdbuf());

    player.displayStatus();

    std::cout.rdbuf(oldCout);

    std::string text = output.str();
    assert(text.find("Hero") != std::string::npos);
    assert(text.find("Health: 100/100") != std::string::npos);
    assert(text.find("Inventory Items: 1") != std::string::npos);
}

void test_inventory_edge_empty() {
    Player player("Hero", 100, 10);
    assert(player.inventorySize() == 0);
}

void test_map_boundary() {
    Map map(10, 10);
    assert(map.isInside(0, 0));
    assert(map.isInside(9, 9));
    assert(!map.isInside(-1, 0));
    assert(!map.isInside(10, 10));
}

int main() {
    std::cout << "Running tests...\n";

    test_player_display_normal();
    test_inventory_edge_empty();
    test_map_boundary();

    std::cout << "All tests passed.\n";
    return 0;
}
