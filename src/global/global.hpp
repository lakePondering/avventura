//global.hpp
#ifndef _GLOBAL_HPP_
#define _GLOBAL_HPP_

#ifndef _CONSTANTS_
#define _CONSTANTS_

extern const int MAXNAMELENGHT = 20;    //Numero di char massimi per il nome di una creatura generica
extern const int MAXPARTSLENGHT = 10;   //Numero massimo pezzi dell'array parts
//Non definito
const int UNDEFINED_N = -2;					//per indicare tutto quello che non è stato definito
const char* UNDEFINED_TXT = "Non definito";	//per indicare tutto quello che non è stato definito

//Sconosciuto
const int UNKNOWN_N = -1;						//per indicare qualcosa di sconosciuto
const char* UNKNOWN_TXT = "Sconosciuto";		//per indicare qualcosa di sconosciuto

//Error
const char* ERROR_TXT = "Errore";		//per indicare un errore
const int ERROR_N = -1377;				//per indicare un errore

//Race_N
const int HUMAN_N = 0;		//Uomo
const int GOBLIN_N = 1;		//Goblin
const int DRAGON_N = 2;		//Dragone
//Race_TXT
const char* HUMAN_TXT="Umano";
const char* GOBLIN_TXT="Goblin";
const char* DRAGON_TXT="Dragone";
//Race_hp
const int HUMAN_HP = 100;	//UomoHPmedi
const int GOBLIN_HP = 50;	//GoblinHPmedi
const int DRAGON_HP = 5000;	//DragoneHPmedi

//Job_N
const int BANDIT_N = 0;			//Bandito
//Job_TXT
const char* BANDIT_TXT="Bandito";

//Combattimento_N
const float FAINT_N = 0.1;		//La vita minima che può raggiungere un personaggio prima di svenire
const int FISICAL_N = 0;			//Attacco fisico
const int MAGICAL_N = 1;			//Attacco magico
//Combattimento_TXT

//part_N
const int HEAD_N = 0;	//Testa
const int BODY_N = 1;	//Corpo
const int LLEG_N = 2;	//Gamba sinistra
const int RLEG_N = 3;	//Gamba destra
const int LARM_N = 4;	//Braccio sinistro
const int RARM_N = 5;	//Braccio destro
const int TAIL_N = 6;	//Coda
const int WINGS_N = 7;	//Ali
const int HORNS_N = 8;	//Corna
//part_Comulative_N
const int LEGS_N = 10;	//Gamba destra + Gamba sinistra			
const int ARMS_N = 11;	//Braccio destro +Braccio sinistro
//part_TXT
const char* HEAD_TXT = "Testa";
const char* BODY_TXT = "Corpo";
const char*	LLEG_TXT = "Gamba sinistra";
const char* RLEG_TXT = "Gamba destra";
const char* LARM_TXT = "Braccio sinistro";
const char* RARM_TXT = "Braccio destro";
const char* TAIL_TXT = "Coda";
const char* WINGS_TXT = "Ali";
const char* HORNS_TXT = "Corna";
//Part_Comulative_TXT
const char* LEGS_TXT = "Gambe";			
const char* ARMS_TXT = "Braccia";

//Status_N
const int DESTROYED_N = 0;		//Distrutto				HP>=0%
const int UNUSABLE_N = 1;		//Inutilizzabile		HP>=10%
const int VERYBADLYHURT_N = 2;	//Veramente malmesso	HP>=25%
const int BADLYHURT_N = 3;		//Malmesso				HP>=50%
const int HURT_N = 4;			//Danneggiato			HP>=75%
const int ALMOSTOK_N = 5;		//Quasi Ok				HP>=90%
const int OK_N = 6;				//Ok					HP>=95%
//Status_%
const int DESTROYED_P = 0;		//Distrutto				HP>=0%
const int UNUSABLE_P = 10;		//Inutilizzabile		HP>=10%
const int VERYBADLYHURT_P = 25;	//Veramente malmesso	HP>=25%
const int BADLYHURT_P = 50;		//Malmesso				HP>=50%
const int HURT_P = 75;			//Danneggiato			HP>=75%
const int ALMOSTOK_P = 90;		//Quasi Ok				HP>=90%
const int OK_P = 95;			//Ok					HP>=95%
//Status_TXT
const char* DESTROYED_TXT = "Distrutto";
const char* UNUSABLE_TXT = "Inutilizzabile";
const char* VERYBADLYHURT_TXT = "Veramente malmesso";
const char* BADLYHURT_TXT = "Malmesso";
const char* HURT_TXT = "Danneggiato";
const char* ALMOSTOK_TXT = "Quasi Ok";
const char* OK_TXT = "Ok";

#endif

//functions.cpp
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
