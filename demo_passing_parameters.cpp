/*  
    Understand how are parameters passed
*/

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

// function declarations (function prototypes)
bool multiple(int, int);
int power_of_2(int);
int power_of_2_r(int &);

int main()
{

    string answer;

    int v_int1 = 20;
    int v_int2 = 10;
    bool is_multiple = multiple(v_int1,v_int2);
    cout << v_int1 << " is " << (is_multiple? " ":"not ") << " multiple of " 
        << v_int2 << endl;
    
   is_multiple = multiple(v_int2,v_int1);
    cout << v_int2 << " is " << (is_multiple? " ":"not ") << " multiple of " 
        << v_int1 << endl;

    multiple(v_int1,0);
    cout << "Q1: what is the role of assert in the function definition \n of multiple ? " << endl;
    answer = ""; // write your answer
    cout << "Q1 answer: " << answer << endl;

    // For Q2 and Q3: comment the line above: multiple(v_int1,0); 

    cout << "Before power_of_2 v_int1 =  " << v_int1 << endl;
    int v_pow2 = power_of_2(v_int1);
    cout << "After power_of_2 v_int1 =  " << v_int1 << endl;
    cout << "Power of 2 of " << v_int1 << " is " << v_pow2 << endl; 

    cout << "Q2: Explain the fact that v_int1 has the same value \n";
    cout << "before and after the function call of power_of_2" << endl;
    answer = ""; // write your answer
    cout << "Q2 answer: " << answer << endl;

    cout << "Before power_of_2_r v_int1 = " << v_int1 << endl;
    v_pow2 = power_of_2_r(v_int1);
    cout << "After power_of_2_r v_int1 =  " << v_int1 << endl;
    cout << "Power of 2 of " << v_int1 << " is " << v_pow2 << endl; 

    cout << "Q3: Explain why v_int1 does not have the same value \n";
    cout << "before and after the function call of power_of_2_r" << endl;
    answer = ""; // write your answer
    cout << "Q3 answer: " << answer << endl;
}

// multiple(int mul, int div)
// Purpose: returns true if first paramter is a multiple of the second parameter
// Inputs: two integers greater than 0
// Return: true if mul is a multiple of div, false otherwise
// Preconditions: mul, div greater than 0
bool multiple(int mul, int div)
{
    // check precondition
    assert(mul > 0 && div > 0); // assert is a function that evaluates the boolean
                                // condition in the expression and if false, generates
                                // an error and stops the program. If true, continues
    if (mul % div == 0)
        return true;
    else
        return false;
}

// int power_of_2(int n)
// Purpose: returns the power of 2 of n
// Inputs: an integer value
// Return: the power of 2 value
// Preconditions: none
int power_of_2(int n)
{
    n = n*n;
    return n;
}

// int power_of_2(int &n)
// Purpose: compute the power of 2 of n
// Inputs: an integer
// Return: the power of 2 value
// Preconditions: none
int power_of_2_r(int &n)
{
    n = n*n;
    return n;
}

 
