#pragma once

#include "CamiBase.h"

class CamiSolucio : public CamiBase {
	public:
		std::vector<Coordinate> getCamiCoords();
		CamiSolucio(std::vector<Coordinate> camibase) : m_camiSolucio(camibase) {}
		CamiSolucio() {}
	private:
		std::vector<Coordinate> m_camiSolucio;
	
};