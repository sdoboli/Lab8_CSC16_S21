/*
    Sample program for arrays:
    Function that returns the maximum item in an array
    Task: Add code in the max_array function definition 
          Compile and run the code
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>
using namespace std;

#include "header.h"






int main()
{

    srand(time(NULL));
	const int MAX_SIZE = 40;    // constant variable that holds the array size
	// 1. declare and array of integers of MAX_SIZE
    int test_array[MAX_SIZE];

    // 2. Call function init_array to initialize array items with values stored 
    // in file numbers.txt
    string name_file = "numbers.txt";
    int nr_values_read = init_array(test_array,MAX_SIZE, name_file);
    cout << "Read " << nr_values_read << " from file "  << name_file << endl;

    // 3. Test function display_array to display all items in the array
    display_array(test_array, MAX_SIZE);
    // 4. Test function max_array and store the return value in max_val
    int max_val = max_array(test_array, MAX_SIZE); 
    cout << "The maximum value in the array is " << max_val << endl;

    // 4. Test function min_array and store the return value in min_val
    int min_val = min_array(test_array, MAX_SIZE); 
    cout << "The minimum value in the array is " << min_val << endl;

    // 5. Test function linear_search:
    cout << "Linear search for value " << test_array[15] << endl;
    cout << "Value was found at index = " << linear_search(test_array, MAX_SIZE, test_array[15]) << endl;

    cout << "Linear search for value " << min_val - 10;
    cout << " returned  " << linear_search(test_array, MAX_SIZE, min_val -10) << endl;

    cout << "Linear search for value " << max_val + 10;
    cout << " returned  " << linear_search(test_array, MAX_SIZE, max_val + 10) << endl;

    // 6. Copy the array into another array
    int copy_array[MAX_SIZE];
    for (int i = 0; i < MAX_SIZE; i++)
        copy_array[i] = test_array[i];

    // 5. Call function sort_bubble to sort test_array in ascending order
    sort_bubble(test_array,MAX_SIZE);
    
    // 6. Test array is sorted
    cout << "Test bubble sort algorithm is "; 
    if (is_sorted(test_array, MAX_SIZE, true))
        cout << "correct" << endl;
    else
        cout << "incorrect" << endl;
    
    // Test binary search function
    cout << "Binary search for value "   << test_array[15] << endl;
    cout << "Value was found at index = " << binary_search(test_array, MAX_SIZE, test_array[15]) << endl;

    cout << "Binary search for value " << min_val - 10;
    cout << " returned  " << binary_search(test_array, MAX_SIZE, min_val -10) << endl;

    cout << "Binary search for value " << max_val + 10;
    cout << " returned  " << binary_search(test_array, MAX_SIZE, max_val + 10) << endl;

    // 5. Call function sort_insert to sort copy_array in descending order 
    sort_insert(copy_array,MAX_SIZE);
    
    // 6. Test array is sorted descending order
    cout << "Test bubble sort algorithm is "; 
    if (is_sorted(test_array, MAX_SIZE, false))
        cout << "correct" << endl;
    else
        cout << "incorrect" << endl;
}