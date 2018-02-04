#include "BakingRecipe.h"
#include <algorithm>

BakingRecipe::BakingRecipe(std::string aName) {
    iName = aName;
}

BakingRecipe::~BakingRecipe() {
    for (auto it = neededIng.begin(); it != neededIng.end(); ++it) {
        delete (*it);
    }
    neededIng.clear();
}

bool BakingRecipe::isBakeable(std::vector<Ingredient>& availableIngred) {
    for (auto needed : neededIng) {
        if (std::find(availableIngred.begin(), availableIngred.end(), *needed) == availableIngred.end()) {
            return false;
        }
    }
    return true;
}

std::string BakingRecipe::getName() const {
    return iName;
}
