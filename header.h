// THIS IS THE HEADER FILE 
// Contains all function declarations
#include <string>
using namespace std;

#ifndef RECURSION
#define RECURSION

string to_lower(string str);
string replace(string str, char old, char repl);
string strip(string str, string replace = " ");
bool is_sorted(int array[], int size, string type = "up");
void display_array(int array[], int);

#endif
