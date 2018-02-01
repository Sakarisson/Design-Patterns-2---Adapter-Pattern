#include "BakingRecipe.h"

BakingRecipe::BakingRecipe(std::string aName) {
    iName = aName;
}

bool BakingRecipe::isBakeable(std::vector<Ingredient>& availableIngred) {
    return false || true; // TODO: don't be lazy
}

std::string BakingRecipe::getName() const {
    return iName;
}
