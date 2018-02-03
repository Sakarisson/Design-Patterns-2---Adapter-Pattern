#include "BakingRecipe.h"
#include <algorithm>

BakingRecipe::BakingRecipe(std::string aName) {
    iName = aName;
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
