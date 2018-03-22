#pragma once


#define INT 1
#define COMPLEX 2
#define UNSPEC 0

//----------------------------------------------------------------------------------
// Class CBase - classe de base abstaites contenant les fonctions virtuelles pures -
//----------------------------------------------------------------------------------
class CBase
{
protected:
public:
	virtual void Affiche() = 0;
	virtual void Type() = 0;
};

//-------------------------------------------------------------------------------------------------------------
// class CSetType - classe manipulant un ensemble d'objet de classe CBase et d�riv�es constituant un ensemble -
//-------------------------------------------------------------------------------------------------------------
class CSetType 
{
protected :
	CBase *pPosAct;
	CBase *pPosPrev;
	CBase *pPosNext;
public :
	//C'tor
	CSetType();

	//D'tor
	virtual ~CSetType();

	//Pr�dicats sur l'ensemble
	void Display(int);			//Permet d'afficher les �l�ments d'un ensemble en fonction de leur type

	//Actions sur l'ensemble
	void Ajoute(CBase*);	//Ajoute une �l�ment � l'ensemble
	bool Appartient();		//D�termine l'unicit� de l'appartenance d'un �l�ment � un ensemble
	int Cardinal();			//Retourne le nombre d'�l�ments d'un ensemble

	//It�rateurs
	void Init();			//Initialise le m�canisme d'it�ration
	bool Existe();			//D�termine si le m�canisme d'it�ration continue ou non
	CListBase* Suivant();	//retourne le prochain �l�ment de l'it�rateur
};

//-------------------------------------------------------------
// class CPoint - classe manipulant deux coordonn�es enti�res -
//-------------------------------------------------------------
class CPoint : public CBase
{
protected :
	int m_dX, m_dY;
public:
	//C'tor
	CPoint(int dX = 0, int dY = 0);
	//D'tor
	virtual ~CPoint();
	//Actions
	CBase* Allocate();		//Retourne l'adresse de l'objet de la classe d�riv�e
};

//---------------------------------------------------------------------------------
// class CComplexe - classe manipulant une partie r�elle et une partie imaginaire -
//---------------------------------------------------------------------------------
class CComplexe : public CBase
{
protected :
	float m_fA;
	char m_cB;
public:
	CBase* Allocate();		//Retourne l'adresse de l'objet de la classe d�riv�e
};



//-----------------------------------------------------------------------------------------------------------
// class CListBase - classe interm�diaire constituant une liste doublment cha�n�e d'objets CBase ou d�riv�s -
//-----------------------------------------------------------------------------------------------------------
class CListBase : public CBase
{
protected:
	CBase *pPosAct;
	CBase *pPosPrev;
	CBase *pPosNext;
public:
};