#include <iostream>
#include <string>
#include <cstring>
using namespace std;

bool is_palindrome(string s);

int main()
{
     //Example C style strings
    char name_c[] = "John Doe";
    for (int i = 0; i < 9; i++)
        cout << i << ' ' << name_c[i] << ' ' << (int)name_c[i] << ' ' << (void *)&name_c[i] << endl;
    cout << endl;
    
    cout << "Length of the string " << strlen(name_c) << endl;
    
    cout << "Compare strings (how not to) " << (name_c == "John Doe") << endl;
    // it only compares memory addresses not strings 

    cout << "Compare strings (how to) = 0 means strings are equal " << strncmp(name_c,"John Doe", 10) << endl;
    
    /* cannot copy a string into another this way
    char name_copy[9] = name_c;
    for (int i = 0; i < 9; i++)
        cout << i << ' ' << name_copy[i] << ' ' << (int)name_copy[i] << ' ' << &name_copy[i] << endl;
    cout << endl;
    */
   // copy strings this way
   char name_copy[10];
   strncpy(name_copy,name_c,10);
   for (int i = 0; i < 9; i++)
        cout << i << ' ' << name_copy[i] << ' ' << (int)name_copy[i] << ' ' << (void *)&name_copy[i] << endl;
    cout << endl;

    // C++ string class
    // declare strings: name1, start_message, end_message = string objects
    string name1 = "John Smith", 
           start_message("Hello"),
           end_message = "Good bye";
    
    cout << "name1 = " << name1 << endl;
    cout << "start_message = " << start_message << endl;
    cout << "end_message = " << end_message << endl;
    // functions on strings
    // length string_object.length() -> length() is a method in the string class
    cout << "The length of name1 is: " << name1.length() << endl;

    // compare strings
    string input;
    cout << "Enter a string: ";
    getline(cin,input); // reads a whole line from the input including spaces
    while (input != "q")
    {
        if (name1 == input)
            cout << "same strings = "<< name1 << "=="<< input << endl;
        else if (name1 > input)
            cout << "name1 > input " << name1 << " > "<< input << endl;
        else
            cout << "name1 < input " << name1 << " < "<< input << endl;;
        cout << "Enter another string: ";
        getline(cin, input);
    }
    // modify strings
    // append a string to another
    string say_hello = name1 + ' ' + start_message + '!';
    cout << say_hello << endl;

    string say_goodbye = name1 + ' ' + end_message + '!';
    cout << say_goodbye << endl;

    // access individual items in a string
    for (int i = 0; i < name1.length(); i++)
        cout << "letter " << i+1 << " is " << name1[i] << endl;
    // name1.at(i) = if i is out of range it returns an error

    // copy a string
    string name1_copy = name1; 
    cout << "copy of name1 = " << name1_copy << endl;
    
    //call function is_palindrome(string)
    string test[] = {"abba", "aba", "abca", "abab"};
    cout << "\n\nTEST PALINDROME\n";
    for (int i = 0; i < 4; i++)
    {
        if (is_palindrome(test[i]))
            cout << test[i] << "\tis a palindrome" << endl;
        else
            cout << test[i] << "\tis not a palindrome" << endl;
    }
}

/*
     Checks if a string is a palindrome.
     A palindrome is a string that contains the same sequence of characters from right to left and from left to right
     Examples: abba is a palindrome, abcba is a palindrome, abca is not a palindrome
     Input: a string
     Output: bool true if string is a palindrome, false otherwise
     Processing: check pairs of characters from the beginning and end of the string, stops when they 
     are not equal or when the middle of the string has been passed. 
*/
bool is_palindrome(string s)
{
    int i = 0;
    while (i <= s.length()/2 && s[i] == s[s.length() - i - 1])
        i++;
    
    if (i > s.length()/2)
        return true;
    else
        return false;
}
