#pragma once

#include <string>
#include "Common.h"
#include "PuntDeInteresBase.h"

class PuntDeInteresRestaurantSolucio : public PuntDeInteresBase {

private:
	std::string m_cuisine;
	std::string m_wheelchair;
public:
	PuntDeInteresRestaurantSolucio() {}
	PuntDeInteresRestaurantSolucio(Coordinate coord, std::string name, std::string wheelchair, std::string cuisine) : PuntDeInteresBase(coord, name), m_cuisine(cuisine), m_wheelchair(wheelchair) {}

	std::string getName();
	unsigned int getColor();

};