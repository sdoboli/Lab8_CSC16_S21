     
#include "Cards.h"
#include <iostream>
#include <string>
using namespace std;

string Card::ALL_SUITE[4] = {"hearts", "diamonds", "spade", "clubs"};

 // default constructor + specific constructor (default values)
Card::Card(int new_face, string new_suite)
{
    set_face(new_face);
    set_suite(new_suite);
}

/*
    Goal: copy constructor: create a new Card object as a 
          copy of an existing object
    Inputs: reference to a constant other card object
    Outputs: none
    Processing: 
    Preconditions: none
    Postconditions: new card has the same face and suite as other card
*/
Card::Card(const Card &other)
{
    suite = other.suite;
    face  = other.face;
}

// call set_face: card1.set_face(10) - card1 = calling object
void Card::set_face(int new_face)
{
    assert(new_face >=1 && new_face <= 14);
    face = new_face;  // changes the face of the calling object
}

void Card::set_suite(string new_suite)
{
    //check that new_suite is a valid suite (an item in ALL_SUITE);
    int ind_suite = 0;
    while (ind_suite < 4 && new_suite != ALL_SUITE[ind_suite])
        ind_suite++;
    if (ind_suite == 4)
    {
        cout << new_suite << " is not a valid suite " << endl;
        return;
    }
    suite = new_suite;
}

int Card:: get_face() const       // accessor
{
    return face;
}
string Card::get_suite() const  // accessor
{
    return suite;
}

string Card::display() const
{
    return "face ="+ to_string(face) + ", suite = " + suite;
}

// if (card1 == card2) -> card1.operator==(card2)
bool Card::operator==(const Card &other) // const Card &other = pass a reference to a constant object
{
    // face of the calling object
    // other.face // face of the other object (input parameter)  
    if (face == other.face && suite == other.suite)
        return true;
    else
        return false;
}
        
//Call: card1 = card2  -> card1.operator=(card2)
Card& Card::operator=(const Card &other) 
{
    face  =  other.face;
    suite =  other.suite;
    return *this;
}
 bool Card::operator>(const Card &other)
 {
    if (face > other.face)
        return true;
    else
        return false;
 }
