#pragma once

#include <string>
#include "Common.h"
#include "PuntDeInteresBase.h"

class PuntDeInteresBotigaSolucio : public PuntDeInteresBase {

private:
	std::string m_shop;
	std::string m_opening_hours;
	std::string m_wheelchair;

public:
	PuntDeInteresBotigaSolucio() {};
	PuntDeInteresBotigaSolucio(Coordinate coord, std::string name, std::string wheelchair, std::string shop, std::string opening_hours) : PuntDeInteresBase(coord, name), m_shop(shop), m_opening_hours(opening_hours), m_wheelchair(wheelchair) {}

	std::string getName();
	unsigned int getColor();
};