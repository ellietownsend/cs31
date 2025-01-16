//
//  pointers.cpp
//  cs32
//
//  Created by Ellie Townsend on 1/15/25.
//

#include <stdio.h>
// Adresses and pointers
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
// Adresses:
int main(){
    int age = 18;
    bool old = true;
    
    cout << &age; // prints the ADDRESS of the variable
    cout << &old; // prints the ADDRESS of the variable
    
    bool silly = true;
    bool *p; // making a pointer, we know p WILL point at a boolean variable
    // The "*" should be next to the variable, because we could have "bool *a, *b, *c;" making each a pointer
    p = &silly; // giving the pointer something to point to
}
/* Address Questions*/
// What is an address? Where that variable is being stored (location in memory)
// How do we get a varibale's address? to get the address of the varibale use the "&" before the variable
// Is an address a variable? an address of the variable is the location of the variable in memory...

/*Pointer Questions*/
// Is a pointer like p a variable? Yes pointers are variables, we create them like we would a variable, and they hold other variables, and they ever have their own addresses (where they are located in memory)
// What types of values can pointers hold? They are a special type of variable, because you can only store addresses of varibales in pointers
// Do pointers have types? Yes, like regular variables, when we declare them we must put a pointer. The type of the pointer is they same type it points at.

/*Derefrencing Pointers*/
void set(int *px){ // it was given an ADDRESS "&x" so maybe something like "8329", and the "*px" is simply making a pointer to that address
    *px = 5; // "Hey go to what that pointer points to a give it the value 5
}
void setter(){
    int x = 1; // Creating a varible called "x" that holds the letter one
    set(&x); // giving it the ADDRESS TO X , so it may be something like "48948"
    cout<< x;
}

void ex(){
    int nums[3] = {10,20,30}; // Every array has an address in memory
    cout << nums; // Ususally we use an & to get an address, but here we get the address in memory, simply because we didnt inlcude [], strictly an array
}

void ex2(){
    int num[3] = {10,20,30};
    int *ptr = num;
    cout << &num[2] << endl; // returns the ADDRESS to the second element
    cout << num + 2 << endl; // adavance foward by two elements within the array NOT INTS
    cout << ptr + 2 << endl; // adavance foward by two elements within the array NOT INTS
    cout << num[2] << endl; // return the second element in the array
    cout << *(num + 2) <<endl; // when we have a "*" were not getting a address back, second element in array
    cout << *(ptr + 2) << endl; // the VALUE of the pointer variable, the varibale is an array so we go down two elements
    cout << ptr[2] << endl;  // "Give me the value thats two slots down from where the pointer is at"
    
}
/*Star Operator*/
// The * operator takes the adress stores in a pointer varibale and uses it to read/write to the value stored at that location memory.

/*Pointer vs Refrences*/
//

// Extra notes: When tracing through a program, start with global variables, then main
//              When we have a *p, we already return a varible, not an address
//              We should initizlies a pointer, because then it gets a random address if not, if we want to initlaize it to 0 we should put "int *p= nullptr;"

// Pointer Arthmetic and Arrays:
// void printdata(int *array) = void printdata(int array[]) , when an array is given to a function it is really a pointer

class Circ{
public:
    Circ(float x, float y, float rad){ // constructor
        //...
    }
    void getArea(){
        //...
    }
};
void printInfo(Circ *ptr){
    cout << "The area is";
    cout << ptr->getArea(); // since we gave the function a pointer from a class, we made, to get acess to the member functions from that class we use a pointer
}







