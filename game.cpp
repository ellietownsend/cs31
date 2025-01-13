//
//  game.cpp
//  catchUp
//
//  Created by Ellie Townsend on 1/12/25 for CS31 with the purpose of creating a basic target object that can move left and right depending on the user
//
#include <stdio.h>
#include <iostream> // need this for strings to work!
#include <cstring>
using namespace std;

/* Key Takeaways */

// A data memeber is a varible, while a method is a member function

// PUBLIC data members/member functions come first because they are what the user can maniputlate.
/* How to do so: put "public:" before all public member functions/data */

// PRIVATE: data comes after public within the code
/* we implement private so we cant change in main, but we can still access these is member functions */

// CONSTRUCTOR:  autmatically called when we make a data type, we want to cerate this so the user does not have to automatically call a function to set up variables after making an object
/* How to do so: create Target(); and implement by Target::Target(), constructor has no return type */

// CONST: When you make a function, think about if it changes the variables within it, if it does not, consider making it "const"
/* How to do so: int position() const; , void report(const Target& x) , int Target::position() const */

// DECLERATION: we declare member function first within the class, then when we implemnt them later we attach them to the class using the :: operator.
/* How to do so: within the class: void replayHistory(); , outside the class: void Target::replayHistory(){ */


// The following comment represents a rule we would like to set that future readers of this program can look at:
// Invariant: history consists of only uppercase R's and L's, position = # of R's (right moves) moved by player - the amount of L's done by players
class Target{
    // data member, attributes, fields,
    public:
        Target();
        void init();
        bool move(char dir);
        void replayHistory();
        int position() const; // const member function will not modify the target
private:
    int pos;
    string history;
}; // After struct we must write a semicolin

Target::Target(){
    pos = 0; // the complier will automatically look into the class for a "pos" member and sets it
    this->history= "";
}
bool Target::move(char dir){
    switch(dir){
        case 'R':
        case 'r':
            pos++;
            break;
        case 'L':
        case 'l':
            pos--;
            break;// break gets us out of switch statement
        default:
            return false; // return gets us out of function entirely
    }
    this->history += toupper(dir); // to uppercase
    return true;
}
// How we can give access to a private variable
int Target::position() const {
    return pos;
}

void Target::replayHistory(){
    for (int k = 0; k != this->history.size(); k++) // stop when we reach the length of the history string
        cout << history.at(k) << endl; // each time we print out a letter from string
        
}
// We are not passing by value (which makes a copy) but by pointer
void report(const Target& x){
    cout << "There is a target position in" << x.position() << endl;
}

int main(){
    // we will not be able to talk about "pos" or "history", forcing them to call functions to edit things
    Target t;
    t.init(); // this code generates a pointer to a target object, which we can access by calling the keyword "this"
    
    t.move('R');
    t.move('R');
    t.move('L');
    
    Target t2;
    t2.init();
    t2.move('L');
    
}
