//
//  Characters.hpp
//  Test
//
//  Created by Elias Farhan on 14/12/16.
//  Copyright © 2016 Elias Farhan. All rights reserved.
//

#pragma on
//  #ifndef Characters_hpp
//#define Characters_hpp

#include <iostream>

class Character;

class Monster : public Character
{  
public:
    Monster(int,int,int,int);
    void takeDamage(int damage);
    void fight(Hero*);
    void death();
};

class Hero : public Character
{
public:
    Hero(int, int, int, int);
    void takeDamage(int damage);
    void fight(Monster*);
    void death();
};

class Character 
{
public:
    Character(int,int,int,int);
    void takeDamage(int damage);
    bool isAlive() = 0;
    virtual void death() = 0;
    int getHealth();
    int getDefense();
    int getAttack();

protected:
    int health;
    int attack;
    int defense;
    int strength;
};



//#endif /* Characters_hpp */
