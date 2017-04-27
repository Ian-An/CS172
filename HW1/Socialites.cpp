//
//  Socialites.cpp
//  HW#1
//
//  Created by AnYi on 4/12/16.
//  Copyright © 2016 Yi An. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include "Socialites.h"

using namespace std;

/**default constructor*/

Socialites::Socialites()
{
    
    lastname_="";
    firstname_="";
    userid_="";
    url_="";
    picture_="";
    description_="";
}

/** inspector*/

string Socialites::GetLastName()
{
    return lastname_;
}

string Socialites::GetFirstName()
{
    return firstname_;
}

string Socialites::GetUserID()
{
    return userid_;
}

string Socialites::GetURL()
{
    return url_;
}

string Socialites::GetPicture()
{
    return picture_;
}

string Socialites::GetDescription()
{
    return description_;
}

/** Mutator  */

void Socialites::SetLastName(string LastName)
{
    lastname_ = LastName;
}

void Socialites::SetFirstName(string FirstName)
{
    firstname_ = FirstName;
}


void Socialites::SetUserID(string UserID )
{
    userid_=UserID;
}
void Socialites::SetURL( string URL)
{
    url_=URL;
}
void Socialites::SetPicture( string Picture)
{
    picture_ =Picture;
}
void Socialites::SetDescription( string Description)
{
    description_= Description;
}





void Socialites::text_output(ostream &text)
{
    text<<"First Name: "<<firstname_<<endl;
    text<<"Last Name:"<<lastname_<<endl;
    text<<"UserID: "<<userid_<<endl;
    text<<"picture: "<<picture_<<endl;
    text<<"url: "<<url_<<endl;
    text<<"description: "<<description_<<endl;
    
}

void Socialites::html_output(ostream & html)
{

    
    html<<"<html>"<<endl;
    html<<"<head>"<<endl;
    html<<"<title>"<<firstname_<<" "<<lastname_<<"'s Socialite Page"<<"</title>"<<endl;
    html<<"</head>"<<endl;
    html<<"<body>"<<endl;
    html<<"<img SRC=\"" << picture_ << "\" ALIGN=\"RIGHT\" width=\"500\" height=\"500\"/>"<<endl;
    html<< "<h1>" << userid_ << "</h1>" <<endl;
    html<< "<h2>" << firstname_<< " " << lastname_ << "</h2>" <<endl;
    html<< "<hr />" <<endl;
    html<< "<p>" << firstname_<< " " << lastname_ << " wants to share ";
    html<< "<a HREF='" << url_ << "'" << " TARGET=_blank>" << description_ << "</a>";
    html<< " with you." << "</p>" <<endl;
    html<< url_<<endl;
    html<< "</body>" <<endl;
    html<< "</html>"<<endl;
    
    
}
