#include "Ingredient.h"

std::string Ingredient::getName() const {
    return iName;
}

bool Ingredient::operator==(const Ingredient& rhs) const {
    return getName() == rhs.getName();
}
