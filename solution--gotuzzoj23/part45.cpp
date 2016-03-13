//
//  part4.cpp
//  assig3
//
//  Created by Jose Gotuzzo, Robert Gonzalez, Griffin Yee on 3/12/16.
//  Copyright © 2016 Jose Gotuzzo. All rights reserved.
//

#include "part45.h"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std:: endl;


int absolute(int a){
    return -a;
}

/*
int gcd(int a, int b){
    if (a < 0)      //base case
        a = abs(a);
    if (b < 0)
        b = abs(b);
    if (a == 0 || b == 0){
        if (a==0)
            return b;
        if (b==0)
            return a;
    }
    if (a>b)          //recursive case
        return gcd(a - b, b);
    
    else return gcd(a, b - a);
}  
*/

/*
int fib(int n) {
    if (n == 2)     //base case
        return 1;
    else if (n == 1) //base case
        return 1;
    else            //recursive case
        return fib(n - 1) + fib(n - 2);
}
*/

/*
int pow(int a, int b){
    if (b==1)     //base case
        return a;
    else  //recursive case
       return a * pow(a, b-1);
}
*/

/*
int tri(int n)
{
    if (n == 1)   //base case
        return 1;
    else
        return (n)+tri(n-1); // recursive case
}
//triangle display//
void display(int x, int j)
{
    int z= 1;
    for (int i=0; i<x; i++)
    {
        for (int j=x; j>i; j--)
        {
            cout<<" "; // displaying space here
        }
        cout<<"*";   // displaying asterisk here
        
        if (i!=0)
        {
            for (int k=1; k<=z; k++)
            {
                cout<<" ";
            }
            cout<<"*";
            z+=2;
        }
        cout<<endl;  // endl is for new line
    }
    for (int i=0; i<(j+2)/2; i++)
    {
        cout<<"* ";
    }
    cout<<endl;
}
*/

/*
int gcd_iter(int a, int b){
    int c;
    if (a < 0)
        a = abs(a);
    if (b < 0)
        b = abs(b);
    while(b!=0){
        c= a%b;
        a =b;
        b= c;
    }
    return a;
}
*/

/*
int fib_iter(int n){
    int x =0 ;
    int y = 1;
    int z = 1;
    if (n == 1 || n == 2)
        x = 1;
    for (int i = 2; i <= n-1; i++){
            x = y + z;
            z = y;
            y = x;
    }
    return x;
}
*/

/*
int pow_iter(int a, int b){
    if (b == 0)
        a = 1;
    for (int i = 1; i < b; i++){
        a+=a;
    }
    return a;
}
*/






