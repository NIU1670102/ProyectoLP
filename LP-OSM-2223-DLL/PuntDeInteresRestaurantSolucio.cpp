#include "pch.h"
#include "PuntDeInteresRestaurantSolucio.h"

std::string PuntDeInteresRestaurantSolucio::getName()
{
    return PuntDeInteresBase::getName();
}

unsigned int PuntDeInteresRestaurantSolucio::getColor()
{
    if (m_cuisine == "pizza" && m_wheelchair == "yes") {
        return 0x03FCBA;
    }

    if (m_cuisine == "chinese") {
        return 0xA6D9F7;
    }

    if (m_wheelchair == "yes") {
        return 0x251351;
    }

    return PuntDeInteresBase::getColor();
}
