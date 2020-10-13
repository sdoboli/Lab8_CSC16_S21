#include <iostream>
#include <cassert>
#include <cstdlib>
#include <ctime>
using namespace std;

// to avoid inclusion of multiple definitions of the 
// DICE class use the compiler commands below
#ifndef DICE
#define DICE

// declaration of class Dice
class Dice
{
  private: 
	
	int face; // can only take values between 1 and 6
  public: 
	
	// default constructor: initializes the face of a new Dice object to 1
	Dice(); 
	
    // specific constructor: initializes the face of a new Dice object to newFace 
	// Pre-condition: newFace is a valid number
	// call setFace function inside Dice(int newFace)
    Dice(int newFace); 
    
	// Sets face to the value in otherFace
	// Precondition: otherFace is valid 
	void setFace(int otherFace); 
	
	// Changes the value of face to a random value between 1 and 6
	void roll(); 
	
	// returns the face value of a Dice object
	int getFace() const;
	
	// displays the face value of a Dice object
	void display() const;

    bool isGreater(const Dice &other) const; // true if face calling object > face other

};

#endif
