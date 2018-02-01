#pragma once

#include <string>

class Ingredient {
public:
    Ingredient(std::string aName)
        : iName(aName) {}
    std::string getName() const;
    bool operator==(const Ingredient&) const;
private:
    std::string iName;
};
