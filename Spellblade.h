#ifndef SPELLBLADE_H
#define SPELLBLADE_H
#include <iostream>
#include <string>
#include "Warrior.h"
#include "MagicalEntity.h"
using namespace std;

class Spellblade: public Warrior, public MagicalEntity{
   
    public:
    //constructor
    Spellblade(string name,int health,int power,int armor,int mana,int spell);
    //member functions
    int calculateHybridDamage();

};

#endif