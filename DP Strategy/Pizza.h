#ifndef PIZZA_H
#define PIZZA_h

#include "BakingRecipe.h"
#include <string>

class Pizza : public BakingRecipe {
public:
    Pizza(std::string);
    void bakeIt() const override;
};

#endif
