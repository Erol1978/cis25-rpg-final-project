#pragma once
#include <vector>
#include "Item.h"

class Inventory {
private:
    std::vector<Item> items;

public:
    void addItem(const Item& item);
    int size() const;
    bool isEmpty() const;
    Item getItem(int index) const;
};
