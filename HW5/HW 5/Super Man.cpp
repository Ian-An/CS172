//
//  Super Man.cpp
//  HW 5
//
//  Created by AnYi on 5/29/16.
//  Copyright © 2016 Yi An. All rights reserved.
//

#include "Super Man.h"



Super_Man::Super_Man()
{
    health_=35;
    name_="Super Man";
    defense_mode=false;
    
}
string Super_Man::GetName() const
{
    return name_;
}
string Super_Man::GetDescription() const
{
    return "I am Superman to save the world!";
}

void Super_Man::BasicAttack( enemy* enemy)
{
    defense_mode=false;
    enemy->DoDamage(2);
}
string Super_Man::BasicName() const
{
    return "Punch!";
}

void Super_Man::SuperStrike(enemy* enemy)
{
    defense_mode=false;
    enemy->DoDamage(3);
}
string Super_Man::StrikeName() const
{
    return " Laser from my eyes";
}

void Super_Man::DefenseAttack(enemy* enemy)
{
    defense_mode=true;
}
string Super_Man::DefenseName() const
{
    return " Take off the glasses";
}

void Super_Man::DoDamage(int d)
{
    if(defense_mode==true)
        health_=health_-(d/3);
    else
        health_=health_-d;
}
int Super_Man::GetHealth() const
{
    return health_;
}
