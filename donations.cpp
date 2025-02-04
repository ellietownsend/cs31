//
//  donations.cpp
//  bookCH2
//
//  Created by Ellie Townsend on 2/4/25.
//

#include "donations.h"
#include <iostream>
using namespace std;

void donation(){
    cout << "Please enter the amount it takes to sponser one childs education: " << endl;
    double sponser;
    cin >> sponser;
    
    cout << "Please enter the amount you would like to donate: " << endl;
    double moneyDonated;
    cin >> moneyDonated;
    
    int childrenSponsered = 0;
    
    do{
        moneyDonated -= sponser;
        childrenSponsered += 1;
    } while(moneyDonated >= sponser);
    cout << "Congrats! You have sponsered " << childrenSponsered<<  " children." << endl;
    if (moneyDonated > 0){
        cout << "You are $" << (sponser - moneyDonated) << " from sponsering one more child!" << endl;
    }
    
}
