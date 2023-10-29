#include "pch.h"
#include "PuntDeInteresRestaurantSolucio.h"

unsigned int PuntDeInteresRestaurantSolucio::getColor()
{
    if (cuisine == "pizza" && wheelchair == "yes") {
        return 0x03FCBA;
    }

    if (cuisine == "chinese") {
        return 0xA6D9F7;
    }

    if (wheelchair == "yes") {
        return 0x251351;
    }

    return PuntDeInteresBase::getColor();
}
