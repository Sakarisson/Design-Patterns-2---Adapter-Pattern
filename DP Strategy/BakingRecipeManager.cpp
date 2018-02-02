#include <fstream>
#include <iostream>

#include "BakingRecipeManager.h"

BakingRecipeManager::BakingRecipeManager(std::string fileName) {
    std::ifstream file;
    std::string line;
    file.open(fileName);
    while (file >> line) {
        std::cout << line << std::endl;
        ingredients.push_back(new Ingredient(line));
    }
}

bool BakingRecipeManager::hasAnotherRecipe() const {
    return true;
}
