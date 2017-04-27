//
//  tic.cpp
//  HW3
//
//  Created by AnYi on 5/3/16.
//  Copyright © 2016 Yi An. All rights reserved.
//

#include <stdio.h>
#include"tic.h"
#include"symbol.h"
#include<string>
#include<vector>
#include <iostream>

using namespace std;

// Create the board with BLANKS
tBoard::tBoard()
{
    for(int i=0;i<9;i++)
        box.push_back(BLANK);

    
}

// Make a legal move on the board
bool tBoard::move(symbol m, int x, int y)
{
    if(x>=0&&y>=0&&(3*x+y)<=8)
    {int i=3*x+y;
    if(box[i]==BLANK)
    
        box[i]=m;
        return true;
    }
  
    else
        return false;
       
    
}



bool tBoard::game_over()
{
    // Determine if all the boxeds are filled with X or O
    
    int count=0;// initialize a counter
    for(int i=0;i<9;i++)
        if(box[i]!=BLANK)
            count++;// count the number of the steps
    if(count==9)// to find out if the players have made steps or not
        return true;

   
    
    // Determine if X is the winner
    
    
    if(box[0]==X&&box[3]==X&&box[6]==X)
        return true;
    if(box[1]==X&&box[4]==X&&box[7]==X)
        return true;
    if(box[2]==X&&box[5]==X&&box[8]==X)
        return true;
    if(box[0]==X&&box[4]==X&&box[8]==X)
        return true;
    if(box[2]==X&&box[4]==X&&box[6]==X)
        return true;
    if(box[0]==X&&box[1]==X&&box[2]==X)
    return true;
    if(box[3]==X&&box[4]==X&&box[5]==X)
        return true;
    if(box[6]==X&&box[7]==X&&box[8]==X)
         return true;
    // Determine if O is the winner
    
    
    if(box[0]==O&&box[3]==O&&box[6]==O)
        return true;
    if(box[1]==O&&box[4]==O&&box[7]==O)
        return true;
    if(box[2]==O&&box[5]==O&&box[8]==O)
        return true;
    if(box[0]==O&&box[4]==O&&box[8]==O)
        return true;
    if(box[2]==O&&box[4]==O&&box[6]==O)
        return true;
    if(box[0]==O&&box[1]==O&&box[2]==O)
        return true;
    if(box[3]==O&&box[4]==O&&box[5]==O)
        return true;
    if(box[6]==O&&box[7]==O&&box[8]==O)
        return true;
    
    else
        return false;


}

// Find out the winner or a tie

symbol tBoard::winner()
{
    // Determine if X is the winner
    if(box[0]==X&&box[1]==X&&box[2]==X)
        return X;
    if(box[3]==X&&box[4]==X&&box[5]==X)
        return X;
    if(box[6]==X&&box[7]==X&&box[8]==X)
        return X;
    if(box[0]==X&&box[3]==X&&box[6]==X)
        return X;
    if(box[1]==X&&box[4]==X&&box[7]==X)
        return X;
    if(box[2]==X&&box[5]==X&&box[8]==X)
        return X;
    if(box[0]==X&&box[4]==X&&box[8]==X)
        return X;
    if(box[2]==X&&box[4]==X&&box[6]==X)
        return X;
    // Determine if O is the winner
    if(box[0]==O&&box[1]==O&&box[2]==O)
        return O;
    if(box[3]==O&&box[4]==O&&box[5]==O)
        return O;
    if(box[6]==O&&box[7]==O&&box[8]==O)
        return O;
    if(box[0]==O&&box[3]==O&&box[6]==O)
        return O;
    if(box[1]==O&&box[4]==O&&box[7]==O)
        return O;
    if(box[2]==O&&box[5]==O&&box[8]==O)
        return O;
    if(box[0]==O&&box[4]==O&&box[8]==O)
        return O;
    if(box[2]==O&&box[4]==O&&box[6]==O)
       return O;
    
    // Determine if it is a tie
    
    
    else
        return BLANK;
}



// To get the element in the box vector for printing purpose
symbol tBoard::GettheVector(int a) const
{
    return box[a];
    
}

// Update the table
ostream & operator<<(ostream& os,const tBoard&myTable)
{
    os<<" | 0 | 1 | 2 | "<<endl;
    os<<" +-----------+ "<<endl;
    os<<"0| "<<myTable.GettheVector(0)<<" | "<<myTable.GettheVector(1)<<" | "<<myTable.GettheVector(2)<<" |"<<endl;
    os<<" +-----------+ "<<endl;
    os<<"1| "<<myTable.GettheVector(3)<<" | "<<myTable.GettheVector(4)<<" | "<<myTable.GettheVector(5)<<" |"<<endl;
    os<<" +-----------+ "<<endl;
    os<<"2| "<<myTable.GettheVector(6)<<" | "<<myTable.GettheVector(7)<<" | "<<myTable.GettheVector(8)<<" |"<<endl;
    os<<" +-----------+ "<<endl;
    return os;
}