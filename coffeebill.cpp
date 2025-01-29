//
//  main.cpp
//  Project2
//
//  Created by Ellie Townsend on 1/29/25.
//

#include <iostream>
#include <cctype>
#include <string>
#include <iomanip>
using namespace std;


int main() {
    
    // Pricing scheme
    double total = 0;
    double r = 4.00;
    double d = 4.50;
    double extraItem = 1.95;
    
    
    string firstName;
    cout << "Customer's first name: ";
    cin >> firstName;
    if(firstName.empty() || !isupper(firstName[0])){
        cout << "The first name must start with an uppercase letter." << endl;
        return 1;
    }
    
    
    int numOfCups;
    cout << "Number of cups: ";
    cin >> numOfCups;
    if(numOfCups < 0){
        cout << "The number of cups must be positive" << endl;
        return 1;
    }
    
    char typeOfCoffee;
    cout << "Type of coffee (r=regular, d=decaf): ";
    cin >> typeOfCoffee;
    if(typeOfCoffee != 'r' && typeOfCoffee != 'd'){
        cout << "You must enter r or d. " << endl;
        return 1;
    }
    if(typeOfCoffee == 'd'){
        total = d * numOfCups;
    }
    else{
        total = r * numOfCups;
    }
    
    char extraItems;
    cout << "Any extra items? (y/n): ";
    cin >> extraItems;
    if(extraItems != 'y' && extraItems != 'n'){
        cout << "You must enter y or n." << endl;
        return 1;
    }
    if(extraItems == 'y'){
        total += extraItem;
    }
    else{
        // do nothing
    }
    
    double discount = total * .15;
    string day;
    cout << "Day of the week: ";
    cin >> day;
    if (day != "Monday" && day != "Tuesday" && day != "Wednesday" && day != "Thursday" && day != "Friday" && day != "Saturday" && day != "Sunday"){
        cout << "You must enter a valid day of the week." << endl;
        return 1;
    }
    if (day == "Wednesday"){
        total -= discount;
    }
    
    // Final output:
    cout << "---\n" << "The total charge for " << firstName << " is $" << fixed << setprecision(2) << total << endl;
    
    return 0;
}
