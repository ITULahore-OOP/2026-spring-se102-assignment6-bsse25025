#include "MagicalEntity.h"

MagicalEntity::MagicalEntity(int mana,int spell){
    //initialzing attributes 
    manaPool= mana;
    spellPower= spell;
}


int MagicalEntity::getMana()const{
    return manaPool; //returning mana Pool
}


int MagicalEntity::getSpellPower()const{
    return spellPower; //returning spell Power
}

