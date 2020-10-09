#include <string>
#include <iostream>
#include "header.h"
using namespace std;


/*
   int most_frequent(int array[], int size)
   Problem 1: write a function that returns the most frequent item in a sorted array. 
   If there are multiple values with highest frequency, return the smallest one.
   Examples:
        array = {3,5,5,9,10,10,10,12}   return value = 10 (the most frequent value)
        array = {3,5,6}                 return value = 3 (the smallest value)
    Inputs: array[] = a sorted array of integers,
            size = # of items in the array 
    Output: most frequent value
    Processing: Add your pseudo-code here


    Precondtions: array has at least one item 
*/
int most_frequent(int array[], int size)
{
    return 0;
}

/*
    int nr_vowels(string s)
    Problem 2: Write a RECURSIVE function that returns the number of times a character
    appears in a string
    Examples:   Inputs: str = "I love programming", c = ' '  -> return 2 (two spaces)
                Inputs: str = "I love programming", c= 'm'   -> return 2 (two 'm's)
    Inputs: str = the string, c = the character you are looking for
    Output: an integer value with the number of times c appears in str
    Processing steps: // add your pseudo-code here
        Base case:
        Recursive case:

*/
int count_char(string str, char c)
{
    return -1;
}

/*
    string compress(string str)
    Problem 3: Write a function that compresses a string of characters. If a 
    character is repeated for at least two times (eg. aabccc) it will 
    be replaced by character and the number of repetitions (a2bc3). 
    The function returns the compressed string if it is shorter than 
    the original string, otherwise it returns the same string.
    Examples: str = "aaabbccccd"  -> returns "a3b2c4d" 
              str = "abbcd"       -> returns "ab2cd"
    Input: str = a string
    Output: the compressed string
    Processing: Add your pseudo-code for the algorithm here 

*/
string compress(string str)
{
    return "";
}

/*
    int num_pairs(int array[], int sum)
    Problem 4: Write a function that finds all pairs of items in an array 
    whose sum is equal to a given number. The function returns the number 
    of such pairs.  

    Examples: array = {3,-2,1,0,5}, sum = 3  return = 2  (pairs = (3,0), (-2,5))
             array = {1, 5, 7, -1, 5} sum = 6, return = 3 (pairs (1,5), (7,-1), (1,5)
    Inputs: array, size and the sum
    Output: an integer = number of pairs of items in the array whose sum is equal 
            to sum
    Processing: // Add the steps of your algorithm here
    

    
*/
int num_pairs(int array[], int size, int sum)
{
    return 0;
}



void display_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << ' ' ;
    //cout << endl;
}