/*
   Lab 1: Assignment 2
    characters
*/
#include <iostream>
#include <typeinfo>  // get the type of a variable or expression 
                     // c = character 
using namespace std;

int main()
{
    string answer; // answer is a string object (different than primitive data types)
                   // stores a string of characters: answer = "this is a string"
    // Starting code
    // 1. declare and initialize a variable of type int with value 5
    char v_char = 'a' ; //use single quotes for characters, double quotes for strings
    // print out the type of v_char
    cout << "The type of v_char is " << typeid(v_char).name() << endl;
    // print out the size of the variable in bytes
    cout << "The size of v_char in bytes is " << sizeof(v_char) << " bytes" << endl;


    //1.  Add code to initialize v_char to 'A'

    // 2. Run the code and observe the difference in the output of the next two 
    // for loops
    for (int i = 0; i < 26; i++)
        cout << (char) (v_char + i) << ' ';
    cout << endl;

    for (int i = 0; i < 26; i++)
        cout << v_char + i << ' ';
    cout << endl;

    cout << "\nQ1 What is the difference between the outputs of these two for loops?" << endl;
    cin >> answer;
    cout << "Q1 answer " << answer << endl;

    // 3. Add code to initialize v_char to 'a'

    // 4. Add a for loop to display all lower case letters of the alphabet
    // 5. Add a for loop to display the ASCII codes of the lower case letters of the alphabet

    // 6. Change the value of v_char to '0'
        
    // 7. Add a for loop to display all digits as characters.
        
    // 8. Add a for loop to display the ASCII codes of all digits

    cout << "\nQ2 What is the difference between '1' and 1?" << endl;
    cin >> answer;
    cout << "Q2 answer " << answer << endl;

    string test = "tE89A_0!$5";
    cout << "\tChar upper lower1 is_lower2 digit alpha is_special" << endl;
    for (char const &c: test) // for each character c in the string test only C11 and higher
    {
        cout <<'\t' << c << '\t';
        // 9. Add code to write a boolean condition that evaluates to true if c 
        // is an upper case letter. DO NOT USE ASCII CODES IN YOUR EXPRESSION. 
        // You can use characters
        bool is_upper = ;
        cout << is_upper << '\t';
        // 10. Add code to initialize is_lower to true if c is a lower case letter, 
        // false otherwise
        //  DO NOT USE ASCII CODES IN YOUR EXPRESSION. You can use characters.
        bool is_lower = ;
         cout << is_lower << '\t';
        // 12. Add code to initialize is_lower with the negation of is_upper. 
        // DO NOT USE ASCII CODE OR CHARACTERS. YOUR EXPRESSION MUST USE ONLY
        // is_upper and logic operators
        is_lower = ;
        cout << is_lower << '\t';
        // 12. Initialize is_digit with a logic expression that is true if v_char is a digit
        //  false otherwise. DO NOT USE ASCII CODES. You can use characters
        bool is_digit = ;
        cout << is_digit << '\t';

        // 13. Initialie is_alpha with a logic expression that is true if v_char is a letter
        // use only the bool variables declared befor and logic operators
        bool is_alpha = ;
        cout << is_alpha << '\t';
        // 14. Initialize is_special with a boolean expression that is true if v_char is a 
        // special character 
        // use only the bool variables declared befor and logic operators
        bool is_special = ;
        cout << is_special << '\t' << endl;

    }
}
