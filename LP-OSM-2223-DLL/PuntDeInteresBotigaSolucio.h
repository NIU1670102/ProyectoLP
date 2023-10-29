#pragma once

#include <string>
#include "Common.h"
#include "PuntDeInteresBase.h"

class PuntDeInteresBotigaSolucio : public PuntDeInteresBase {

private:
	std::string shop;
	std::string opening_hours;

public:
	PuntDeInteresBotigaSolucio();

	std::string getName();
	unsigned int getColor();
};