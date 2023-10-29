#pragma once

#include <string>
#include "Common.h"
#include "PuntDeInteresBase.h"

class PuntDeInteresBotigaSolucio : public PuntDeInteresBase {

private:
	std::string m_shop;
	std::string m_opening_hours;

public:
	PuntDeInteresBotigaSolucio();
	PuntDeInteresBotigaSolucio(Coordinate coord, std::string name, std::string wheelchair, std::string shop, std::string opening_hours) : PuntDeInteresBase(coord, name, wheelchair), m_shop(shop), m_opening_hours(opening_hours) {}

	std::string getName();
	unsigned int getColor();
};