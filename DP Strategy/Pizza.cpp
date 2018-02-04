#include "Pizza.h"
#include <iostream>

Pizza::Pizza() : BakingRecipe("Pizza") {
    neededIng.push_back(new Ingredient("oil"));
    neededIng.push_back(new Ingredient("yeast"));
    neededIng.push_back(new Ingredient("wheat-flour"));
    neededIng.push_back(new Ingredient("salt"));
}

void Pizza::bakeIt() const {
    std::cout << 
        "Baking a pizza, lalala" << std::endl << 
        "Ingredients being used:" << std::endl;
    for (auto ing : neededIng) {
        std::cout << ing->getName() << std::endl;
    }
}
