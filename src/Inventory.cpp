#include "Inventory.h"

void Inventory::addItem(const Item& item) {
    items.push_back(item);
}

int Inventory::size() const {
    return items.size();
}

bool Inventory::isEmpty() const {
    return items.empty();
}

Item Inventory::getItem(int index) const {
    if (index < 0 || index >= static_cast<int>(items.size())) {
        return Item();
    }
    return items[index];
}
