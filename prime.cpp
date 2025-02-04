//
//  prime.cpp
//  bookCH2
//
//  Created by Ellie Townsend on 2/4/25.
//

#include "prime.h"
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

void findPrime(){
    // Outerloop is to keep us moving from 3-100
    cout << "Prime numbers: " << endl;
    for(int i = 3; i <= 100; i++){
        bool isPrime = true;
        // innerloop is to check prime-ness of each number
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){  // Only print i if it is prime
            cout << i << ", ";
        }
    }
}



