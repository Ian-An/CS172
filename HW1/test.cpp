//
//  test.cpp
//  HW111
//
//  Created by AnYi on 4/12/16.
//  Copyright © 2016 Yi An. All rights reserved.
//

#include <stdio.h>
#include "Socialites.h"
#include <iostream>
#include <string>
#include <fstream>

string LastName;
string FirstName;
string UserID;
string URL;
string Picture;
string Description;

/** create html&txt files*/
ofstream h_out("president1.html");
ofstream t_out("president1.txt");

/** get values from users*/

void read()
{
    cout<<" Please enter the last name:";
    getline(cin,LastName);
    cout<<" Please enter the first name:";
    getline(cin,FirstName);
    cout<<" Please enter the userid:";
    getline(cin,UserID);
    cout<<" Please enter the URL:";
    getline(cin,URL);
    cout<<" Please enter the picture:";
    getline(cin,Picture);
    cout<< " Please enter the description:";
    getline(cin,Description);
    string remainder;
    getline(cin,remainder);
    
    
    
}


int main()
{
    Socialites alpha=Socialites();
    read();
    alpha.SetLastName(LastName);
    alpha.SetFirstName(FirstName);
    alpha.SetURL(URL);
    alpha.SetUserID(UserID);
    alpha.SetPicture(Picture);
    alpha.SetDescription(Description);
    
    alpha.text_output(t_out);
    alpha.html_output(h_out);
    
  
    
    
  
    
    
    
    
    
    
    
    
}












