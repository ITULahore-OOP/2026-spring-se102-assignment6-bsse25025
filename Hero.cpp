#include "Hero.h"


Hero::Hero(string name,int health,int power){
    //initializing attributes
    heroName=name;
    this->health=health;
    basePower=power;
}

Hero::~Hero(){} //destructor

string Hero::getName()const{
    return heroName; //returning hero name
}

int Hero::getHealth()const{
    return health; //returning health
}

int Hero::getPower()const{
    return basePower; //returning base power
}

void Hero::takeDamage(int damage){
    health-=damage; //subtracting damage from health
    if(health<0){ //health can't be negative 
        health=0;
    }
}

bool Hero::operator>(const Hero &other)const{
    if(basePower>other.basePower){ 
        return true;
    }
    else
    return false;
}

int Hero::operator+(const Hero &other)const{
    return health+other.health; //adding both healths
}
