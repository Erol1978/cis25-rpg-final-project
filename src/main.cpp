#include "Player.h"
#include "Item.h"
#include <iostream>

int main() {
    Player player("Hero", 100, 10);

    player.addItem(Item("Potion", 25));
    player.addItem(Item("Sword", 50));

    std::cout << "Before removing item:" << std::endl;
    player.displayStatus();

    if (player.removeItem("Potion")) {
        std::cout << "Item removed successfully" << std::endl;
    } else {
        std::cout << "Item not found" << std::endl;
    }

    std::cout << "After removing item:" << std::endl;
    player.displayStatus();

    return 0;
}
