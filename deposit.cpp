//
//  deposit.cpp
//  bookCH2
//
//  Created by Ellie Townsend on 2/4/25.
//

#include "deposit.h"
#include <iostream>
using namespace std;

void monthCount(){
    cout << "Please enter the initial depost: " << endl;
    double deposit;
    cin >> deposit;
    
    cout << "Please enter the interest provided by the bank in decimals: " << endl;
    double interest;
    cin >> interest;
    
    cout << "Please enter the amount withdrawn every month: " << endl;
    double withdrawn;
    cin >> withdrawn;
    
    int months = 0;
    double moneyInAccount = deposit;
    
    while (moneyInAccount >= withdrawn){
        if((moneyInAccount*interest) > withdrawn){
            cout << "You will always have enough money, the interest earned is greater than the amount spent monthly." << endl;
            break;
        }
        moneyInAccount -= withdrawn;
        moneyInAccount += (moneyInAccount * interest);
        months += 1;
    }
    cout << "The amount of months the money will last is: " << months << endl;
}
