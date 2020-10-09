#include <string>
#include <iostream>
#include "header.h"
using namespace std;

int main()
{

    cout << "TEST 1 most_frequent" << endl;
    int array1[] = {3,5,5,9,10,10,10,12};
    int array2[] = {3,5,6};
    int array3[] = {2,2,2,2};
    int sizes[] = {8,3,4};
    int correct_answers[] = {10, 3, 2};
    int **ptr_arrays = new int *[3];
    ptr_arrays[0] = array1;
    ptr_arrays[1] = array2;
    ptr_arrays[2] = array3;

    int nr_correct = 0;
    for (int t = 0; t < 3; t++)
    {
        int answer = most_frequent(ptr_arrays[t], sizes[t]);
        if (answer == correct_answers[t])
            nr_correct++;
        else
        {
            cout << "\n\tIncorect " << endl;
            cout << "\tInput ";
            display_array(ptr_arrays[t], sizes[t]);
            cout << "\n\tYour output = " << answer 
                << "\tCorrect output " << correct_answers[t] << endl;
        }
    }
    cout << "PASSED "<< nr_correct << " OUT OF 3 CASES\n";

    //#######################################################################
    cout << "TEST 2 count_char" << endl;
    string        inputs2[] = {"I love programming", "The midterm is fun", ""};
    char     lookfor_char[] = {'m', 'i', 'x'};
    int  correct_answers2[] = {2, 2, 0};
    nr_correct = 0;
    for (int t = 0; t < 3; t++)
    {
        int answer = count_char(inputs2[t], lookfor_char[t]);
        if (answer == correct_answers2[t])
            nr_correct++;
        else
        {
            cout << "\n\tIncorect ";
            cout << "Input \"" << inputs2[t] << "\" count " << lookfor_char[t] << endl;
            cout << "\tYour output = " << answer 
                << "   Correct output = " << correct_answers2[t] << endl;
        }
    }
    cout << "PASSED "<< nr_correct << " OUT OF 3 CASES\n";

    //#######################################################################
    cout << "TEST 3 compress" << endl;
    string           inputs3[] = {"aaabbccccdee", "abbcd", "abcd"};
    string  correct_answers3[] = {"a3b2c4de2", "ab2cd", "abcd"};
    nr_correct = 0;
    for (int t = 0; t < 3; t++)
    {
        string answer = compress(inputs3[t]);
        if (answer == correct_answers3[t])
            nr_correct++;
        else
        {
            cout << "\n\tIncorect\n";
            cout << "\tInput \"" << inputs3[t] << "\"" << endl;
            cout << "\tYour output = " << answer 
                << "   Correct output = " << correct_answers3[t] << endl;
        }
    }
    cout << "PASSED "<< nr_correct << " OUT OF 3 CASES\n";

    /*
    array = {3,-2,1,0,5}, sum = 3  return = 2  (pairs = (3,0), (-2,5))
           array = {1, 5, 7, -1, 5} sum = 6, return = 3 (pairs (1,5), (7,-1), (1,5)
    */
    cout << "TEST 4 num_pairs" << endl;
    int inputs4[][5] ={{3,-2,1,0,5}, {1,5,7,-1,5},{1,1,1,1,1}};
    int sizes4 = 5;
    int sums[] = {3,6,2};
    int correct_answers4[] = {2,3,10};

    nr_correct = 0;
    for (int t = 0; t < 3; t++)
    {
        int answer = num_pairs(inputs4[t], sizes4, sums[t]);
        if (answer == correct_answers4[t])
            nr_correct++;
        else
        {
            cout << "\n\tIncorect " << endl;
            cout << "\tInput ";
            display_array(inputs4[t], sizes4);
            cout << " search for sum = " << sums[t]; 
            cout << "\n\tYour output = " << answer 
                << "\tCorrect output= " << correct_answers4[t] << endl;
        }
    }
    cout << "PASSED "<< nr_correct << " OUT OF 3 CASES\n";

}