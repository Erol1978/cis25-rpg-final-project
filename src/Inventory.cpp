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

bool Inventory::removeItem(const std::string& itemName) {
    for (int i = 0; i < static_cast<int>(items.size()); i++) {
        if (items[i].getName() == itemName) {
            items.erase(items.begin() + i);
            return true;
        }
    }

    return false;
}
