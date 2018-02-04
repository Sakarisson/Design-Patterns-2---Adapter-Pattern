#ifndef PIZZA_H
#define PIZZA_h

#include "BakingRecipe.h"
#include <string>

class Pizza : public BakingRecipe {
public:
    Pizza();
    void bakeIt() const override;
};

#endif
