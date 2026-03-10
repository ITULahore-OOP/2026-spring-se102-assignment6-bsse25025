#ifndef HERO_H
#define HERO_H
#include <iostream>
#include <string>
using namespace std;

class Hero{
    string heroName;
    int health;
    int basePower;

    public:
    //constructor
    Hero(string name ,int health,int power);
    //destructor
    ~Hero();
    //getters
    string getName()const;
    int getHealth()const;
    int getPower()const;
    //member functions
    void takeDamage(int damage);
    bool operator>(const Hero &other)const;
    int operator+(const Hero &other)const;

};

#endif