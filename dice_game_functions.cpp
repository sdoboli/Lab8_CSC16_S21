/* Simona Doboli, 2/10/2020
  Implements dice game with functions
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include "dice.h"
using namespace std;


int main()
{
    srand(time(NULL));  // initialize the random seed generator with current time
    // display welcome to my game message
    do
    {
        int throw_result = get_throw();
        int outcome = decision(throw_result);
        while(outcome)
        {
            int point = outcome;
            throw_result = get_throw();
            outcome = decision(throw_result, point);
        }
    } while (play());
}

