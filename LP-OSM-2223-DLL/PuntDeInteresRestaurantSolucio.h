#pragma once

#include <string>
#include "Common.h"
#include "PuntDeInteresBase.h"

class PuntDeInteresRestaurantSolucio : public PuntDeInteresBase {

private:
	std::string cuisine;

public:
	std::string getName();
	unsigned int getColor();

};