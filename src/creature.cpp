//creature.cpp
#include "creature.hpp"
#include <iostream>

creature::creature(int race_N, int lvl_N, int job_N, bool npc_B)
{
	if (npc_B){
	this->RACE=race_N;
	this->LVL=lvl_N;
	this->JOB=job_N;
	this->NPC=npc_B;
	}
};

void creature::templateBody()
{
	if(this->RACE == HUMAN_N){
		this->addPart(HEAD_N);
		this->addPart(BODY_N);
		this->addPart(LLEG_N);
		this->addPart(RLEG_N);
		this->addPart(LARM_N);
		this->addPart(RARM_N);
	}
	if(this->RACE == GOBLIN_N){
		this->addPart(HEAD_N);
		this->addPart(BODY_N);
		this->addPart(LLEG_N);
		this->addPart(RLEG_N);
		this->addPart(LARM_N);
		this->addPart(RARM_N);
	}
	if(this->RACE == DRAGON_N){
		this->addPart(HEAD_N);
		this->addPart(BODY_N);
		this->addPart(LLEG_N);
		this->addPart(RLEG_N);
		this->addPart(LARM_N);
		this->addPart(RARM_N);
		this->addPart(TAIL_N);
		this->addPart(WINGS_N);
		this->addPart(HORNS_N);
	}
	if(this->RACE == UNDEFINED_N){//dafare
	}
};

void creature::addPart(int part_N)
{
	this->PARTS[part_N]->setN(part_N);
	this->PARTS[part_N]->setMAXHP(pieceValue_f(this->RACE,part_N));
	this->PARTS[part_N]->setHP(this->PARTS[part_N]->getHp());
};

void creature::getPresentation()
{
	std::cout<<"\n"<<this->NAME<<", "<<jobName_f(this->JOB)<<" "<<raceName_f(this->RACE);
};
void creature::getInfo()
{
	std::cout << "\n Di seguente riportate le caratteristiche di: ";
	this->getPresentation();
	std::cout << "\n ----------------";
	std::cout << "\n Status:" << statusName_f(this->status());
	std::cout << "\n Lvl:	" << this->LVL;
	std::cout << "\n Str:	" << this->STR;
	std::cout << "\n Dex:	" << this->DEX;
	std::cout << "\n Int:	" << this->INT;
	std::cout << "\n Chr:	" << this->CHR;
	std::cout << "\n Lck:	" << this->LCK;
	std::cout << "\n ----------------";
}

int creature::status()
{
	int _status_Sum = 0;
	int _parts_Counter = 0;
	for (int i =0;i<MAXPARTSLENGHT;i++)
	{	
		if(this->PARTS[i]->getN()>UNDEFINED_N){
			_status_Sum += this->PARTS[i]->getStatus();
			_parts_Counter ++;
		}
	}
	return (_status_Sum/_parts_Counter);
};