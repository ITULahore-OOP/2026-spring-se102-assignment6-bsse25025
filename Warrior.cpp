#include "Warrior.h"

Warrior::Warrior(string name,int health,int power,int armor):Hero(name,health,power){
    //initializing attributes
    armorRating=armor;
}

int Warrior::getArmor(){
    return armorRating; //returning armor rating
}

int Warrior::calculateEffectiveHealth(){
    int heroHealth=getHealth();  //getting health
    int effectiveHealth;
    effectiveHealth=heroHealth+(armorRating*2); //calcu;ating effective health 
    return effectiveHealth;
}