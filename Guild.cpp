#include "Guild.h"
 
Guild::Guild(string guildname){
    //initializing attributes
    guildName=guildname;
    memberCount=0;
    for(int i=0;i<15;i++){
        roster[i]=nullptr;
    }
}
  
Guild::~Guild(){ //destructor 
     for(int i=0;i<memberCount;i++){
        delete roster[i]; //deleting memeory 
    }
    cout<<"The guild "<< guildName<<" has been disbanded!\n";
}
   
int Guild::calculateTotalGuildPower(){
    int totalPower=0;
    for(int i=0;i <memberCount; i++){ 
        totalPower+=roster[i]->getPower(); //calculating total power
    }
    return totalPower;
}


void Guild::displayGuildStats(){
    cout<<"Guild Name: "<<guildName<<endl;
    cout<<"Total Members: "<<memberCount<<"/15"<<endl;
    cout<<"Total Guild Power: "<<calculateTotalGuildPower()<<endl;
}

void Guild::operator+=(Hero*newHero){
    if(memberCount<15){
        roster[memberCount]= new Hero(*newHero); //adding new hero 
        memberCount++; //increasing member count 
    }
    else if(memberCount>=15){
        cout<<"Guild is at full capacity!"<<endl;
    }
}

ostream& operator<<(ostream& os,const Guild& g){
    os<<"Guild: "<< g.guildName<<endl;
    os<<"Members: "<<g.memberCount<<endl;
    for(int i=0;i<g.memberCount;i++){
        os<<"- "<<g.roster[i]->getName() <<" (Power: " <<g.roster[i]->getPower()<< ")" <<endl; //displayong name and power 
    }
    return os;
}



 