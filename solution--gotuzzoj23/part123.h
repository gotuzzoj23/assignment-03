//
//  part1.h
//  assig3
//
//  Created by Jose Gotuzzo, Robert Gonzalez, Griffin Yee on 3/12/16.
//  Copyright © 2016 Jose Gotuzzo. All rights reserved.
//

#ifndef part1_h
#define part1_h
#include <iostream>
#include <string>
#include "part123.h"
using std::cout;
using std::cin;
using std::string;
using std:: endl;

void division();

void ranking();

template <class T>
T abs_value(T x){
    if (x >= 0)
        return x;
    else
        return -x;
}

#endif /* part1_h */
