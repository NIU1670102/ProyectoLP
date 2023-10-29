#include "pch.h"
#include "CamiSolucio.h"
#include "Common.h"
#include "MapaSolucio.h"
#include "PuntDeInteresBotigaSolucio.h"
#include "PuntDeInteresRestaurantSolucio.h"

void MapaSolucio::getPdis(std::vector<PuntDeInteresBase*>& puntsDeInteresBase)
{
	m_puntsDeInteresBase.push_back(new PuntDeInteresBotigaSolucio(Coordinate{ 41.4918606, 2.1465411 }, "La Millor Pastisseria", "no", "bakery", ""));
	//amenity amb valor restaurant?
	m_puntsDeInteresBase.push_back(new PuntDeInteresRestaurantSolucio(Coordinate{ 41.4902204, 2.1406477 }, "El Millor Restaurant", "yes", "regional"));

}
