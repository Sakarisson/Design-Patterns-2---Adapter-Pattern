#ifndef BAKINGRECIPE_H
#define BAKINGRECIPE_H

#include <string>
#include <vector>

#include "Ingredient.h"

class BakingRecipe {
public:
    BakingRecipe(std::string);
    virtual ~BakingRecipe() {}
    virtual void bakeIt() const = 0;
    bool isBakeable(std::vector<Ingredient>&);
    std::string getName() const;
protected:
    std::string iName;
    std::vector<Ingredient*> neededIng;
};

#endif
