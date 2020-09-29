#include <iostream>
#include <string>
#include <cstring>
using namespace std;
#include "header.h"

int main()
{
    /* test bool unique_char(string str) */
    cout << "TEST 1: IS UNIQUE" << endl;
    const int SIZE_TEST = 4;
    string     s[] = {"abcde", "", "cd!  ", "ctanrfna"};
    bool results[] = {true, true, false, false};
    int correct    = 0; // count correct tests
    int correct_problems = 0;
    for(int i = 0; i < SIZE_TEST; i++)
    {
        if (unique_char(s[i]) == results[i])
        {
            correct++;
            cout << " \tCORRECT ";
        }
        else
            cout <<  "\tINCORRECT ";
       
        cout << "\tTEST " << i+1 << " \"" << s[i] << "\" has " << 
            (unique_char(s[i])? "unique ": "not unique ") << "characters" << endl;
    }
    cout << "Problem 1 - unique characters has passed " << correct  
    << " out of " << SIZE_TEST <<  " tests." << endl;

    if (correct == SIZE_TEST)
        correct_problems++;

    /* test bool is_permutation(string, string) */
    cout << "\n\nTEST 2: IS PERMUTATION "<< endl;
    string     s2[] = {"beadc", "", "ccd! ", "naraftnc"};
    bool results2[] = {true, true, false, true};
    correct   = 0;
    
    for(int i = 0; i < SIZE_TEST; i++)
    {
        if (is_permutation(s[i], s2[i]) == results2[i])
        {
            correct++;
            cout << "\tCORRECT ";
        }
        else
            cout << "\tINCORRECT ";

        cout << "\tTEST " << i+1 << " \"" << s[i] << "\"" <<
            (is_permutation(s[i], s2[i])? " is a ": " is not a ") 
            <<  " permutation of \"" << s2[i] << "\"" << endl;
       
    }
    cout << "Problem 2 - permutation has passed " << correct  
    << " out of " << SIZE_TEST <<  " tests." << endl;
    if (correct == SIZE_TEST)
        correct_problems++;
        
    /* test string add_one(string str) */
    cout << "\n\nTEST 3: ADD ONE "<< endl;
    string  num_in[] = {"1", "9", "1239", "", "abc", "999"};
    string num_out[] = {"2", "10", "1240","", "", "1000" };
    const int SIZE_TEST3 = 6;
    correct   = 0;
    
    for(int i = 0; i < SIZE_TEST3; i++)
    {
        if (add_one(num_in[i]) == num_out[i])
        {
            correct++;
            cout << "\tCORRECT ";
        }
        else
            cout << "\tINCORRECT ";

        cout << "\tTEST " << i+1 << " " << num_in[i] << "+1 = \t" <<
            add_one(num_in[i]) << endl;  
    }
    cout << "Problem 3 - add one has passed " << correct  
    << " out of " << SIZE_TEST3 <<  " tests." << endl;
    if (correct == SIZE_TEST3)
        correct_problems++;
        

    /* test bool one_edit(string s1, string s2) */
    cout << "\n\nTEST 4: ONE EDIT AWAY "<< endl;
    string  s_in[] = {"same", "same", "sme", "tooday", "too", "monday", "smae", ""};
    string s_out[] = {"some", "sme", "same","today", "together", "sunday", "same",""};
    bool results4[] = {true, true, true, true, false, false, false, true};
    const int SIZE_TEST4 = 8;
    correct   = 0;
    
    for(int i = 0; i < SIZE_TEST4; i++)
    {
        if (one_edit(s_in[i], s_out[i]) == results4[i] )
        {
            correct++;
            cout << "\tCORRECT ";
        }
        else
            cout << "\tINCORRECT ";
        
        cout << "\tTEST " << i+1 << " \"" << s_in[i] << "\"\t is " 
             << (one_edit(s_in[i], s_out[i])? "": "not ") << " one edit away from "
           <<"\"" << s_out[i] << "\"" << endl;
    }
    cout << "Problem 4 - add one has passed " << correct  
    << " out of " << SIZE_TEST4 <<  " tests." << endl;
    if (correct == SIZE_TEST4)
        correct_problems++;
    
    cout << "\n\n YOU PASSED " << correct_problems << " OUT OF 4 PROBLEMS\n";

    exit(correct_problems);
}
