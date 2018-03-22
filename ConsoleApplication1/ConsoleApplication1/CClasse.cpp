#pragma once
#include "CClasses.h"
#include "string.h"
#include "iostream"

using namespace std;

//----------------------------------------------------------------------------------
// Class CBase - classe de base abstaites contenant les fonctions virtuelles pures -
//----------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------------
// class CSetType - classe manipulant un ensemble d'objet de classe CBase et dérivées constituant un ensemble -
//-------------------------------------------------------------------------------------------------------------
CSetType::CSetType()
{
	cout << "Construction d'un objet CSetType - Construction d'un ensemble." << endl;
}
CSetType::~CSetType()
{
	cout << "Destruction d'un objet CSetType - Destruction d'un ensemble." << endl;
}
//-------------------------------------------------------------
// class CPoint - classe manipulant deux coordonnées entières -
//-------------------------------------------------------------
CPoint::CPoint(int dX, int dY)
{
	cout << "Construction d'un objet de la classe CPoint." << endl;
	m_dX = dX;
	m_dY = dY;
}

//---------------------------------------------------------------------------------
// class CComplexe - classe manipulant une partie réelle et une partie imaginaire -
//---------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------------------------
// class CListBase - classe intermédiaire constituant une liste doublment chaînée d'objets CBase ou dérivés -
//-----------------------------------------------------------------------------------------------------------