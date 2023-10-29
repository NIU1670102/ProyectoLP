#pragma once

#include <string>
#include "Common.h"
#include "PuntDeInteresBase.h"

class PuntDeInteresRestaurantSolucio : public PuntDeInteresBase {

private:
	std::string m_cuisine;

public:
	PuntDeInteresRestaurantSolucio();
	PuntDeInteresRestaurantSolucio(Coordinate coord, std::string name, std::string wheelchair, std::string cuisine) : PuntDeInteresBase(coord, name, wheelchair), m_cuisine(cuisine) {}

	std::string getName();
	unsigned int getColor();

};