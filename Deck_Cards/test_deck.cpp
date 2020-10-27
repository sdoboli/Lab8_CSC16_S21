#include <string>
#include "Cards.h"
#include "Deck.h"
#include <cstdlib>
#include <iostream>
#include <random>
using namespace std;

/*
    TEST FUNCTIONS IN THE DECK CLASS
    Add code to test all functions in the Deck Class
*/

int main()
{
    cout << "TEST: Deck(int max_size) " << endl;
    cout << "\t1. Declare a new Deck object my_deck of size 10" << endl;
	cout << endl;

    cout << "TEST: int init_deck(string face[], int min_val, int max_val)" << endl;
    cout << "\t2. Initialize the Deck with cards of suites 'hearts' and 'spades' "
         << "\n\t with values between 1 and 5 " << endl;
    cout << "\t3. Display the deck size" << endl;
    cout << "\t4. Display the deck cards " << endl;
	cout << endl;
    
    cout << "TEST: void shuffle(int nr_shuffles)" << endl; // shuffle all cards in the deck
    cout << "\t5. Shuffle the deck for 50 times" << endl;
    cout << "\t6. Display the deck" << endl;
    cout << endl;

    cout << "TEST: Card peek_top() const" << endl;
    cout << "\t7. Display the card on the top of my_deck" << endl;
    cout << endl;

    cout << "TEST: Card remove_top()" << endl;
    cout << "\t8. Declare a new empy deck called hand of size 10" << endl;
    cout << "\t9. Remove the top card from my_deck and store it in a"
         <<"\n\t card object called one_card" << endl;
    cout << endl;

    cout << "TEST: bool is_empty() const" << endl;
    cout << "\t10. Display if hand deck is empty or not" << endl;
    cout << endl;

    cout << "TEST: int add_top(const Card &)" << endl;
    cout << "\t11. Add one_card on the top of deck hand" << endl;
    cout << "\t12. Display one_card" << endl;
    cout << "\t13. Display hand" << endl;
    cout << "\t14. Display the size of my_deck" << endl;
    cout << endl;

    cout << "TEST: int add_bottom(const Card &);" << endl;
    cout << "\t15. Add one_card to the bottom of my_deck" << endl;
    cout << "\t16. Display my_deck" << endl;
    cout << endl;

    cout << "TEST: Card remove(int pos)" << endl;
    cout << "\t17. Remove the card at position 5 from my_deck" 
         <<  "\n\t and store it in one_card" << endl;
    cout << "\t18. Display one_card" << endl;
    cout << "\t19. Add one_card to the bottom of my_deck" << endl;
    cout << "\t20. Display my_deck" << endl;
    cout << "\t21. Add one_card on the top of hand deck" << endl;
    cout << "\t22. Display hand" << endl;
    cout << endl;
  
    cout << "TEST: int get_size() const" << endl;
    cout << "\t23. Display hand size" << endl;
    cout << "\t24. Display my_deck size" << endl;
    cout << endl;

    cout << "TEST: bool is_full() const" << endl;
    cout << "\t25. Check if my_deck is full" << endl;
    cout << endl;
	
    // use a for loop
    cout << "\t26: Remove 5 cards from my_deck top and add them to hand top" << endl;
    cout << "\t27. Display my_deck: " << endl;
    cout << "\t28. Display hand: " << endl;
    cout << endl;

    cout << "TEST: void sort()" << endl;
    cout << "\t29. Sort hand" << endl;
    cout << "\t28. Display hand: " << endl;
    cout << endl;
	
    cout << "TEST: int best_card(string suite) const" << endl;
    cout << "\t29. Display the index of the best card of suite 'hearts'" 
         << "\n\t in hand" << endl;
	cout << endl;

    cout << "TEST void display(int pos) const " << endl;
    cout << "\t30. Display the card at index of the best card of suite 'hearts'" 
        << "\n\t in hand" << endl;
    cout << endl;

    cout << "TEST: int worst_card(string suite) const" << endl;
    cout << "\t31. Display the index of the worst card of suite 'spades'" 
         << "\n\t in hand" << endl;
    cout << "\t32. Display the card at index of the worst card of suite 'spades'" 
         << "\n\t in hand" << endl;
	cout << endl;

    cout << "TEST: int match_face(int face) const" << endl;
    // look for a card with a particular face value that you know it is in the hand object
    cout << "\t33. Display the index of a face card that is in hand" << endl;
    // look for a card with a particular face value that you know it is not in the hand object
    cout << "\t34. Display the index of a face card that is not hand" << endl;
	cout << endl;

}