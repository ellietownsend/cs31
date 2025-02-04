//
//  bouyancy.cpp
//  bookCH2
//
//  Created by Ellie Townsend on 2/4/25.
//

#include "bouyancy.h"
#include <iostream>
#include <cmath>
using namespace std;

void sinkOrFloat(){
    cout << "Please enter the weight (in pounds) if your sphere object: " << endl;
    double sphereWeight;
    cin >> sphereWeight;
    
    cout << "Please enter the radius in feet: " << endl;
    double radius;
    cin >> radius;
    
    double volume = ( (4.0/3.0) * (M_PI * (pow(radius,3)))) ;
    
    double y = 62.4;
    
    double forceBouyancy = volume * y;

    if (forceBouyancy >= sphereWeight){
        cout << "Object will float"; << endl;
    }
    else{
        cout << "Object will sink"; << endl;
    }
    
    
}

