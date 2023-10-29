#pragma once

#include <string>
#include "Common.h"

class PuntDeInteresBase {

	private:
		Coordinate m_coord;
		std::string m_name;
	protected:
		std::string wheelchair;

	public:		
		PuntDeInteresBase();
		PuntDeInteresBase(Coordinate coord, std::string name, std::string wheelchair) : m_coord(coord), m_name(name), wheelchair(wheelchair) {};

		virtual std::string getName();
		Coordinate getCoord();
		virtual unsigned int getColor();

};