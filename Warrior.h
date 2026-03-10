#ifndef WARRIOR_H
#define WARRIOR_H
#include <iostream>
#include <string>
#include "Hero.h"
using namespace std;

class Warrior: public Hero{
    int armorRating;

    public:
    //constructor
    Warrior(string name,int health,int power,int armor);
    //getter
    int getArmor();
    //member functions
    int calculateEffectiveHealth();
    
};


#endif