#pragma once

#include "MapaBase.h"

class MapaSolucio : public MapaBase {

public:
	MapaSolucio();

	void getPdis(std::vector<PuntDeInteresBase*>& puntsDeInteresBase);
	void getCamins(std::vector<CamiBase*>& caminsBase);
	void parsejaXmlElements(std::vector<XmlElement>& xmlElements);

};