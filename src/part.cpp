//part.cpp
#include "part.hpp"

part::part(int part_N, int race_N){
    this->N=part_N;
    this->MAXHP=davNormalDistribution(raceHp_f(race_N));
    this->HP=this->MAXHP;
};

void part::setN(int N)
{
    this->N=N;
 };
void part::setMAXHP(int MAXHP)
{
    this->MAXHP=MAXHP;
};
void part::setHP(int HP)
{
    this->HP=HP;
};

int part::getN()
{
    return this->N;
};
int part::getMaxHp()
{
    return this->MAXHP;
};
int part::getHp()
{
    return this->HP;
};
int part::getStatus()
{
    return status_f(this->HP,this->MAXHP);
};