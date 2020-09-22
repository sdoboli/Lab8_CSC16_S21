// WRITE ALL FUNCTION DEFINITIONS HERE

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>
using namespace std;
#include "header.h"

/* ########################
    Function: max_array(int array[], int size))
    Purpose: return the maximum value from an integer array
    Inputs: array and its size
    Output: integer max value
############################## */
 int max_array(int array[], int size)
 {
	// declare and initialize an integer to hold the max value
	int max = array[0];
	
	// FOR each element in the array 
	for (int i = 1; i < size; i++)
	{
		// compare the current max value with each 
		// element in the array
		if (array[i] > max)
			max = array[i];
	 // update current max if needed
	}	
	// return the max value
	return max;
 }

/* ########################
    Function: min_array(int array[], int size))
    Purpose: return the min value from an integer array
    Inputs: array and its size
    Output: integer min value
############################## */
 int min_array(int array[], int size)
 {
     return 0; // replace this
 }
 /*
    void init_array(int array[], int size, string file_name)
    Purpose: initialize items in an array of size with values read from a text file
    Inputs: array, size, string with name of the file
    Output: returns the number of integer values read up to size. 
    Preconditions: a file with the name file_name exists. 
 */
int init_array(int array[], int size, string file_name)
{ // this function should not display anything 
    ifstream input_file; // creates an input file stream object (similar to cin)
    // but it reads input from a file not from the keyboard
    input_file.open(file_name);  // associate the file stream with a file
    int value;
    int i = 0;
    while (input_file >> value && i < size)
    {
        array[i] = value;
        i++;
    }
    
    input_file.close();
    return i; // return the number of values read
}

 /*
    void display_array(int array[], int size)
    Purpose: display array items on one row separated by spaces
    Inputs: array and its size
    Outputs: none
 */
 void display_array(int array[], int size)
 {
 
 }
 
  /*
    void swap(int &v1, int &v2)
    Purpose: swap the values in v1 and v2
    Inputs: two integers passed by reference
    Postconditions: value of v1 is stored in v2 and viceversa
 */

void swap(int &v1, int &v2)
{ // this function should not display anything 

}

  /*
    void sort_bubble(int array[], int size)
    Purpose: sort items in an array in ASCENDING order
    Inputs: array and its size
    Outputs: none
    Processing: implement the bubble sort algorithm
    Postcondition: array items are sorted 
 */
 void sort_bubble(int array[], int size)
 {  // this function should not display anything 
 
 }

  /*
    void sort_insert(int array[], int size)
    Purpose: sort items in the array in DESCENDING order
    Inputs: array and its size
    Outputs: none
    Processing: implement the insertion algorithm
    Postcondition: array items are sorted 
 */
 
void sort_insert(int array[], int size)
{ // this function should not display anything 
 
}
 

 /*
    int  linear_search(int array[], int size, int value)
    Purpose: search for value in an array of size elements
    Inputs: array, size and search value
    Output: index of the item where the first value was found 
            or -1 if value is not found int the array
    Processing: implement linear search algorithm
    Preconditions: none
 */
int  linear_search(int array[], int size, int value)
{ // this function should not display anything

    // return result only at the end
    return 0; // replace this
}

 /*
    int  binary_search(int array[], int size, int value)
    Purpose: search for value in an array of size elements
    Inputs: array, size and search value
    Output: index of the item where the first value was found 
            or -1 if value is not found int the array
    Processing: implement the binary search algorithm
    Preconditions: array is sorted
 */
int  binary_search(int array [], int size, int value)
{ // this function should not display anything

    // return result only at the end
    return 0; // replace this
}
 
 /*
    bool is_sorted(int array[], int size)
    Purpose: test if array values are sorted either ascending or descending
    Output: true if sorted 
 */
bool is_sorted(int array[], int size, bool ascending)
{
    bool result = true;
    for (int i = 0; i < size; i++)
    {
        if (ascending)
        {
            if (array[i] > array[i+1])
            {
                result = false;
                break;
            }
        }
        else
        {
             if (array[i] < array[i+1])
            {
                result = false;
                break;
            }
        }
    }
    return result;
}