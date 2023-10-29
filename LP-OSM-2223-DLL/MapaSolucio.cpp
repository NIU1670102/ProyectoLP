#include "pch.h"
#include "CamiSolucio.h"
#include "Common.h"
#include "MapaSolucio.h"
#include "PuntDeInteresBotigaSolucio.h"

void MapaSolucio::getPdis(std::vector<PuntDeInteresBase*>& puntsDeInteresBase)
{
	std::vector<PuntDeInteresBase*> puntsDeInteresBaseFixes;

	puntsDeInteresBaseFixes.push_back(new PuntDeInteresBotigaSolucio());

}
