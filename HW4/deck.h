//
//  deck.hpp
//  HW4
//
//  Created by AnYi on 5/15/16.
//  Copyright © 2016 Yi An. All rights reserved.
//

#ifndef deck_hpp
#define deck_hpp


#include <stdio.h>
#include "card.h"
#include"vector"

class deck
{
public:
    void deck_shuffle();
    
    
    
    vector<card> Get_Card();
    deck Get_Deck(int n);
    int Get_Number();
    void Add_New_Card(card c);
    void SetCard(vector<card> card);
    card Get_One_Card();
    bool GameOver();
   
    
    
private:
    vector<card> card_;
    
    
};
















#endif /* deck_hpp */
