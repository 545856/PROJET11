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
// class CSetType - classe manipulant un ensemble d'objet de classe CBase et dérivées constituant un ensemble -
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

	//Prédicats sur l'ensemble
	void Display(int);			//Permet d'afficher les éléments d'un ensemble en fonction de leur type

	//Actions sur l'ensemble
	void Ajoute(CBase*);	//Ajoute une élément à l'ensemble
	bool Appartient();		//Détermine l'unicité de l'appartenance d'un élément à un ensemble
	int Cardinal();			//Retourne le nombre d'éléments d'un ensemble

	//Itérateurs
	void Init();			//Initialise le mécanisme d'itération
	bool Existe();			//Détermine si le mécanisme d'itération continue ou non
	CListBase* Suivant();	//retourne le prochain élément de l'itérateur
};

//-------------------------------------------------------------
// class CPoint - classe manipulant deux coordonnées entières -
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
	CBase* Allocate();		//Retourne l'adresse de l'objet de la classe dérivée
};

//---------------------------------------------------------------------------------
// class CComplexe - classe manipulant une partie réelle et une partie imaginaire -
//---------------------------------------------------------------------------------
class CComplexe : public CBase
{
protected :
	float m_fA;
	char m_cB;
public:
	CBase* Allocate();		//Retourne l'adresse de l'objet de la classe dérivée
};



//-----------------------------------------------------------------------------------------------------------
// class CListBase - classe intermédiaire constituant une liste doublment chaînée d'objets CBase ou dérivés -
//-----------------------------------------------------------------------------------------------------------
class CListBase : public CBase
{
protected:
	CBase *pPosAct;
	CBase *pPosPrev;
	CBase *pPosNext;
public:
};