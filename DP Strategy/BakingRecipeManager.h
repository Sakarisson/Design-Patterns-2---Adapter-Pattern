#pragma once

#include <string>

#include "BakingRecipe.h"

class BakingRecipeManager {
public:
    BakingRecipeManager(std::string);
    bool hasAnotherRecipe() const;
    BakingRecipe* getNextBakingRecipe();
};
