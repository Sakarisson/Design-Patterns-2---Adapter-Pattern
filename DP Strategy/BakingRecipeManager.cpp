#include <fstream>
#include <iostream>

#include "BakingRecipeManager.h"
#include "Pizza.h"
#include "Milksteak.h"

#include "NoBakingException.h"

BakingRecipeManager::BakingRecipeManager(std::string fileName) {
    // Prepare ingredients list
    std::ifstream file;
    std::string line;
    file.open(fileName);
    while (file >> line) {
        std::cout << line << std::endl;
        ingredients.push_back(new Ingredient(line));
    }
    // Prepare recipes
    bakingRecipes.push_back(new Pizza());
    bakingRecipes.push_back(new Milksteak());
}

bool BakingRecipeManager::hasAnotherRecipe() const {
    return bakingRecipes.size() > 0;
}

BakingRecipe* BakingRecipeManager::getNextBakingRecipe() {
    // Copy reference to first recipe or nullptr
    BakingRecipe* recipe = hasAnotherRecipe() ? bakingRecipes[0] : throw new NoBakingException("No more recipes!");
    // Remove recipe from vector
    if (bakingRecipes.size() > 1) {
        for (size_t i = 1; i < bakingRecipes.size(); i++) {
            bakingRecipes[i - 1] = bakingRecipes[i];
        }
        bakingRecipes.pop_back();
    }
    return recipe;
}
