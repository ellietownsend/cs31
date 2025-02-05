//
//  grade.cpp
//  bookCH2
//
//  Created by Ellie Townsend on 2/4/25.
//

#include "grade.h"
#include <iostream>
using namespace std;

void calcGrade(){
    double gpa = 0;
    enum class Grades{S = 10, A = 9, B = 8, C = 7, D = 6, E = 5, F = 0};
    
    cout << "Please input the number of classes you are taking: " << endl;
    int classes;
    cin >> classes;
    
    for(int i = 1; i <= classes; i++){
        cout << "What grade did you recieve in class " << i << "?" << endl;
        char grade;
        cin >> grade;

        switch(grade){ // switch statements have curly braces
            case 'S':
                gpa += 10;
                break;
            case 'A':
                gpa += 9;
                break;
            case 'B':
                gpa += 8;
                break;
            case 'C':
                gpa += 7;
                break;
            case 'D':
                gpa += 6;
                break;
            case 'E':
                gpa += 5;
                break;
            case 'F':
                gpa += 0;
                break;
            default:
                cout << "Please enter a valid grade: " << endl;
        }
    }
    gpa /= classes;
    cout << "Your current gpa is: " << gpa << endl;
}
