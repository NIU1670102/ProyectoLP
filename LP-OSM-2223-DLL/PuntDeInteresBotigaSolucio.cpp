#include "pch.h"
#include "PuntDeInteresBotigaSolucio.h"

std::string PuntDeInteresBotigaSolucio::getName()
{
    return PuntDeInteresBase::getName();
}
unsigned int PuntDeInteresBotigaSolucio::getColor()
{
    if (m_shop == "supermarket") {
        return 0xA5BE00;
    }

    if (m_shop == "tobacco") {
        return 0xFFAD69;
    }

    if (m_shop == "bakery") {
        if (m_opening_hours.find("06:00-22:00") && m_wheelchair == "yes") {
            return 0x4CB944;
        }
        return 0xE85D75;
    }

    return 0xEFD6AC;
}
