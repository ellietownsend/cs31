//
//  truckCapacity.cpp
//  bookCH1
//
//  Created by Ellie Townsend on 2/2/25.
//

#include "truckCapacity.h"
#include <iostream>
using namespace std;
#include <cmath>


void holdCapacity(){
    cout << "Please enter the trucks weight in metric tons: " << endl;
    double truckWeight;
    cin >> truckWeight;
    
    cout << "Please enter the number of boxes carrying: " << endl;
    int boxes;
    cin >> boxes;
    
    cout << "Please enter the average weight of a box: " << endl;
    double avgWeight;
    cin >> avgWeight;
    
    double totalWeight = boxes * avgWeight;
    
    if(totalWeight >= truckWeight){
        double overWeight = totalWeight / truckWeight;
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        cout << "Truck has been over loaded. Please remove: " << ceil(overWeight) << " boxes." << endl;
    }
    else{
        double underWeight = truckWeight / totalWeight;
        cout << "Truck is fine to go" << endl;
    }
    
    
}
