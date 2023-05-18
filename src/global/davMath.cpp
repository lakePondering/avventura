#include <random>
#include <cstdlib>
#include <ctime>
#include "splitmix64.hpp"
#include "global.hpp"
//RNG il resto è in splitmix64
void init_Random()
{
	    splitmix64_seed(12341324);
}
int davRand() 
{  //random lineare tra 1 e 100
	return (splitmix64() % 100 +1);
};

//Formule

float davNormalDistribution(int val) 
{ //prendo il valore e aggiungo/tolgo qualche integer in modo da farlo sembrare una distribuzione normale >0
	float x = (davRand() - 50) * (sqrt(2) / 50); //-sqrt(2)<=x<=sqrt(2)
	x = val + val*((tan(x)/50)); //x= val + val*((tgx)/50)
	if (x < 0) { x = 0; }
	return x;
};
int davInitiative(int STR, int DEX,  int INT) 
{		//i=5+ (1*Dex+ 0.5*Str+ 0.5*Int)+ 5*(x^2) ,x= davNormalDistribution(1),i>0
	float i = 5 + (1 * DEX) + (0.5 * STR) + (0.5 * INT) + pow((5 * davNormalDistribution(1)), 2);
	if (i < 0) { i = 0; }
	return i;
};
