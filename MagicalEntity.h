#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H
#include <iostream>
#include "Warrior.h"
#include "MagicalEntity.h"
#include <string>
using namespace std;

class MagicalEntity{
    int manaPool;
    int spellPower;

    public:
    //constructor 
    MagicalEntity(int mana,int spell);
    //getters
    int getMana()const;
    int getSpellPower()const;
};

#endif