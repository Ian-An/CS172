//
//  enemy.hpp
//  HW 5
//
//  Created by AnYi on 5/29/16.
//  Copyright © 2016 Yi An. All rights reserved.
//

#ifndef enemy_hpp
#define enemy_hpp

#include <stdio.h>
#include <string>

using namespace std;

class enemy
{
public:
    enemy();
    // Get the name and the description of the enemy.
    virtual string GetName() const=0;
    virtual string GetDescription() const=0;
    
    //  Damage Mangement.
    virtual void BasicAttack(enemy* enemy) =0;
    virtual string BasicName() const=0;
    
    virtual void SuperStrike(enemy* enemy) =0;
    virtual string StrikeName() const=0;
    
    virtual void DefenseAttack(enemy* enemy) =0;
    virtual string DefenseName() const =0;
    
    // Mange the Health.
    
    virtual void DoDamage(int d)=0;
    virtual int GetHealth() const=0;

};














#endif /* enemy_hpp */
