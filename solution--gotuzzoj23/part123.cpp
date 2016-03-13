//
//  part1.cpp
//  assig3
//
//  Created by Jose Gotuzzo, Robert Gonzalez, Griffin Yee on 3/12/16.
//  Copyright © 2016 Jose Gotuzzo. All rights reserved.
//

#include <iostream>
#include <string>
#include "part123.h"
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;


/*
void division(){
try {
    double num1, num2;
    cout << "Enter any two numbers that you would like to be divided."<< endl;
    cout << "first number: ";
    cin >> num1;
    cout << "second number: ";
    cin >> num2;
    
    if (num2 == 0)
        throw 0;
    
    cout << num1/num2 <<endl;
    
}catch(int x){
    
    cout << "Error: cannot divide by " << x<< endl;
}
*/

/*
void ranking(){
    
    int r;
    vector<int> Ranking(0);
    Ranking.push_back(750);
    Ranking.push_back(525);
    Ranking.push_back(450);
    Ranking.push_back(345);
    Ranking.push_back(250);

    cout << "Current Rankings: " << endl;
    for (int i = 0; i < Ranking.size(); i++)
        cout << i+1 << ". " << Ranking[i]<< endl;
    
    cout << "Please enter new score: ";
    cin >> r;
    while (r < 0){
        cout << "Score cannot be negative, please enter again: ";
        cin >> r;
    }
    for (int i = 0; i < Ranking.size(); i++){
       unsigned long int y= Ranking.size()-1;
        if (r > Ranking[i]){
            Ranking.insert(Ranking.begin() + i, r);
            break;
        }
        if  (r <= Ranking[y]){
             Ranking.insert(Ranking.end(),r);
            break;
        }
    }
    cout << "New Rankings: "<< endl;
    for (int i = 0; i < Ranking.size(); i++)
        cout << i+1 << ". " << Ranking[i]<< endl;
}
*/



    