#include <iostream>
#include "BakingRecipeManager.h"

int main() {
    std::cout << "Hello" << std::endl;
    BakingRecipeManager* brm = new BakingRecipeManager("skafferi.dat");
    return 0;
}
