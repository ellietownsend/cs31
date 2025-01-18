//
//  struts.cpp
//  catchUp
//
//  Created by Ellie Townsend on 1/11/25.
//

#include <stdio.h>
#include <iostream> // need this for strings to work!
#include <cstring>
using namespace std;
// All elements in an array have to be the same
// Problem: We want to put multiple different types in an array
// Creating a new structure (class and struct are the same concept in c++):

// If we declare a struct inside a funtion, it will only be known there, we will most likley want to use it outside of funtions
struct Employee{
    // What are the componets of an employee, "Heres what it means to be an employee"
    // Fields/ members/ attributes of the structure
    string name;
    double salary;
    int age;
}; // NEED SEMICOLOIN, there can often be lots of errors with a missing semi colin
int main(){
    int x; // Some garbage value because we didnt specifically assign it something
    Employee e1;
    Employee e2; // each of type Employee
    // How we assign attributes: (using the dot operator)
    e1.name = "Fred";
    e1.salary = 50000;
    e1.age = 61;
    // We first specifiy what employee were talking about
    e2.name = "Ellie";
    e2.salary = 509098;
    e2.age = 47;
    
    e2.age++;
    cout << "Enter a name:";
    getline(cin, e2.name);
    
    Employee company[100];
    company[2].name = "Ricky";
    
    for (int k = 0; k != company[2].name.size(); k++){
        cout << company[2].name.at(k) << endl;
    }
    
    int nEmployees = 0;
    // When could copying (passing by value) be bad, when we want to edit the original Ricky object celebrateBirthday(company[2]);
    
}
// When we pass by reference, when we call the funtion, it does not create a whole new copy, its just another name. We pass by refernce by writing a "&" before the name, and after they type.
// What does const do? It guarentees we will not change the emplyee object
// Passing by value, which makes a copy: void f(int b); This can not be good when we have a huge object to copy
void printPaycheck(const Employee& e){
    // if we tried to change e, ie. e.salary *= 1.10, it will not complile!
    cout << "Pay to the order of " << e.name << " the amount of $" << e.salary/12 << endl;
    
}
// What does this mean: "->" it goes after a pointer ie. ep-> and leads us to a field/member/attribute we want to look at ie. ep->name
// Pointer approach:







