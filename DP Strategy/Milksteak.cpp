#include "Milksteak.h"
#include <iostream>

Milksteak::Milksteak(std::string iName) : BakingRecipe(iName) {
    neededIng.push_back(new Ingredient("milk"));
    neededIng.push_back(new Ingredient("steak"));
}

void Milksteak::bakeIt() const {
    std::cout <<
        "Making some delicious milksteak. Nom." << std::endl <<
        "Needed ingredients:" << std::endl;
    for (auto ing : neededIng) {
        std::cout << ing->getName() << std::endl;
    }
}
