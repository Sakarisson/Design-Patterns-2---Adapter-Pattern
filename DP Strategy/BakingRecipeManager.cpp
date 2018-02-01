#include <fstream>
#include <iostream>

#include "BakingRecipeManager.h"

BakingRecipeManager::BakingRecipeManager(std::string fileName) {
    std::ifstream file;
    std::string line;
    while (file >> line) {
        std::cout << line << std::endl;
    }
    file.open(fileName);
}

bool BakingRecipeManager::hasAnotherRecipe() const {
    return true;
}
