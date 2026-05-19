#include "Item.h"

Item::Item(std::string name, int value)
    : name(name), value(value) {}

std::string Item::getName() const {
    return name;
}

int Item::getValue() const {
    return value;
}
