//
//  Bat Man.cpp
//  HW 5
//
//  Created by AnYi on 5/29/16.
//  Copyright © 2016 Yi An. All rights reserved.
//

#include "Bat Man.h"


Bat_Man::Bat_Man()
{
    health_=20;
    name_="Bat Man";
    defense_mode=false;
    
}
string Bat_Man::GetName() const
{
    return name_;
}
string Bat_Man::GetDescription() const
{
    return "The DarK Night is Coming!";
}

void Bat_Man::BasicAttack( enemy* enemy)
{
    defense_mode=false;
    enemy->DoDamage(2);
}
string Bat_Man::BasicName() const
{
    return "My supercar!";
}

void Bat_Man::SuperStrike(enemy* enemy)
{
    defense_mode=false;
    enemy->DoDamage(3);
}
string Bat_Man::StrikeName() const
{
    return " Let's go Bats!";
}

void Bat_Man::DefenseAttack(enemy* enemy)
{
    defense_mode=true;
}
string Bat_Man::DefenseName() const
{
    return " Let's go home!";
}

void Bat_Man::DoDamage(int d)
{
    if(defense_mode==true)
        health_=health_-(d/2);
    else
        health_=health_-d;
}
int Bat_Man::GetHealth() const
{
    return health_;
}