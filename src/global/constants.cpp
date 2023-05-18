#include "global.hpp"

#ifndef _DAVCONSTANTS_
#define _DAVCONSTANTS_

extern const int MAXNAMELENGHT = 20;    //Numero di char massimi per il nome di una creatura generica
extern const int MAXPARTSLENGHT = 10;   //Numero massimo pezzi dell'array parts
//Non definito
extern const int UNDEFINED_N = -2;					//per indicare tutto quello che non è stato definito
extern const char* UNDEFINED_TXT = "Non definito";	//per indicare tutto quello che non è stato definito

//Sconosciuto
extern const int UNKNOWN_N = -1;						//per indicare qualcosa di sconosciuto
extern const char* UNKNOWN_TXT = "Sconosciuto";		//per indicare qualcosa di sconosciuto

//Error
extern const char* ERROR_TXT = "Errore";		//per indicare un errore
extern const int ERROR_N = -1377;				//per indicare un errore

//Race_N
extern const int HUMAN_N = 0;		//Uomo
extern const int GOBLIN_N = 1;		//Goblin
extern const int DRAGON_N = 2;		//Dragone
//Race_TXT
extern const char* HUMAN_TXT="Umano";
extern const char* GOBLIN_TXT="Goblin";
extern const char* DRAGON_TXT="Dragone";
//Race_hp
extern const int HUMAN_HP = 100;	//UomoHPmedi
extern const int GOBLIN_HP = 50;	//GoblinHPmedi
extern const int DRAGON_HP = 5000;	//DragoneHPmedi

//Job_N
extern const int BANDIT_N = 0;			//Bandito
//Job_TXT
extern const char* BANDIT_TXT="Bandito";

//Combattimento_N
extern const float FAINT_N = 0.1;		//La vita minima che può raggiungere un personaggio prima di svenire
extern const int FISICAL_N = 0;			//Attacco fisico
extern const int MAGICAL_N = 1;			//Attacco magico
//Combattimento_TXT

//part_N
extern const int HEAD_N = 0;	//Testa
extern const int BODY_N = 1;	//Corpo
extern const int LLEG_N = 2;	//Gamba sinistra
extern const int RLEG_N = 3;	//Gamba destra
extern const int LARM_N = 4;	//Braccio sinistro
extern const int RARM_N = 5;	//Braccio destro
extern const int TAIL_N = 6;	//Coda
extern const int WINGS_N = 7;	//Ali
extern const int HORNS_N = 8;	//Corna
//part_Comulative_N
extern const int LEGS_N = 10;	//Gamba destra + Gamba sinistra			
extern const int ARMS_N = 11;	//Braccio destro +Braccio sinistro
//part_TXT
extern const char* HEAD_TXT = "Testa";
extern const char* BODY_TXT = "Corpo";
extern const char*	LLEG_TXT = "Gamba sinistra";
extern const char* RLEG_TXT = "Gamba destra";
extern const char* LARM_TXT = "Braccio sinistro";
extern const char* RARM_TXT = "Braccio destro";
extern const char* TAIL_TXT = "Coda";
extern const char* WINGS_TXT = "Ali";
extern const char* HORNS_TXT = "Corna";
//Part_Comulative_TXT
extern const char* LEGS_TXT = "Gambe";			
extern const char* ARMS_TXT = "Braccia";

//Status_N
extern const int DESTROYED_N = 0;		//Distrutto				HP>=0%
extern const int UNUSABLE_N = 1;		//Inutilizzabile		HP>=10%
extern const int VERYBADLYHURT_N = 2;	//Veramente malmesso	HP>=25%
extern const int BADLYHURT_N = 3;		//Malmesso				HP>=50%
extern const int HURT_N = 4;			//Danneggiato			HP>=75%
extern const int ALMOSTOK_N = 5;		//Quasi Ok				HP>=90%
extern const int OK_N = 6;				//Ok					HP>=95%
//Status_%
extern const int DESTROYED_P = 0;		//Distrutto				HP>=0%
extern const int UNUSABLE_P = 10;		//Inutilizzabile		HP>=10%
extern const int VERYBADLYHURT_P = 25;	//Veramente malmesso	HP>=25%
extern const int BADLYHURT_P = 50;		//Malmesso				HP>=50%
extern const int HURT_P = 75;			//Danneggiato			HP>=75%
extern const int ALMOSTOK_P = 90;		//Quasi Ok				HP>=90%
extern const int OK_P = 95;			//Ok					HP>=95%
//Status_TXT
extern const char* DESTROYED_TXT = "Distrutto";
extern const char* UNUSABLE_TXT = "Inutilizzabile";
extern const char* VERYBADLYHURT_TXT = "Veramente malmesso";
extern const char* BADLYHURT_TXT = "Malmesso";
extern const char* HURT_TXT = "Danneggiato";
extern const char* ALMOSTOK_TXT = "Quasi Ok";
extern const char* OK_TXT = "Ok";
#endif