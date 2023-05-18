//main.cpp
#include <iostream>

#ifndef _DAVCONSTANTS_
#define _DAVCONSTANTS_
//things.hpp
const int UNDEFINED_N = -2;					        //per indicare tutto quello che non è stato definito
const std::string UNDEFINED_TXT = "Non definito";	//per indicare tutto quello che non è stato definito

//Sconosciuto
const int UNKNOWN_N = -1;						    //per indicare qualcosa di sconosciuto
const std::string UNKNOWN_TXT = "Sconosciuto";		//per indicare qualcosa di sconosciuto
#endif
//thing
class thing
{
public:
	bool EQUIPPABLE;

	int MATERIAL;   
	int SIZE;       //Liter
	int WEIGHT;     //Kg
	thing(std::string name_TXT=UNDEFINED_TXT,int material=UNDEFINED_N,bool equippable_B=0);

private:
	std::string NAME;
};

thing::thing(std::string name_TXT,int material_N,bool equippable_B)
{
	this->NAME=name_TXT;
	this->MATERIAL=material_N;
	this->EQUIPPABLE=equippable_B;
	this->SIZE=UNKNOWN_N;
	this->WEIGHT=UNKNOWN_N;
};
//part//
class part
{
public:
//Per la classe things
	bool EQUIPPABLE;
	bool USABLE;
//
	int RACE;
	int BLOOD;
	int BLOOD_LOSS;
//Resistances
	int CUT_RES;
	int CONCUSSION_RES;
	int PERFORATION_RES;

private:
	std::string NAME;
};
//creature//
class creature 
{
public:
	creature();
protected:
};

int main ()
{

};