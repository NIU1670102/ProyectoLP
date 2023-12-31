#include "pch.h"
#include "CamiSolucio.h"
#include "Common.h"
#include "MapaSolucio.h"
#include "PuntDeInteresBotigaSolucio.h"
#include "PuntDeInteresRestaurantSolucio.h"

void MapaSolucio::getPdis(std::vector<PuntDeInteresBase*>& puntsDeInteresBase)
{
	puntsDeInteresBase.push_back(new PuntDeInteresBotigaSolucio(Coordinate{ 41.4918606, 2.1465411 }, "La Millor Pastisseria", "no", "bakery", ""));
	//amenity amb valor restaurant?
	puntsDeInteresBase.push_back(new PuntDeInteresRestaurantSolucio(Coordinate{ 41.4902204, 2.1406477 }, "El Millor Restaurant", "yes", "regional"));

}

void MapaSolucio::getCamins(std::vector<CamiBase*>& caminsBase)
{
	CamiSolucio a;

	caminsBase.push_back(new CamiSolucio(a.getCamiCoords()));
}

void MapaSolucio::parsejaXmlElements(std::vector<XmlElement>& xmlElements)
{
}
