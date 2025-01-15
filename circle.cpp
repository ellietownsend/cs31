//
//  circle.cpp
//  catchUp
//
//  Created by Ellie Townsend on 1/13/25.
//

#include <stdio.h>
#include <iostream> // need this for strings to work!
#include <cstring>
#include <cmath>
using namespace std;

// Public data members and member functions should go first
// consturtors do not need a return type

class circle{
public:
    circle(double x, double y, double r);
    bool scale(double factor);
    void draw() const; // When declaring we should think about whether the function changes variables or not
    double radius() const;
private:
    // class invariant: m_r > 0, we want this to be private because we want to preserve the class invariant, have a greater control over the values
    double m_x;
    double m_r;
    double m_y;
};
double area(const circle x); // need to find out

circle::circle(double x, double y, double r)
: m_x(x), m_y(y), m_r(r) // member initialization, only for constructors
{ // Constuctor
    if (r <= 0){
        cout << "Cannot create a circle with radius" << r << endl;
        exit(1);
    }
    m_x = x;
    m_y = y;
    m_r = r;
}
bool circle::scale(double factor){
    if (factor <= 0)
        return false;
    m_r *= factor;
    return true;
}
void circle::draw() const{// not going to change any varibales within this member function
    
}
double circle::radius() const{ // When we want to give acess to a varible that is private
    return m_r;
}
// this documentation: "double area(circle x)" means passed by a value, a copy is being created and being held by a variable called x, but some things can be expensive to copy
// this documentaion: "double area(circle& x)" means we are passing by pointer/reference, we have created a pointer (x) that points to the circle object we gave it in main. no copying is being done
double area(const circle& x){
    const double pi = 4 * atan(1.0);
    return pi * x.radius() * x.radius();
}

int main(){
    circle c(8, -3, 3.7);
    c.scale(2);
    c.draw();
    double z;
    cin >> z;
}




