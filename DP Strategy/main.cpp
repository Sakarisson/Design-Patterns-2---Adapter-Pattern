#include <iostream>
#include "Ingredient.h"
// #include "Memstat.h"

int main() {
    std::cout << "Hello" << std::endl;
    // BakingRecipeManager* brm = new BakingRecipeManager("skafferi.dat");
    // delete brm;
    Ingredient* ing = new Ingredient("Kristian's");
    std::cout << ing->getName() << std::endl;
    return 0;
}
