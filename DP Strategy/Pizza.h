#ifndef PIZZA_H
#define PIZZA_h

#include "BakingRecipe.h"

class Pizza : public BakingRecipe {
public:
    Pizza();
    virtual ~Pizza() {}
    void bakeIt() const override;
};

#endif
