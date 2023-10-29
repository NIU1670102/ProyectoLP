#include "pch.h"
#include "PuntDeInteresBotigaSolucio.h"

unsigned int PuntDeInteresBotigaSolucio::getColor()
{
    if (shop == "supermarket") {
        return 0xA5BE00;
    }

    if (shop == "tobacco") {
        return 0xFFAD69;
    }

    if (shop == "bakery") {
        if (opening_hours.find("06:00-22:00") && wheelchair == "yes") {
            return 0x4CB944;
        }
        return 0xE85D75;
    }

    return 0xEFD6AC;
}
