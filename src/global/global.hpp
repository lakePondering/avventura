//global.hpp
#ifndef _GLOBAL_HPP_
#define _GLOBAL_HPP_

extern const int MAXNAMELENGHT;    //Numero di char massimi per il nome di una creatura generica
extern const int MAXPARTSLENGHT;   //Numero massimo pezzi dell'array parts
//Non definito
extern const int UNDEFINED_N;					//per indicare tutto quello che non è stato definito
extern const char* UNDEFINED_TXT;	//per indicare tutto quello che non è stato definito

//Sconosciuto
extern const int UNKNOWN_N;						//per indicare qualcosa di sconosciuto
extern const char* UNKNOWN_TXT;		//per indicare qualcosa di sconosciuto

//Error
extern const char* ERROR_TXT;		//per indicare un errore
extern const int ERROR_N;				//per indicare un errore

//Race_N
extern const int HUMAN_N;		//Uomo
extern const int GOBLIN_N;		//Goblin
extern const int DRAGON_N;		//Dragone
//Race_TXT
extern const char* HUMAN_TXT;
extern const char* GOBLIN_TXT;
extern const char* DRAGON_TXT;
//Race_hp
extern const int HUMAN_HP;	//UomoHPmedi
extern const int GOBLIN_HP;	//GoblinHPmedi
extern const int DRAGON_HP;	//DragoneHPmedi

//Job_N
extern const int BANDIT_N;			//Bandito
//Job_TXT
extern const char* BANDIT_TXT;

//Combattimento_N
extern const float FAINT_N;		//La vita minima che può raggiungere un personaggio prima di svenire
extern const int FISICAL_N;			//Attacco fisico
extern const int MAGICAL_N;			//Attacco magico
//Combattimento_TXT

//part_N
extern const int HEAD_N;	//Testa
extern const int BODY_N;	//Corpo
extern const int LLEG_N;	//Gamba sinistra
extern const int RLEG_N;	//Gamba destra
extern const int LARM_N;	//Braccio sinistro
extern const int RARM_N;	//Braccio destro
extern const int TAIL_N;	//Coda
extern const int WINGS_N;	//Ali
extern const int HORNS_N;	//Corna
//part_Comulative_N
extern const int LEGS_N;	//Gamba destra + Gamba sinistra			
extern const int ARMS_N;	//Braccio destro +Braccio sinistro
//part_TXT
extern const char* HEAD_TXT;
extern const char* BODY_TXT;
extern const char*	LLEG_TXT;
extern const char* RLEG_TXT;
extern const char* LARM_TXT;
extern const char* RARM_TXT;
extern const char* TAIL_TXT;
extern const char* WINGS_TXT;
extern const char* HORNS_TXT;
//Part_Comulative_TXT
extern const char* LEGS_TXT;			
extern const char* ARMS_TXT;

//Status_N
extern const int DESTROYED_N;		//Distrutto				HP>=0%
extern const int UNUSABLE_N;		//Inutilizzabile		HP>=10%
extern const int VERYBADLYHURT_N;	//Veramente malmesso	HP>=25%
extern const int BADLYHURT_N;		//Malmesso				HP>=50%
extern const int HURT_N;			//Danneggiato			HP>=75%
extern const int ALMOSTOK_N;		//Quasi Ok				HP>=90%
extern const int OK_N;				//Ok					HP>=95%
//Status_%
extern const int DESTROYED_P;		//Distrutto				HP>=0%
extern const int UNUSABLE_P;		//Inutilizzabile		HP>=10%
extern const int VERYBADLYHURT_P;	//Veramente malmesso	HP>=25%
extern const int BADLYHURT_P;		//Malmesso				HP>=50%
extern const int HURT_P;			//Danneggiato			HP>=75%
extern const int ALMOSTOK_P;		//Quasi Ok				HP>=90%
extern const int OK_P;			//Ok					HP>=95%
//Status_TXT
extern const char* DESTROYED_TXT;
extern const char* UNUSABLE_TXT;
extern const char* VERYBADLYHURT_TXT;
extern const char* BADLYHURT_TXT;
extern const char* HURT_TXT;
extern const char* ALMOSTOK_TXT;
extern const char* OK_TXT;


//Functions.cpp
const int raceHp_f(int race_N);
const char* raceName_f(int race_N);
const char* pieceName_f(int piece_N);
double pieceValue_f(int race_N, int piece_N);
const char* statusName_f(int status_N);
const char* jobName_f(int job_N);
const int status_f(int Hp_N,int MaxHp_N);

//davMath.cpp
void init_Random();
int davRand();
float davNormalDistribution(int val);
int davInitiative(int STR, int DEX,  int INT);
#endif
