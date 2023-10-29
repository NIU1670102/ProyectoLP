#include "pch.h"
#include "CamiSolucio.h"
#include "Common.h"

std::vector<Coordinate> CamiSolucio::getCamiCoords()
{
	std::vector<Coordinate> coords;
	coords.emplace_back(Coordinate{ 41.4928803, 2.1452381 });
	coords.emplace_back(Coordinate{ 41.4929072, 2.1452474 });
	coords.emplace_back(Coordinate{ 41.4933070, 2.1453852 });
	coords.emplace_back(Coordinate{ 41.4939882, 2.1456419 });

	return coords;
}
