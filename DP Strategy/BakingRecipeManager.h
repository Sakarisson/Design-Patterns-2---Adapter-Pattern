#ifndef BAKINGRECIPEMANAGER_H
#define BAKINGRECIPEMANAGER_H

#include <string>
#include <vector>

#include "BakingRecipe.h"
#include "Ingredient.h"

class BakingRecipeManager {
public:
    BakingRecipeManager(std::string);
    ~BakingRecipeManager();
    bool hasAnotherRecipe() const;
    BakingRecipe* getNextBakingRecipe();
    std::vector<Ingredient>& getAvailableIngredients();
private:
    std::vector<BakingRecipe*> bakingRecipes;
    std::vector<Ingredient> ingredients;
};

#endif
