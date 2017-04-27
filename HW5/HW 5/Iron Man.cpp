//
//  Iron Man.cpp
//  HW 5
//
//  Created by AnYi on 5/29/16.
//  Copyright © 2016 Yi An. All rights reserved.
//

#include "Iron Man.h"

Iron_Man::Iron_Man()
{
    health_=20;
    name_="Iron_Man";
    defense_mode=false;
    
}
string Iron_Man::GetName() const
{
    return name_;
}
string Iron_Man::GetDescription() const
{
    return "I am Tony Starks";
}

void Iron_Man::BasicAttack( enemy* enemy)
{
    defense_mode=false;
    enemy->DoDamage(2);
}
string Iron_Man::BasicName() const
{
    return "I am Charming";
}

void Iron_Man::SuperStrike(enemy* enemy)
{
    defense_mode=false;
    enemy->DoDamage(4);
}
string Iron_Man::StrikeName() const
{
    return " A group of Iron Man";
}

void Iron_Man::DefenseAttack(enemy* enemy)
{
    defense_mode=true;
}
string Iron_Man::DefenseName() const
{
    return " Get my Suit!";
}

void Iron_Man::DoDamage(int d)
{
    if(defense_mode==true)
        health_=health_-(d/2);
    else
        health_=health_-d;
}
int Iron_Man::GetHealth() const
{
    return health_;
}
