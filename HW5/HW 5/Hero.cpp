//
//  Hero.cpp
//  HW 5
//
//  Created by AnYi on 5/29/16.
//  Copyright © 2016 Yi An. All rights reserved.
//

#include  "Hero.h"
#include  <stdio.h>
#include  <iostream>
#include <string>



void Hero::SetName(string n)
{
    name_=n;
}



void Hero::order(string s,enemy* enemy)
{
    if(s=="fireball")
    {
        SuperStrike(enemy);
    }
    if(s=="attack")
    {
        BasicAttack(enemy);
    }
    // Can change it into a int function to return 0 to represent exit and return 1 to represent other situation.
    if(s=="exit")// exception
    {
        
    }
    else
    {
        string a;
        cout<<"Invalid Command! Please reset the command."<<endl;
        getline(cin,a);
        order(a,enemy);
        
    }
}
void Hero::UsePotion()
{
    potion_-=1;
    health_=health_+10;
}


Hero::Hero()
{
    health_=150;
    name_="";
    defense_mode=false;
    potion_=6;
    fireball_=10;
    
}


string Hero::GetName() const
{
    return name_;
}
string Hero::GetDescription() const
{
    return "I am a hero to save the world!";
}

void Hero::BasicAttack( enemy* enemy)
{
    defense_mode=false;
    enemy->DoDamage(3);
}
string Hero::BasicName() const
{
    return "Sword!";
}

void Hero::SuperStrike(enemy* enemy)
{
    defense_mode=false;
    enemy->DoDamage(5);
}
string Hero::StrikeName()
{
    fireball_-=1;
    return " FireBall!";
    
}

void Hero::DefenseAttack(enemy* enemy)
{
    defense_mode=true;
}
string Hero::DefenseName() const
{
    return " I will use my shield!";
}

void Hero::DoDamage(int d)
{
    if(defense_mode==true)
        health_=health_-(d/2);
    else
        health_=health_-d;
}
int Hero::GetHealth() const
{
    return health_;
}
