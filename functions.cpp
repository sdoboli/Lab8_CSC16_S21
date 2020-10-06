// THIS IS THE HEADER FILE 
// Contains all function declarations
#include <string>
#include <cstdlib>
#include <cctype>    
#include <iostream>
using namespace std;
#include "header.h"


/*
    string to_lower(string s);
    Goal: Write a recursive function that converts a string into lower case letters. 
    The function returns the new string.

	Use cases: 
		to_lower("Today")      --> today
	
    You can use the tolower() function  in the standard library to convert one 
    character to upper case letter. Look for its usage in the C++ reference 
    page on-line:  int tolower ( int c );    
    input is a character, output is the lower case letter if input 
    is a lower case letter.
    Input: a string with any characters
    Output: a string with all upper case letters converted into lower
            case letters
    Processing: // ADD YOUR STEPS HERE
        
        Base case:
        Recursive case:

    Preconditions: None
    Postconditions: None
*/
string to_lower(string str)
{
    return ""; // replace this with your code
}

/*
    string replace(string s, char orig, char repl)
    Goal: 
    Write a recursive function to replace a character in a string with 
    another character. 
    DO NOT USE the replace() function in the string class - you will 
    receive no credit. Return the new string.

	Use case:  input: a string = "afternoon showers and thunderstorms"
			   replace 'o' with 'm'
			   output: return a string "afternmmn shmers and thunderstmrms" 
	Inputs: str = the string, orig = the character you want to replace in str
            repl = the character you want to replace old with 
    Output: a string with all occurences of orig replaced with repl

    Processing: // ADD YOUR STEPS HERE

	    Base case:	
		
	    Recursive case:	
    
    Preconditions: None
    Postconditins: None

*/
string replace(string str, char orig, char repl)
{
    return ""; // replace this with your code
}

/*
    string strip(string str, string not_remove = " ")
    Goal: Write a recursive function that removes from a string all 
    non-letters and non-digits characters except for the characters in not_remove. If not_remove string
    is not specified, then all but spaces are removed. 
    Use-cases: 
        Input: str = "@task!", not_remove = "",  Output: "task"
        Input: str = "%53.57", not_remove = "."  Output: "53.57"
        Input: str = "It's a #beautiful day!", not_remove = " '"-> 
               Output: "It's a beautiful day"
    Input:  str = the original string, 
            not_remove = non-alpha characters you don't want to remove from str
                   = default value for not_remove is the space = " "
    Output: the string str stripped of all non-letter and non-digits characters except for 
            the characters in the string not_remove.
    Processing: // ADD YOUR STEPS HERE

        // You can use the function find in the string class to check if a character
        // is in the string not_remove or not
        // If the function returns -1 it means the character was not found in the string
        // Check its usage: http://www.cplusplus.com/reference/string/string/find/
        size_t find(char c, size_t pos = 0) 

        // You can use the function isalnum() in the standard library to check
        // if a character is a letter - either upper or lower case or a digit
        // Check its usage at http://www.cplusplus.com/reference/cctype/isalnum/

        Base case:

        Recursive case:

    Preconditions: None
    Postconditions: None

*/ 
string strip(string str, string not_remove)
{
    return ""; // replace this with your code
}

/*
    bool is_sorted(int array[], int size, string type = "up")
    Goal: Write a recursive function that checks if an array is sorted or not
    Inputs: array, size and a string type. 
            If type = "up",  it checks if the array is sorted in increasing 
            order. 
            If type = "down", it checks if the array is sorted in decreasing 
            order. 
            The default value for type is "up"
    Processing: // ADD YOUR STEPS HERE
        
        Base case:

        Recursive case:

    Preconditions: None
    Postconditions: None
*/
bool is_sorted(int array[], int size, string type)
{
    return false; // replace this with your code
}


void display_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
       cout << array[i] << ' ';
}

/*
    Extra credit problems
    Write a recursive function that finds the maximum element from an array
    that is sorted, but rotated around an unknown element called pivot.

    For example the array can be: [4 5 6 0 1 2 3]. It is sorted, but rotated. 
    The maximum is 6. 
    
    Your algorithm must not look through all elements in the array. You should
    use an algorithm similar to binary search, but adapted to finding the maximum
*/

int max_special(int array[], int size)
{
    return 0;
}
/*
    Write a recursive function that displays all permutations of a string:
    If the string is abc: the function will display:
        abc
        acb
        bac
        bca
        cab
        cba
*/

void permutations(string s)
{
    cout << "Permutations" << endl;
}
