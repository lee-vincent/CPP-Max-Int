//
//  main.cpp
//  MaxIntegerProgram
//
//  Created by Vincent Lee on 1/28/15.
//  Copyright (c) 2015 10k Bulbs. All rights reserved.
//
/*____________________________________
 | This program finds the maximum
 | allowed integer on your operating
 | system and prints it to the
 | console
 |___________________________________
 */

#include <iostream>

int FindMaxInt();

int main() {
    
    std::cout << FindMaxInt() << std::endl;
    return 0;
}

int FindMaxInt() {
    int maxInt = 1;
    while(maxInt > 0) {
        maxInt++;
    }
    maxInt--;
    return maxInt;
}
