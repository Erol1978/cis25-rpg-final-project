#include "Player.h"
#include "Item.h"

int main() {
    Player player("Hero", 100, 10);
    Item potion("Potion", 25);

    player.addItem(potion);
    player.displayStatus();

    return 0;
}
