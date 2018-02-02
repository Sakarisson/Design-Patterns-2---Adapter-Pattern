#include <iostream>
#include "BakingRecipeManager.h"
#include "Memstat.h"

int main() {
    std::cout << "Hello" << std::endl;
    BakingRecipeManager* brm = new BakingRecipeManager("skafferi.dat");
    delete brm;
    return 0;
}
