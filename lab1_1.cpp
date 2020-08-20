/*
   Lab 1: Assignment 1

*/
#include <iostream>
#include <typeinfo>  // get the type of a variable or expression 
                     // i = integer, d = double 
using namespace std;

int main()
{
    string answer; // answer is a string object (different than primitive data types)
                   // stores a string of characters: answer = "this is a string"
    // Starting code
    // 1. declare and initialize a variable of type int with value 5
    int vi = 5 ;
    // print out the type of i 
    cout << "The type of vi is " << typeid(vi).name() << endl;
    // print out the size of the variable in bytes
    cout << "The size of vi in bytes is " << sizeof(vi) << " bytes" << endl;

    //1. Add code to print out the value, the type and size of the expression vi/2.0

    
    int v_int_res = vi/2.0;
    //2. Add code to print out the value, the type and the size of v_int_res


    cout << "\n Q1: Explain any differences you see in the output of vi/2.0 and v_int_res?" 
        << endl;
    cin >> answer;
    cout << "Q1 answer  " << answer << endl;

    double v_double_res = vi/2.0;
    // 3.  Add code to print out the value, the type and the size of v_double_res
    
    cout << "\n Q2: Explain any differences you see in the output of v_int_res and v_double_res?" << endl;
    cin >> answer;
    cout << "Q2 answer  " << answer << endl;

    //1. Add code to print out the value, the type and size of the expression vi/2



    v_int_res = vi/2;
    //2. Add code to print out the value, the type and the size of v_int_res


    cout << "\n Q3: Explain any differences you see in the output of vi/2 and v_int_res?" 
        << endl;
    cin >> answer;
    cout << "Q3 answer  " << answer << endl;

    v_double_res = vi/2;
    // 3.  Add code to print out the value, the type and the size of v_double_res
    
    cout << "\n Q4: Explain any differences you see in the output of v_int_res and v_double_res?" << endl;
    cin >> answer;
    cout << "Q4 answer  " << answer << endl;

}
