#include <iostream>
#include <string>
#include <cstdlib>
#include <random>
#include <ctime>
using namespace std;
#include "header.h"

int main()
{
    srand(time(NULL));
    cout << "TEST MONEY CLASS \n";
    // 1. Declare a money object my_money. Default constructor should be called
    // 2. Declare a money object spare_money with $20.75. Specific constructor should be called.
    // 3. Add to my_money the amount $80.50.
    // 4. Display the amount in my_money and in spare_money. Make sure you output the name of the object. 
    // 5. Add spare_money amount to my_money. 
    // 6. Display the amount in my_money. Make sure you output the name of the object.
    
    Money test_money(101, 25);
    // uncomment line below: 
    // cout << "TEST ADD " << (my_money.isEqual(test_money):"PASSED ": "NOT PASSED" << endl;
    // 7. Subtract from my_money the amount $5.50 (95.75)
    // 6. Display the amount in my_money. Make sure you output the name of the object. 

    Money test_sub_money(95,75);
    // uncomment line below: 
    // cout << "TEST SUBTRACT " << (my_money.isEqual(test_sub_money):"PASSED ": "NOT PASSED" << endl;

    /*   // uncomment code below
    cout << "test_money = "; 
    test_money.display();
    cout << "my_money = ";
    my_money.display();
    */ 

    // 7. Add code to check if test_money object has more money than my_money
    // Call function isBigger. Make sure your display shows clearly the answer 
    // not just 0 or 1. 

}