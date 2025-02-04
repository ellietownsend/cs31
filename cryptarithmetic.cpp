//
//  cryptarithmetic.cpp
//  bookCH2
//
//  Created by Ellie Townsend on 2/4/25.
//

#include "cryptarithmetic.h"
#include <iostream>
using namespace std;

void findInts(){
    for (int t = 0; t <=9; t++){
        for (int o = 0; o <=9; o++){
            for (int g = 0; g <=9; g++){
                for (int d = 0; d <=9; d++){
                    if((8 * o) + (t * 4) == (g + (2 * o) + d) && t != o && t != g && t != d &&
                       o != g && o != d &&
                       g != d){
                        cout << "\nt is equal to: "<< t << "\no is equal to: " << o << "\ng is equal to:  " << g << "\nd is equal to: " << d << endl;
                    }
                }
            }
        }
    }
}

