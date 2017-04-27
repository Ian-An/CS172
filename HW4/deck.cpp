//
//  deck.cpp
//  HW4
//
//  Created by AnYi on 5/15/16.
//  Copyright © 2016 Yi An. All rights reserved.
//

#include "deck.h"
#include<vector>
#include <cstdlib>
#include<iterator>
#include<algorithm>


using namespace std;






bool deck::GameOver()
{
    if(card_.size()==0)
        return true;
    else
        return false;
}


void deck::SetCard(vector<card> card)
{
    card_=card;
}

void deck::deck_shuffle()
{
    
      random_shuffle (card_.begin(), card_.end() );
        
    
}

vector<card> deck::Get_Card()
{
    return card_;
}

deck deck::Get_Deck(int n)
{
    deck a;// Create a new vector for returning
    vector<card> c_new;
    for(int i=0;i<n;i++)
    { c_new.push_back(card_[i]);
    }
    a.SetCard(c_new);
    card_.erase(card_.begin(),card_.begin()+n);// Delete the cards taken from the deck
    return a;
}



int deck::Get_Number()
{
    return int(card_.size());
    
}
void deck::Add_New_Card(card c)
{
    card_.push_back(c);
}



card deck::Get_One_Card()
{
    card temp;
    temp=card_[0];
    card_.erase(card_.begin());
    return temp;
}














