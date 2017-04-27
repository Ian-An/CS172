//
//  Cici.cpp
//  HW 5
//
//  Created by AnYi on 5/29/16.
//  Copyright © 2016 Yi An. All rights reserved.
//

#include "Cici.h"

Cici::Cici()
{
    health_=40;
    name_="Cici";
    defense_mode=false;
    
}
string Cici::GetName() const
{
    return name_;
}
string Cici::GetDescription() const
{
    return "I am the cutest girl in the world!";
}

void Cici::BasicAttack( enemy* enemy)
{
    defense_mode=false;
    enemy->DoDamage(5);
}
string Cici::BasicName() const
{
    return "Pack the boxes";
}

void Cici::SuperStrike(enemy* enemy)
{
    defense_mode=false;
    enemy->DoDamage(6);
}
string  Cici::StrikeName() const
{
    return " If you don't come to meet me, you are dead!";
}

void Cici::DefenseAttack(enemy* enemy)
{
    defense_mode=true;
}
string Cici::DefenseName() const
{
    return " I will go back to Ardmore!";
}

void Cici::DoDamage(int d)
{
    if(defense_mode==true)
        health_=health_-(d*2);
    else
        health_=health_-d;
}
int Cici::GetHealth() const
{
    return health_;
}