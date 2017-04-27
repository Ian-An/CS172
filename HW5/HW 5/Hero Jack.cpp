//
//  Joseph.cpp
//  HW 5
//
//  Created by AnYi on 5/29/16.
//  Copyright © 2016 Yi An. All rights reserved.
//

#include "Hero Jack.h"
#include  <iostream>

void Jack::SetName(string s)

{
    name_=s;
}



// Take the Command from the User to do different attack
void Jack::order(string s,enemy* enemy)
{
    ;
}


void Jack::UsePotion()
{
    
    health_=health_+8;
    potion_-=1;

}


Jack::Jack()
{
    health_=150;
    name_="";
    defense_mode=false;
    potion_=6;
    fireball_=10;
    
}
string Jack::GetName() const
{
    return name_;
}
string Jack::GetDescription() const
{
    return "I am the hero to save the world!";
}

void Jack::BasicAttack( enemy* enemy)
{
    defense_mode=false;
    enemy->DoDamage(3);
}
string Jack::BasicName() const
{
    return "Use the sword";
}

void Jack::SuperStrike(enemy* enemy)
{
    defense_mode=false;
    enemy->DoDamage(5);
    fireball_=fireball_-1;
}
string  Jack::StrikeName() const
{
    return " use the fireball!";
}

void Jack::DefenseAttack(enemy* enemy)
{
    defense_mode=true;
}
string Jack::DefenseName() const
{
    return " I will use my shield!";
}

void Jack::DoDamage(int d)
{
    if(defense_mode==true)
        health_=health_-(d*2);
    else
        health_=health_-d;
}
int Jack::GetHealth() const
{
    return health_;
}