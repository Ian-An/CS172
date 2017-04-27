//
//  card.hpp
//  HW4
//
//  Created by AnYi on 5/15/16.
//  Copyright © 2016 Yi An. All rights reserved.
//

#ifndef card_hpp
#define card_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

enum Rank {TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,JACK,QUEEN,KING,ACE};

enum Suit {CLUBS,SPADES,DIAMONDS,HEARTS};


class card
{
     public:
     card();// Default Construcot
     //Get the Rank and the Suit
     Rank GetRank();
     void SetRank(Rank r);
     Suit GetSuit();
     void SetSuit(Suit s);
     private:
     Rank rank_;
     Suit suit_;
    
    
    
    
};
// overload <<
ostream& operator<<(ostream&os, card&player);
// overload ==
bool operator==(card&player1, card&player2);
// overload >
bool operator>(card&player1, card&player2);
// overload <
bool operator<(card&player1, card&player2);

bool operator!=(card&player1, card&player2);









#endif /* card_hpp */
