#pragma once
#include "pch.h"

#include "Common.h"
#include "PuntDeInteresBase.h"
#include "CamiBase.h"


class MapaBase {

	public:
		virtual void getPdis(std::vector<PuntDeInteresBase*>& puntsDeInteresBase) = 0;
		virtual void getCamins(std::vector<CamiBase*>& caminsBase) = 0;
		virtual void parsejaXmlElements(std::vector<XmlElement>& xmlElements) = 0;

};



