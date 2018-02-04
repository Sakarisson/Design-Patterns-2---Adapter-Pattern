#include "Bakery.h"

#include <iostream>

Bakery::Bakery() {
    brm = new BakingRecipeManager("skafferi.dat");
}

Bakery::~Bakery() {
    delete brm;
}

void Bakery::bakeRecipes() const {
    while (brm->hasAnotherRecipe()) {
        BakingRecipe* recipe = brm->getNextBakingRecipe();
        if (recipe->isBakeable(brm->getAvailableIngredients())) {
            recipe->bakeIt();
        }
        else {
            std::cout <<
                "Can't bake " << recipe->getName() << " because not all ingredients are in storage" << std::endl;
        }
        delete recipe;
    }
}
