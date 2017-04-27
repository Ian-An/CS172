//
//  Spider Man.cpp
//  HW 5
//
//  Created by AnYi on 5/29/16.
//  Copyright © 2016 Yi An. All rights reserved.
//

#include "Spider Man.h"


Spider_Man::Spider_Man()
{
    health_=35;
    name_="Spider Man";
    defense_mode=false;
    
}
string Spider_Man::GetName() const
{
    return name_;
}
string Spider_Man::GetDescription() const
{
    return "I got biten by a spider a while ago!";
}

void Spider_Man::BasicAttack( enemy* enemy)
{
    defense_mode=false;
    enemy->DoDamage(3);
}
string Spider_Man::BasicName() const
{
    return "Punch!";
}

void Spider_Man::SuperStrike(enemy* enemy)
{
    defense_mode=false;
    enemy->DoDamage(4);
}
string Spider_Man::StrikeName() const
{
    return " Laser from my eyes";
}

void Spider_Man::DefenseAttack(enemy* enemy)
{
    defense_mode=true;
}
string Spider_Man::DefenseName() const
{
    return " Nets!";
}

void Spider_Man::DoDamage(int d)
{
    if(defense_mode==true)
        health_=health_-(d/2);
    else
        health_=health_-d;
}
int Spider_Man::GetHealth() const
{
    return health_;
}
