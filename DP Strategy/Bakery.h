#ifndef BAKERY_H
#define BAKERY_H

#include "BakingRecipeManager.h"

class Bakery {
public:
    Bakery();
    ~Bakery();
    void bakeRecipes() const;
private:
    BakingRecipeManager* brm;
};

#endif
