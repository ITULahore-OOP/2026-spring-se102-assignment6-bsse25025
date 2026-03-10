#include <iostream>
#include "Guild.h"
#include "Hero.h"
#include "Knight.h"
#include "MagicalEntity.h"
#include "Spellblade.h"
#include "Warrior.h"
using namespace std;

int main()
{
    //Hero
    Hero h1 ("Minahil",700,100);
    Hero h2 ("Amna",500,200);

    cout<<"\nCombined Health of Minahil and Amna: "<<(h1+h2)<<endl;
    if(h1>h2){
    cout<<"Minahil is more powerfull! "<<endl; }
    else 
    cout<<"Amna is more powerful! "<<endl;

    //Knight
    Knight K("Ahmad", 200, 50, 10, 75);
    cout<<"Ahmad burst damage: "<<K.calculateBurstDamage()<<endl;

    //Spellblade
    Spellblade S("Ali",400,200,55,100,20);
    cout<<"Ali Hybrid Damage: "<<S.calculateHybridDamage()<<endl;

    //Warrior
    Warrior W("Sara", 300, 40, 30);
    cout<<"Sara effective health: " <<W.calculateEffectiveHealth()<<endl;

    //Guild
    Guild MysticGuild("Mystic");

    MysticGuild += &h1;
    MysticGuild += &h2;
    MysticGuild += &W;
    MysticGuild += &K;
    MysticGuild += &S;

    cout<<"\n-----Status-----"<<endl;
    MysticGuild.displayGuildStats();
    cout<<endl;

    cout<<"-----Guild Roster---- "<<endl;
    cout<<MysticGuild;

    return 0;
}