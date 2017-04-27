//
//  main.cpp
//  HW4
//
//  Created by AnYi on 5/14/16.
//  Copyright © 2016 Yi An. All rights reserved.
//

#include <iostream>
#include <vector>
#include "card.h"
#include "deck.h"


using namespace std;





int main()

{
    
    vector<card> cards;
    vector<Rank> Ranks;
    vector<Suit> Suits;
    Ranks={TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,JACK,QUEEN,KING,ACE};
    Suits={CLUBS,SPADES,DIAMONDS,HEARTS};
    //Create the Deck of Cards
    for(int i=0;i<Ranks.size();i++)
        for(int j=0;j<Suits.size();j++)
        {
            card card;
            
            card.SetRank(Ranks[i]);
            card.SetSuit(Suits[j]);
            
            cards.push_back(card);
        }
    
    deck new_deck;
    // Set the cards to the deck
    new_deck.SetCard(cards);
    //Shuffle the Deck
    new_deck.deck_shuffle();
//    vector<card> temp3=new_deck.Get_Card();
//    for(int i=0;i<temp3.size();i++)
//    {
//        cout<<temp3[i]<<endl;
//        
//    }
//    cout<<temp3.size()<<endl;
    
    //Deal a half to each player;
    deck player1;
    deck player2;
    player1= new_deck.Get_Deck(26);
    player2= new_deck;
    
    vector<card> temp1;
    vector<card> temp2;
    temp1=player1.Get_Card();
    temp2=player2.Get_Card();
//    for(int i=0;i<26;i++)
//    {
//        cout<<temp2[i]<<endl;
//     
//    }



    while(!player1.GameOver()&&!player2.GameOver())
    {
   
        card a=player1.Get_One_Card();
        card b=player2.Get_One_Card();
        
        if(a>b)
          
        {   cout<<a<<" VS "<<b<<endl;
            player1.Add_New_Card(a);
            player1.Add_New_Card(b);
        }
        if(a<b)
        {
            cout<<a<<" VS "<<b<<endl;
            player2.Add_New_Card(a);
            player2.Add_New_Card(b);
        }
        
        if(a==b)// War Begins!
        {
         // war(a,b,player1,player2);
            // Determine the index of card vector when the comparison has been made.
            cout<<"war!!"<<a<<" VS "<<b<<endl;
            
               
             int i=0;
             card a_temp;
             card b_temp;
            


            do// Determine at what index the face_up cards of player 1 and player 2 are the same, otherwise just jump over the loop.
            {
                

                vector<card> temp1;
                vector<card> temp2;
                temp1=player1.Get_Card();
                temp2=player2.Get_Card();
                a_temp=temp1[2*i+1];
                b_temp=temp2[2*i+1];
                i++;
                            }while(a_temp==b_temp);
      
            card c=a_temp;
            card d=b_temp;
            cout<<c<<" VS "<<d<<endl;
            if(c>d)
            {
                
                for(int m=0;m<2*i;m++)
                
                    temp1.push_back(temp2[m]);
                temp2.erase(temp2.begin(),temp2.begin()+2*i);
                player1.SetCard(temp1);
                player2.SetCard(temp2);
                
                player1.Add_New_Card(a);
                player1.Add_New_Card(b);
            }
            else if(c<d)
            {
            
                for(int m=0;m<2*i;m++)
                
                    temp2.push_back(temp1[m]);
                temp1.erase(temp1.begin(),temp1.begin()+2*i);
                player1.SetCard(temp1);
                player2.SetCard(temp2);
                player2.Add_New_Card(a);
                player2.Add_New_Card(b);
            }
                
            
                
    
        }
        if(player1.Get_Number()==1)
        {cout<<" player 2 wins!"<<endl;
            break;
        }
        if(player2.Get_Number()==1)
        {   cout<<" player 1 wins!"<<endl;
        break;
            
        
        
   }
    if(player1.Get_Card().size()==0)
        cout<<" player 2 wins!"<<endl;
    
    if(player2.Get_Card().size()==0)
             cout<<" player 1 wins!"<<endl;
}


}