#pragma once

#include "MapaBase.h"

class MapaSolucio : public MapaBase {

public:
	void getPdis(std::vector<PuntDeInteresBase*>& puntsDeInteresBase);
	void getCamins(std::vector<CamiBase*>& caminsBase);
	void parsejaXmlElements(std::vector<XmlElement>& xmlElements);

};