#pragma once
#include <string>

class Item {
private:
    std::string name;
    int value;

public:
    Item(std::string name = "", int value = 0);

    std::string getName() const;
    int getValue() const;
};
