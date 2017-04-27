//
//  card.cpp
//  HW4
//
//  Created by AnYi on 5/15/16.
//  Copyright © 2016 Yi An. All rights reserved.
//

#include "card.h"
#include<vector>

using namespace std;
card::card()

{
    Rank r;
    Suit s;
    rank_=r;
    suit_=s;
}

void card::SetRank(Rank r)
{
    rank_=r;
}

void card::SetSuit(Suit s)
{
    suit_=s;
}

Rank card::GetRank()
{
    return rank_;
}

Suit card::GetSuit()
{
    return suit_;
}


// overload <<
ostream& operator<<(ostream&os, card&CardGame)
{
    Rank r=CardGame.GetRank();
    Suit s=CardGame.GetSuit();
    switch(r)
    {
        case(TWO):
            os<<"2";
            break;
        case(THREE):
            os<<"3";
            break;
        case(FOUR):
            os<<"4";
            break;
        case(FIVE):
            os<<"5";
            break;
        case(SIX):
            os<<"6";
            break;
        case(SEVEN):
            os<<"7";
            break;
        case(EIGHT):
            os<<"8";
            break;
        case(NINE):
            os<<"9";
            break;
        case(TEN):
            os<<"10";
            break;
        case(JACK):
            os<<"J";
            break;
        case(QUEEN):
            os<<"Q";
            break;
        case(KING):
            os<<"K";
            break;
        case(ACE):
            os<<"A";
            break;
    
    }
    switch(s)
    {
        case(CLUBS):
            os<<"C";
            break;
        case(DIAMONDS):
            os<<"D";
            break;
        case(SPADES):
            os<<"S";
            break;
        case(HEARTS):
            os<<"H";
            
            
    }
 
    return os;
}
// overload ==
bool operator==(card&player1, card&player2)
{
    if(player1.GetRank()==player2.GetRank())
        return true;
    else
        return false;
}
// overload >
bool operator>(card&player1, card&player2)
{
    int a=-1;int b = -2;
    vector<Rank> r={TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,JACK,QUEEN,KING,ACE};
    for(int i=0;i<r.size();i++)
    if(player1.GetRank()==r[i])
             a=i;
    
    for(int j=0;j<r.size();j++)
    
        if(player2.GetRank()==r[j])
             b=j;

    if(a>b)
        return true;
    else
        return false;
    
    
    
}
bool operator!=(card&player1, card&player2)
{
    if(player1>player2||player2>player1)
        return true;
    else
        return false;
        
}
// overload <
bool operator<(card&player1, card&player2)
{
    int a=-1;int b = -2;
    vector<Rank> r={TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,JACK,QUEEN,KING,ACE};
    for(int i=0;i<r.size();i++)
        if(player1.GetRank()==r[i])
            a=i;
    
    for(int j=0;j<r.size();j++)
        
        if(player2.GetRank()==r[j])
            b=j;
    
    if(a<b)
        return true;
    else
        return false;
    
  
}