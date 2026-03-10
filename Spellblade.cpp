#include "Spellblade.h"

Spellblade::Spellblade(string name,int health,int power,int armor,int mana,int spell):Warrior(name,health,power,armor)
            ,MagicalEntity(mana,spell){} //constructor
   
int Spellblade::calculateHybridDamage(){
    int basePower=getPower(); //getting power 
    int spellPower=getSpellPower(); //getting spell power 
    int hybridDamage= basePower+spellPower; //calculating hybrid damage 
    return hybridDamage;
}