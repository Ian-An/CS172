//
//  main.cpp
//  HW 5
//
//  Created by AnYi on 5/29/16.
//  Copyright © 2016 Yi An. All rights reserved.
//

#include <iostream>
#include "Iron Man.h"
#include "Bat Man.h"
#include "Cici.h"
#include "Super Man.h"
#include "Spider Man.h"
#include "enemy.h"
#include "Hero Jack.h"
#include <stdio.h>
#include <vector>

using namespace std;
int main()
{
    enemy* a=new Iron_Man;
    enemy* b=new Bat_Man;
    enemy* c=new Cici;
    enemy* d=new Super_Man;
    enemy* e=new Spider_Man;
    enemy* hero=new Jack;
    vector<enemy*> monsters;
    monsters={a,b,c,d,e};
    
    
    

    
    

}