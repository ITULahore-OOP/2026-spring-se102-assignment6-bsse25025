#include "Knight.h"
 
Knight::Knight(string name,int health,int power,int armor,int bonus):Warrior(name,health,power,armor){
    //initializing attributes
    chargeBonus=bonus;
}


int Knight::getChargeBonus(){
    return chargeBonus; //returning charge Bonus
}


int Knight::calculateBurstDamage(){
    int power=getPower(); //getting power 
    int burstDamage;
    burstDamage=power+chargeBonus;  //calculationg burst damage 
    return burstDamage;
}
