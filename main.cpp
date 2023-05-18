//main.cpp
#include <iostream>
#include <string>

#ifndef _DAVCONSTANTS_
#define _DAVCONSTANTS_
//things.hpp
const int UNDEFINED_N = -2;					        //per indicare tutto quello che non è stato definito
const std::string UNDEFINED_TXT = "Non definito";	//per indicare tutto quello che non è stato definito

//Sconosciuto
const int UNKNOWN_N = -1;						    //per indicare qualcosa di sconosciuto
const std::string UNKNOWN_TXT = "Sconosciuto";		//per indicare qualcosa di sconosciuto
#endif
//thing//
class thing
{
public:
	int ID;//per identidicare la cosa aggiungo un codice univoco
	bool LIVING;	//se è vivo o no
	int SIZE;//millimetri
	int WEIGHT;//grammi
	
/*
	bool EQUIPPABLE;
	int MATERIAL;   

*/
private:
	std::string NAME;
};
//living:thing//
class living : public thing
{
public:
	bool NPC;
};
//npc:living:thing//
class npc : public living
{

};
//pc:living:thing//
class pc : public living
{

};
//notliving:thing//
class notliving : public thing
{
public:
};
//created:notliving:thing//
class created : public notliving
{
public:
	int CAPACITYMAX;	//Quanti millimetri riesce a tenere massimo
	int CAPACITY;		//Quanti millimetri riesce a tenere
};
//notcreated:notliving:thing// PIANTE SASSI MINERALI 
class notcreated : public notliving
{
public:
	notcreated(int ID_N,std::string name_str =UNDEFINED_TXT, int weight_N=0, int size_N=0)
	{
		this->NAME=name_str;
		this->LIVING=false;
		this->ID=ID_N;
		this->SIZE=size_N;
		this->WEIGHT=weight_N;
	};
	void printInfo()
	{
		std::cout<<"\n info "<<this->NAME<<":";
		std::cout<<"\n weight: "<<this->WEIGHT<<"g";
		std::cout<<"\n size: "<<this->SIZE<<"mll";
	};
private:
	std::string NAME;
};
//World//
class world 
{
public:
	world(std::string name_str,int year_N,int month_N,int day_N, int hour_N, int weather_N=0)
	{
		this->NAME=name_str;
		this->LASTID=0;
		this->WEATHER=weather_N;
		this->YEAR=year_N;
		this->MONTH=month_N;
		this->DAY=day_N;
		this->HOUR=hour_N;
	}
	
	int getLastID()
	{
	this->LASTID ++;
	return this->LASTID - 1;
	};

	void printInfo()
	{
		std::cout<<"\n info "<<this->NAME;
		std::cout<<"\n Year: "<<this->YEAR<<", Month: "<<this->MONTH<<", Day: "<<this->DAY<<", Hour: "<<this->HOUR;
		std::cout<<"\n Current weather: "<<this->WEATHER;
	};
	int LASTID;
	int WEATHER;
	int YEAR;
	int MONTH;
	int DAY;
	int HOUR;
private:
	std::string NAME;	
};
//functions//


int main ()
{
	std::cout << "Benvenuti ad avventura.dav";
	world Terra("Terra",100,6,6,12,0);
	Terra.printInfo();
	std::cout<<"\n"<<Terra.LASTID;
	notcreated Rock(Terra.getLastID(),"Rock",500,250);
	std::cout<<"\n"<<Rock.ID;
	std::cout<<"\n"<<Terra.LASTID;
	Terra.getLastID();
	Terra.printInfo();
	Rock.printInfo();
	std::cout<<"\n"<<Terra.LASTID;
};