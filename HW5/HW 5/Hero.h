//
//  Hero.hpp
//  HW 5
//
//  Created by AnYi on 5/29/16.
//  Copyright © 2016 Yi An. All rights reserved.
//

#ifndef Hero_h
#define Hero_h

#include <stdio.h>

#include <string>

#include "enemy.h"
class Hero: public enemy
{
private:
    string name_;
    int health_;
    bool defense_mode;
    int potion_;
    int fireball_;
    
    
    
public:
    Hero();
    string GetName() const;
    string GetDescription() const;
    
    void BasicAttack( enemy* enemy);
    string BasicName() const;
    
    void SuperStrike(enemy* enemy);
    string StrikeName();
    
    void DefenseAttack(enemy* enemy);
    string DefenseName() const;
    
    void DoDamage(int d);
    int GetHealth() const;
    
    //Set the hero's name
    void SetName(string n);
    void UsePotion();

    // Take the Command from the User to do different attack
    void order(string s,enemy* enemy);
    
    
};







#endif /* Hero_hpp */
