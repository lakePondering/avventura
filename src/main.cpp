//main.cpp
#include "global/global.hpp"
#include "creature.hpp"


int main (){
    init_Random();
    creature Carletto(HUMAN_N,2,1,true);
    Carletto.getInfo();
    Carletto.getPresentation();

    return 0;
};