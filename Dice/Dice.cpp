#include "Dice.h" // include the header file
	
// compile the Dice.cpp after you add each function
// g++ -c Dice.cpp
	
// default constructor: initializes the face of a new
// Dice object to 1
Dice::Dice()
{
  cout <<  "Default constructor " << endl;
  face = 1;	// not redeclaring the data member face	
}

// specific constructor: initializes the face of a new
// Dice object to newFace 
// Pre-condition: newFace is a valid number
// call setFace function inside Dice(int newFace)
Dice::Dice(int newFace)
{
    cout << "Specific constructor " << endl; 
   	setFace(newFace);    
}

// Sets face to the value in otherFace
// Pre-condition: otherFace is valid 
void Dice::setFace(int otherFace)
{
 	assert(otherFace >= 1 && otherFace <= 6);
	face = otherFace;  
}


// Changes the value of face to a random value between 1 and 6
void Dice::roll()
{
 	 face = rand()%6 +1; 
}
	
// returns the face value of a Dice object
int Dice::getFace() const
{
 	return face;
}
	
// displays the face value of a Dice object
// const = means that this function cannot change the data of the calling object
//         it is an accessor function 	
void Dice::display() const
{
 	 cout << "This dice has " << face << " on top" << endl; 
 }

/*
    bool Dice::isGreater(const Dice &other) const
    Purpose: compares two dice objects
    Input: a reference to a constant dice object called other
    Output: bool - true if calling dice object's face > other object's face
                 - false otherwise
    Preconditions/Postconditions = none
*/
bool Dice::isGreater(const Dice &other) const
{
	bool result;
	
	if ( face  >  other.face)
	    result = true;
	else
		result = false;
	return result;
} 
  
