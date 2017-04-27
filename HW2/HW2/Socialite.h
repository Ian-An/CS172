//
//  Socialites.cpp
//  HW#1
//
//  Created by AnYi on 4/12/16.
//  Copyright © 2016 Yi An. All rights reserved.
//
# ifndef abc_h
# define abc_h

#include <stdio.h>
#include<string>
#include <iostream>
#include <vector>

using namespace std;

class Socialites

{
public:
    
    Socialites();//Constructor
    
    
    /**mutator*/
    void SetLastName(string LastName);
    void SetFirstName(string FirstName);
    void SetUserID(string UserID );
    void SetURL( string URL);
    void SetPicture( string Picture);
    void SetDescription( string Description);
    void SetCliquesNumber( int i);
    void SetCliquesName( string a,int i);
    void AddCliques( string a);
    void Erase(int i);
    void clear();
    
    
    /**inspector*/
    string GetLastName();
    string GetFirstName();
    string GetUserID();
    string GetURL();
    string GetPicture();
    string GetDescription();
    int GetCliquesNumber();
    string GetCliquesName(int i);
    
    
    
    void text_output();
    void html_output(ostream & html);
    
    
private:
    string lastname_;
    string firstname_;
    string userid_;
    string url_;
    string picture_;
    string description_;
    vector<string> cliques_;
    
    
    
    
    
    
    
    
    
    
    
    
};

ostream & operator<<(ostream & out, const Socialites a);
#endif