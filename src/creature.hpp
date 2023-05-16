//creature.hpp
#ifndef _CREATURE_HPP_
#define _CREATURE_HPP_
#include "global/global.hpp"
#include "part.hpp"
class creature
{
public:
    creature(int race_N= UNDEFINED_N, int lvl_N= UNDEFINED_N, int job_N= UNDEFINED_N, bool npc_B= true);
    
    void addPart(int part_N= UNDEFINED_N);
    void templateBody();

    int status();
    void getInfo();
    void getPresentation();

private:
    char NAME [MAXNAMELENGHT] = "FIRSTNAME";
    part* PARTS [MAXPARTSLENGHT];

    bool NPC = true;
    int LVL = UNDEFINED_N;

    int RACE = UNDEFINED_N;
    int JOB = UNDEFINED_N;

    int STR = UNDEFINED_N;
    int DEX = UNDEFINED_N;
    int INT = UNDEFINED_N;
    int CHR = UNDEFINED_N;
    int LCK = UNDEFINED_N;
    
};
#endif