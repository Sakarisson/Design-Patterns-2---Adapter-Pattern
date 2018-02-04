#ifndef MILKSTEAK_H
#define MILKSTEAK_H

#include "BakingRecipe.h"

class Milksteak : public BakingRecipe {
public:
    Milksteak();
    virtual ~Milksteak() {}
    void bakeIt() const override;
};

#endif
