#pragma once
#include "CClasses.h"
#include "string.h"
#include "iostream"

using namespace std;

//----------------------------------------------------------------------------------
// Class CBase - classe de base abstaites contenant les fonctions virtuelles pures -
//----------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------------
// class CSetType - classe manipulant un ensemble d'objet de classe CBase et d�riv�es constituant un ensemble -
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
// class CPoint - classe manipulant deux coordonn�es enti�res -
//-------------------------------------------------------------
CPoint::CPoint(int dX, int dY)
{
	cout << "Construction d'un objet de la classe CPoint." << endl;
	m_dX = dX;
	m_dY = dY;
}

//---------------------------------------------------------------------------------
// class CComplexe - classe manipulant une partie r�elle et une partie imaginaire -
//---------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------------------------
// class CListBase - classe interm�diaire constituant une liste doublment cha�n�e d'objets CBase ou d�riv�s -
//-----------------------------------------------------------------------------------------------------------