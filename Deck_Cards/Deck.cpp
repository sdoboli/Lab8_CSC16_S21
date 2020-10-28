#include <string>
#include "Cards.h"
#include "Deck.h"
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std;


/*
    Goal: initialize an empty deck of max_size
    Inputs: max_size
    Outputs: none
    Processing: 
        Allocate dynamic memory for an array of Card objects of max_size
        ptr_cards = point to the new array
        nr_cards = 0
        max_size = max_deck_size
    Preconditions: max_deck_size > 0 
    Postconditions: dynamic memory for a new deck of max_size is allocated
                    no cards in the deck
*/
Deck::Deck(int max_deck_size) // empty deck of max_size
{

}

/*
    Goal: initialize deck with Cards
    Inputs: a string of suites, num_suites = number of suites, min_val and max_val
    Outputs: number of cards added to the deck
    Processing:
        For each face in suites
            For each value in min_val to max_val
                - Create a new Card object
                - add it in ptr_cards at position nr_cards
                - increment nr_cards
    Preconditions: nr_cards = 0
    Postconditions: a number of cards with suites in the string and values 
    in the range min_val and max_val are added to the deck
*/
int Deck::init_deck(string suites[], int num_suites, int min_val, int max_val)
{

}

/*
    Goal: swap two card objects passed by reference
*/
void Deck::swap(Card &c1, Card &c2)
{

}

/*
    Goal: shuffle the deck of cards
    Inputs: an integer with number of shuffles
    Outputs: none
    Processing:
        Your choice: this is a suggestion
        repeat num_shuffles:
            pick a random position between 0 and nr_cards -1
            swap it with a random position betweem 0 and nr_cards-1     
    Preconditions: none, 
    Postconditions: cards in the deck are shuffled
*/
void Deck::shuffle(int num_shuffles) // shuffle all cards in the deck
{

}

/*
    Goal: add new_card to top of the Deck
    Inputs: reference to a constant new_card object
    Outputs: 0 if not successful, 1 if successful
    Processing:
        Top of the deck is at index nr_cards-1
        add new_card to ptr_cards at index nr_cards
        increment nr_cards
    Preconditions: deck is not full, nr_cards is less max_size   
    Postconditions: a new card is added to the deck
*/
int Deck::add_top(const Card &new_card)
{

}

/*
    Goal: add a new card to the deck - at the bottom of the Deck
    Inputs: a reference to a constant card object:new_card
    Outputs: 0 if not successful, 1 if successful
    Processing:
        Bottom of the deck is at index 0
        - move all cards from index 0 to nr_cards-1 one position
         towards the end of the array
        - add new_card at index 0
        - increment nr_cards
    Preconditions: deck is not full, nr_cards is less max_size
    Postconditions: a new card is added to the bottom of the deck
*/
int Deck::add_bottom(const Card &new_card)
{
    
}


/*
    Goal: remove the card on top of the deck
    Inputs: none
    Outputs: A card object
    Processing: 
        - decrement nr_cards
        - return the card object at position nr_cards-1
    Preconditions: deck is not empty (nr_cards > 0)
    Postconditions: deck has one less card
*/
Card Deck::remove_top()
{

}

/*
    Goal: remove a card from a particular position in the deck
    Inputs: position of the card
    Outputs: a card object
    Processing: 
       - copy the card at position pos
       - move all cards from pos+1 to nr_cards-1 one position
        towards the beginning of the array
       -  decrement nr_cards
    Preconditions: pos >=0 and post < nr_cards
    Postconditions:
*/
Card Deck::remove(int pos)
{

}

/*
    Goal: return the card at the top of the deck, but do not remove it
    Inputs: none
    Outputs: card object
    Processing:
        return card object at position nr_cards-1
    Preconditions: deck is not empty
    Postconditions: none = deck is not changed
*/
Card Deck::peek_top() const
{

}

/*
    Goal: return the number of cards in the deck
    Inputs: none
    Outputs: integer - nr_cards
    Processing: return nr_cards
    Preconditions: none
    Postconditions: none
*/
int Deck::get_size() const
{

}

/*
    Goal: check if deck is full
    Inputs: none
    Outputs: true if deck is full, false otherwise
    Processing: check if nr_cards is less than max_size
*/
bool Deck::is_full() const
{

}

/*
    Goal: check if deck is empty
    Inputs: none
    Outputs: true if nr_cards = 0, false othersize
*/
bool Deck::is_empty() const
{

}

/*
    Goal: sort the cards in the deck by value
    Inputs: none
    Outputs: none
    Processing: sort cards in the deck, from smallest 
                value to largest value
                Use any sorting algorithm
                Use the operators > to compare two cards
                
    Preconditions: none
    Postconditions: none
*/
void Deck::sort() 
{
}

/*
    Goal: return the index of the largest card of a certain suite
    Inputs: suite
    Outputs: position of the card, or -1 if that suite was not found
    Processing: search for max value of cards of a certain suite
    Preconditions: none
    Postconditions: none
*/
int Deck::best_card(string suite) const
{

}

/*
    Goal: return the index of the worst card of a certain suite
    Inputs: suite
    Outputs: position of the card, or -1 if that suite was not found
    Processing: search for min face of cards of a certain suite
    Preconditions: none
    Postconditions: none
*/
int Deck::worst_card(string suite) const
{

}

/*
    Goal: return the index of a card with a particular face
    Inputs: suite
    Outputs: position of the card, or -1 if that face was not found
    Processing: search a card with a face value = face 
    Preconditions: none
    Postconditions: none
*/
int Deck::match_face(int face) const
{

}
/*
    Goal: display the cards in the deck
    Inputs: none
    Outputs: none
    Processing: for each card in the deck call 
                    display function in the Card class
*/
void Deck::display() const
{

}

/*
    Goal: display a card from the deck at position pos
    Inputs: integer pos = position of the card
    Outputs: none
    Processing: 
            call display function in the Card class for the card
            at location pos
    Precondtion: pos is between 0 and nr_cards-1, deck is not empty
*/
void Deck::display(int pos) const
{

}
