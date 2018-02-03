#ifndef MILKSTEAK_H
#define MILKSTEAK_H

#include "BakingRecipe.h"
#include <string>

class Milksteak : public BakingRecipe {
public:
    Milksteak(std::string);
    void bakeIt() const override;
};

#endif
