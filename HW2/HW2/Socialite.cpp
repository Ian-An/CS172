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
#include "Socialite.h"
#include <vector>

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



string Socialites::GetCliquesName(int i)
{
    if(0<=i<cliques_.size())
    return cliques_[i];
    else
        return 0;
}

int Socialites::GetCliquesNumber()
{
    return  (unsigned int)cliques_.size();
}



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
void Socialites::Erase(int i)
{
    
        cliques_.erase(cliques_.begin()+i);
    
}

void Socialites::clear()
{
    cliques_.clear();
}

void Socialites::AddCliques(string a)
{
    cliques_.push_back(a);
}

void Socialites::SetCliquesName(string a,int i)
{
  
    cliques_[i]=a;
    
}
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





void Socialites::text_output()
{
    cout<<"Socialite: "<<firstname_<<" "<<lastname_<<endl;
    cout<<"UserID: "<<userid_<<endl;
    cout<<"Picture: "<<picture_<<endl;
    cout<<"Shared Link: "<<url_<<endl;
    cout<<"Description: "<<description_<<endl;
    cout<<"Cliques:"<<endl;
    for(int i=0;i<cliques_.size();i++)
    cout<<cliques_[i]<<endl;//needs to improve
    
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
    html<<"<hr/>"<<endl;
    html<<"<p><i>"<<"Cliques:"<<"</i></p>";
    for(int i=0;i<cliques_.size();i++)
    html<<"<li>"<<cliques_[i]<<"</li>"<<endl;
    html<< "</body>" <<endl;
    html<< "</html>"<<endl;
    
    
}
