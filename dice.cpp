
// function definitions for the dice game
#include "dice.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cassert>
using namespace std;

/* 
    get_throw() (this is an example of function header: describes the function)
    Purpose: display messages (Press enter to roll the dice), and roll 2 dice 
    Inputs: none
    Outputs: sum of two dice
    Processing:
        Display message: Press enter to roll the dice
        Call function roll_dice twice
        Return the sum 
    Preconditon: srand has been initialized in main (conditions at the beginning of the function)
    Postcondition: output is a number between 1 and 12 (conditions at the end of the function)
*/
int get_throw()
{
   
}



/*
    int roll_dice()
    Purpose: roll one dice
    Return: a random value between 1 and 6
    Preconditions: srand has been initialized in main
    Postconditions: the output is between 1 and 6
*/
int roll_dice()
{

}


/*
    int decision(int,int)
    Purpose: Compute the outcome of a throw (all conditions for win, loose, point), display messages (win, lose, your point is) and return 0 game over or 1 not over
    Inputs: first input is the sum of a throw, second input is the point 
            or 0 for first throw of a game (0 is the default value, so you can call 
            the function with only the first parameter for the first throw (e.g. decision(11))
    Outputs: 0 = game over, or the point in case the game is not over
    Processing:

        if point is 0 // first throw in a game
            if sum_throw is 7 or 11
                display win message
                return 0
            else if sum_throw is 2, 3 or 12
                display lost message 
                return 0 
            else
                display here is your point message
                return sum_throw
        else
            if sum_throw is equal to point
                display win message
                return 0
            else if sum_throw is equal to 7
                display lost message
                return 0
            else
                display message: You need to throw again
                return point

    Preconditions: sum_throw is greater than 0 and less than or equal to 12, 
*/
int decision(int sum_throw, int point)
{
    assert(sum_throw >0 && sum_throw <=12);

}


/*
    bool play() 
    Purpose: ask player if they want to play a new game, get answer ('y' or anything else)
    Processing:
        Display message: do you want to play a new game
        Ask for a character input
        If character input is 'y' or 'Y' return true
        otherwise return false 
    Return: true if player wants to play a new game, false otherwise
*/
bool play()
{

}
