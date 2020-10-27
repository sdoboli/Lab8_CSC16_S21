#include <string>
#include "Cards.h"
#include "Deck.h"
#include <cstdlib>
#include <random>
#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    // 1. Instantiate an empty deck object called my_deck of size 52

    // 2. Initialize the deck with cards from 
    // valid suites: {"hearts", "diamonds", "spade", "clubs"}
    // range of values 1 to 13 
    string suites[] = {"hearts", "diamonds", "spade", "clubs"};

    // 3. Shuffle the deck
    
   // Simulate a simple UNO like game

    // 4. Instantiate two empty deck objects called my_hand and 
    // computer_hand

   // 5. Instantiate a new empty deck object called pile

    
    // 6. Add the top of my_deck to my_hand, then computer_hand
    // 7. Repeat Step 5. seven times = hand size
    
   
    // 7 Simulate a simple game betweem computer_hand and my_hand
       // choose randomly a turn: 1 for you, 0 for computer
       // while deck is not empty or none of hands is empty
          // remove card on top of the deck and add it to the top
          // of the pile
          // display card on top of the pile
          // next player chooses a card that matches either 
          // the suite or the value of the card on top of the pile
          // or draws a new card from top of the deck
          // if player has one card left in their hand display UNO
          // change turns
}