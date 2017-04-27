//
//  Jack Hero.hpp
//  HW 5
//
//  Created by AnYi on 5/29/16.
//  Copyright © 2016 Yi An. All rights reserved.
//

#ifndef Joseph_hpp
#define Joseph_hpp

#include <stdio.h>



#include <stdio.h>
#include "enemy.h"


class Jack:public enemy
{
private:
    string name_;
    int health_;
    bool defense_mode;
    int fireball_;
    int potion_;
    
public:
    Jack();
    string GetName() const;
    string GetDescription() const;
    
    void BasicAttack( enemy* enemy);
    string BasicName() const;
    
    void SuperStrike(enemy* enemy);
    string StrikeName() const;
    
    void DefenseAttack(enemy* enemy);
    string DefenseName() const;
    
    void DoDamage(int d);
    int GetHealth() const;
    
    void SetName(string s);
    void UsePotion();
    
    // Take the Command from the User to do different attack
    void order(string s,enemy* enemy);
    
};





#endif /* Jack_hpp */
