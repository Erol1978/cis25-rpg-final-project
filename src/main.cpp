#include "Player.h"
#include "Item.h"
#include <iostream>

int main() {
    Player player("Hero", 100, 10);

    player.addItem(Item("Potion", 25));
    player.addItem(Item("Sword", 50));

    std::cout << "Starting status:" << std::endl;
    player.displayStatus();

    player.takeDamage(50);

    std::cout << "\nAfter taking damage:" << std::endl;
    player.displayStatus();

    if (player.useHealingPotion()) {
        std::cout << "\nPotion used successfully." << std::endl;
    } else {
        std::cout << "\nNo potion available." << std::endl;
    }

    std::cout << "\nFinal status:" << std::endl;
    player.displayStatus();

    return 0;
}
