//
//  test.cpp
//  HW111
//
//  Created by AnYi on 4/12/16.
//  Copyright © 2016 Yi An. All rights reserved.
//

#include <stdio.h>
#include "Socialite.h"
#include <iostream>
#include <string>
#include <fstream>



Socialites alpha;


ifstream a;
string line;

int main()
{
    //open the file
    
    a.open("Setup.txt");
    
    // Text File input.
    while(getline(a,line)){
    alpha.clear();//to delete the cliques from the previous socilite.
    
    alpha.SetUserID(line);
    getline(a,line);
    alpha.SetFirstName(line);
    getline(a,line);
    alpha.SetLastName(line);
    getline(a,line);
    alpha.SetPicture(line);
    getline(a,line);
    alpha.SetURL(line);
    getline(a,line);
    alpha.SetDescription(line);
    /*detect "++++"*/
    getline(a,line);
    while(line!="++++")
    
    {
        alpha.AddCliques(line);
        getline(a,line);
        
        
    }
        /*Delete the string "++++" in cliques*/
//    for(int i=0;i<alpha.GetCliquesNumber();i++)
//    { if(alpha.GetCliquesName(i)=="++++")
//               alpha.Erase(i);
//    }
//     
        
    
    ofstream h_out(alpha.GetUserID()+".html");//create html file
        
    /*text and html output*/
    alpha.text_output();
    alpha.html_output(h_out);
    }
    
    
    a.close();
 
    return 0;
    

}

