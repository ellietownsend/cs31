//
//  tempature.cpp
//  bookCH2
//
//  Created by Ellie Townsend on 2/4/25.
//

#include "tempature.h"
#include <iostream>
using namespace std;

void celsiusToFahernheit(){
    int celsius = 100;
    int fahernheit = 0;
    
    while(celsius != fahernheit){
        celsius -= 1;
        fahernheit = (((9.0/5.0) * celsius) + 32);
    }
    cout << "Fahernheit is equal to celsius when celsius is " << celsius << " and fahernheit is equal to " << fahernheit << endl;
}
