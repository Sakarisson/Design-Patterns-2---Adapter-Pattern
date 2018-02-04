#include "Bakery.h"

Bakery::Bakery() {
    brm = new BakingRecipeManager("skafferi.dat");
}

Bakery::~Bakery() {
    delete brm;
}

void Bakery::bakeRecipes() const {
    while (brm->hasAnotherRecipe()) {
        brm->getNextBakingRecipe()->bakeIt();
    }
}
