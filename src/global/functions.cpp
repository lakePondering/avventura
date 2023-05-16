//functons.cpp
#include "global.hpp"
//(int)razza = (int)Hp della razza
const int raceHp_f(int race_N) 
{
	if (race_N == HUMAN_N) { return HUMAN_HP; }
	if (race_N == GOBLIN_N) { return GOBLIN_HP; }
	if (race_N == DRAGON_N) { return DRAGON_HP; }

	if (race_N == UNKNOWN_N) { return UNKNOWN_N; }
	if (race_N == UNDEFINED_N) { return UNDEFINED_N; }
	return ERROR_N;
};

//(int)razza = (string)Nome della razza
const char* raceName_f(int race_N) 
{
	if (race_N == HUMAN_N) { return HUMAN_TXT; }
	if (race_N == GOBLIN_N) { return GOBLIN_TXT; }
	if (race_N == DRAGON_N) { return DRAGON_TXT; }

	if (race_N == UNKNOWN_N) { return UNKNOWN_TXT; }
	if (race_N == UNDEFINED_N) { return UNDEFINED_TXT; }
	return ERROR_TXT;
};

//(int)pezzo = (string)Nome del pezzo
const char* pieceName_f(int piece_N) 
{
	if (piece_N == HEAD_N) { return HEAD_TXT; }
	if (piece_N == BODY_N) { return BODY_TXT; }
	if (piece_N == LLEG_N) { return LLEG_TXT; }
	if (piece_N == RLEG_N) { return RLEG_TXT; }
	if (piece_N == LARM_N) { return LARM_TXT; }
	if (piece_N == RARM_N) { return RARM_TXT; }
	if (piece_N == TAIL_N) { return TAIL_TXT; }
	if (piece_N == WINGS_N) { return WINGS_TXT; }
	if (piece_N == HORNS_N) { return HORNS_TXT; }

	if (piece_N == UNKNOWN_N) { return UNKNOWN_TXT; }
	if (piece_N == UNDEFINED_N) { return UNDEFINED_TXT; }
	return ERROR_TXT;
};

//(int)razza+ (int)pezzo = (float)multiplier Hp pezzo in base alla razza
double pieceValue_f(int race_N, int piece_N)
{
	double _value = UNDEFINED_N;
	if (race_N == HUMAN_N) {
		if (piece_N == HEAD_N) { _value = (0.1); }
		if (piece_N == BODY_N) { _value = (0.3); }
		if (piece_N == LLEG_N) { _value = (0.15); }
		if (piece_N == RLEG_N) { _value = (0.15); }
		if (piece_N == LARM_N) { _value = (0.15); }
		if (piece_N == RARM_N) { _value = (0.15); }
	}
	if (race_N == GOBLIN_N) {
		if (piece_N == HEAD_N) { _value = (0.1); }
		if (piece_N == BODY_N) { _value = (0.3); }
		if (piece_N == LLEG_N) { _value = (0.15); }
		if (piece_N == RLEG_N) { _value = (0.15); }
		if (piece_N == LARM_N) { _value = (0.15); }
		if (piece_N == RARM_N) { _value = (0.15); }
	}
	if (race_N == DRAGON_N) {
		if (piece_N == HEAD_N) { _value = (0.05); }
		if (piece_N == BODY_N) { _value = (0.3); }
		if (piece_N == LLEG_N) { _value = (0.1); }
		if (piece_N == RLEG_N) { _value = (0.1); }
		if (piece_N == LARM_N) { _value = (0.1); }
		if (piece_N == RARM_N) { _value = (0.1); }
		if (piece_N == TAIL_N) { _value = (0.1); }
		if (piece_N == WINGS_N) { _value = (0.1); }
		if (piece_N == HORNS_N) { _value = (0.05); }
	}
	if (race_N == UNKNOWN_N || piece_N == UNKNOWN_N) { return UNKNOWN_N; }
	if (race_N == UNDEFINED_N || piece_N == UNDEFINED_N) { return UNDEFINED_N; }
	return _value * raceHp_f(race_N);
};

//(int)status_N = (string)Definizione status
const char* statusName_f(int status_N) 
{
	if (status_N == DESTROYED_N) { return DESTROYED_TXT; }
	if (status_N == UNUSABLE_N) { return UNUSABLE_TXT; }
	if (status_N == VERYBADLYHURT_N) { return VERYBADLYHURT_TXT; }
	if (status_N == BADLYHURT_N) { return BADLYHURT_TXT; }
	if (status_N == HURT_N) { return HURT_TXT; }
	if (status_N == ALMOSTOK_N) { return ALMOSTOK_TXT; }
	if (status_N == OK_N) { return OK_TXT; }

	if (status_N == UNKNOWN_N) { return UNKNOWN_TXT; }
	if (status_N == UNDEFINED_N) { return UNDEFINED_TXT; }
	return ERROR_TXT;
};

const char* jobName_f(int job_N)
{
	if (job_N == BANDIT_N){return BANDIT_TXT;}

	if (job_N == UNKNOWN_N) { return UNKNOWN_TXT; }
	if (job_N == UNDEFINED_N) { return UNDEFINED_TXT; }
	return ERROR_TXT;
};

const int status_f(int Hp_N,int MaxHp_N)
{
	int status = (Hp_N*100)/MaxHp_N;
	if (status >= OK_P)				{ return OK_N; }
	if (status >= ALMOSTOK_P)		{ return ALMOSTOK_N; }
	if (status >= HURT_P)			{ return HURT_N; } 
	if (status >= BADLYHURT_P)		{ return BADLYHURT_N; }
	if (status >= VERYBADLYHURT_P)	{ return VERYBADLYHURT_N; }	
	if (status >= UNUSABLE_P)		{ return UNUSABLE_N; }
	if (status >= DESTROYED_P)		{ return DESTROYED_N; }
	return ERROR_N;
};
