#pragma once

#include <string>
#include <vector>

#include "BakingRecipe.h"
#include "Ingredient.h"

class BakingRecipeManager {
public:
    BakingRecipeManager(std::string);
    ~BakingRecipeManager() {}
    bool hasAnotherRecipe() const;
    BakingRecipe* getNextBakingRecipe();
private:
    std::vector<BakingRecipe*> bakingRecipes;
    std::vector<Ingredient*> ingredients;
};
