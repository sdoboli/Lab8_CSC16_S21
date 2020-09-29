// WRITE ALL FUNCTION DEFINITIONS HERE
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
#include "header.h"


/*
    bool unique_char(string)
    Input: a string of characters
    Output: true if all characters in the input string are unique
    Example: "abcd"  -> returns true, "baca" -> returns false = 'a' appears twice
    Processing: add pseudo-code
    Preconditions: none
    Postconditions: string is not modified
*/
bool unique_char(string str)
{
    // add your code
    return true;
}

/*
    bool is_permutation(string, string)
    Input: 2 strings
    Output: true if the 2 input strings are a permutation of each other, 
            false otherwise
    Example: "abcda", "dabca" --> returns true,  
             "abcd", "abc" --> returns false
    Processing: add pseudo-code
    Preconditions: none
    Postconditions: none
*/
bool is_permutation(string s1, string s2)
{
    // add your code
    return true;
}
/*
    string add_one(string)
    Input: a string of digits
    Output: a string of digits
    Processing: add one to the input string and 
                return new string with the result
    Examples: input = "4321", output = "4322"
              input = "999", output = "1000"
              input = "abc" output = "" // empty string
              input = ""   output = "" // empty string
    Preconditions: the string starts with a non-zero digit, and it has no 
                    leading or trailing spaces
                    string contains only digits
    Postconditions: none
*/
string add_one(string str)
{
    // add your code
    return "test";
}

/*
    bool one_edit(string, string)
    Input: two strings
    Output: true if the two strings are one edit away from each other
    Processing: add pseudo-code
    Examples:
        "same", "some"      -> true   replace a character ('a' with 'o')
		"sme",   some"      -> true   insert a character ('o')
		"tooday", "today"   -> true   delete a character ('o')
		"too", "together"   -> false  not one edit away
    Preconditions: none
    Postconditions: none
*/
bool one_edit(string s1, string s2)
{
    // add your code
    return true;
}
