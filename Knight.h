#ifndef KNIGHT_H
#define KNIGHT_H
#include <iostream>
#include "Warrior.h"
#include <string>
using namespace std;

class Knight: public Warrior{
    int chargeBonus;

    public:
    //constructor
    Knight(string name,int health,int power,int armor,int bonus);
    //getters
    int getChargeBonus();
    //member functions 
    int calculateBurstDamage();

};

#endif