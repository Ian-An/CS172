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
    
    
    /**inspector*/
    string GetLastName();
    string GetFirstName();
    string GetUserID();
    string GetURL();
    string GetPicture();
    string GetDescription();
    
    
    void text_output(ostream & text);
    void html_output(ostream & html);
    
    
private:
    string lastname_;
    string firstname_;
    string userid_;
    string url_;
    string picture_;
    string description_;
    
    
    
    
    
    
    
    
    

    
    
    
};

ostream & operator<<(ostream & out, const Socialites a);
#endif