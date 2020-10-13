#include "Dice.h"

// compile this using:
// g++ -o testDice testDice.cpp Dice.cpp

int main()
{
 	srand(time(NULL)); // initializes the seed of the random number generator
 	
 	// declare a new Dice object called d1
 	//  ClassName ObjectName;
 	// Default constructor is called because d1 has
 	// no specific instructions (parameters) on how 
 	// its data members should be initialized
    cout << "---------------------------------" << endl;
	cout << "Test default constructor"<< endl;
 	Dice d1;
 	
    cout << "---------------------------------" << endl;
 	cout << "Test specific constructor"<< endl;
 	// declare a new dice object called d2 with a face set 
 	// to 4
	// Specific constructor is called
 	Dice d2(4);
 	
    cout << "---------------------------------" << endl;
 	cout << "Test setFace()" << endl;
 	// set the face of d1 object to 5
 	// d1 has to call the function setFace 
 	// d1 = calling object
 	d1.setFace(5);
 	
    cout << "---------------------------------" << endl;
 	cout << "Test display() \n";
 	cout << "Data of d1 object ";
    d1.display();
 	cout << "Data of d2 object ";
 	d2.display();
 	
    cout << "---------------------------------" << endl;
 	cout <<  "Test roll() function \n";
 	// roll each dice
 	d1.roll();
    cout << "d1 ";
    d1.display();
 	d2.roll();
    cout << "d2 ";
    d2.display();  
 	
    cout << "---------------------------------" << endl;
 	cout << "Test getFace() function\n";
 	// display the sum of the two dice objects
 	cout << "d1 ";
    d1.display();
    cout << "d2 ";
 	d2.display();
 	
    cout << "---------------------------------" << endl;
 	cout << "Sum of d1 and d2 faces is " << 
	 	 d1.getFace() + d2.getFace() << endl;
	
	cout << "---------------------------------" << endl;
	cout << "Test d1.isGreater(d2)" << endl;
	if (d1.isGreater(d2))
		cout << "d1 > d2" << endl;
	else
		cout << "d1 <= d2" << endl;

	cout << "d1 ";
	d1.display();
	cout << "d2 ";
	d2.display();
    

} // end of main()


