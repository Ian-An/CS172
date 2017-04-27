//
//  Spider Man.hpp
//  HW 5
//
//  Created by AnYi on 5/29/16.
//  Copyright © 2016 Yi An. All rights reserved.
//

#ifndef Spider_Man_hpp
#define Spider_Man_hpp

#include <stdio.h>
#include "enemy.h"
#include <string>


class Spider_Man :public enemy
{
private:
    string name_;
    int health_;
    bool defense_mode;
    
public:
    Spider_Man();
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
    
    
    
};










#endif /* Spider_Man_hpp */
