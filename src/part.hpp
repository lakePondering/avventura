//part.hpp
#ifndef _PART_HPP_
#define _PART_HPP_
#include "global/global.hpp"
class part{	
public:
	part(int part_N = UNDEFINED_N, int race_N = UNDEFINED_N);

	void setN(int N);
	void setMAXHP(int MAXHP);
	void setHP(int HP);

	int getN();
	int getMaxHp();
	int getHp();
	int getStatus();
private:
	int N = UNDEFINED_N;
	int MAXHP = UNDEFINED_N;
	int HP = UNDEFINED_N;

};
#endif