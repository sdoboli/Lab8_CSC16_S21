# Lab 8: Deck of cards and a card game

## Preliminary steps: 

1. Open a terminal window on your machine, go to your CSC16 folder with the Vagrant file (use cd command.
2. Check if you already have a VM running (e.g. you quit your VM with exit): `vagrant global-status`. If this command shows a machine as running, then just type: `vagrant ssh`. Else start your virtual machine (vm) in that folder by typing the following sequence of commands: 

		vagrant up
		vagrant ssh 

2. Type `cd /vagrant`. This folder is mapped to your local CSC16 directory.

3. Clone the github classroom repository locally in /vagrant folder:
	
  - In your browser go to the lab link posted on Blackboard.
  - Login into your github account and you should see a new repository with 
the assignment name. Click on the green button Code and then copy the link from the Clone with HTTPS option
  - Clone the assignment repository on your virtual machine (a new folder will be created with the name of the assignment. All files from the repository will be copied there). Type: `git clone add_https_link_from_above`
  - Check that you have the new assignment folder in /vagrant. Type:`ls -al`
  - Change directory to the new assignment folder. Type: `cd assignment_folder_name`
  - Check the files in the assignment foder. Type: `ls`
  - You will have to `cd` into `Deck_Cards`. You will find a `makefile` file. 

**Congratulations! You are now ready to start your assignment.**


**Lab 8 Problems**

**New item 1: Added a file called `Comments`. Please describe in it any changes you made to files/classes and the reason for it. Describe the game in case you implemented another game.**

**New item 2: File `Acknoledgement`. Describe in this file any help you received from others or from the internet: source, and description of the help received.**

## Problem 1:

**Implement class Deck functions**

**Description**: A deck object stores a list of Cards objects. Initially the deck is empty. The deck can be initialized with a set of Cards with suites and values in a specified range depending on the game. Or cards can be added one by one to the deck. The deck can be shuffled or sorted. Cards can be removed from the top, or from a certain location. Cards can be added on top or on the bottom. 

Check the file `Deck.h` which contains the class `Deck` definition. You need to implement the functions in the class Deck. The Cards objects in a Deck will be stored in a dynamic array. You need to allocate dynamic memory for the array of Cards when a new Deck object is instantiated (declared).

A Deck object has the following data members: 

	Card *ptr_cards; // pointer to an array of cards
	int nr_cards;    // current size deck
	int max_size;   // max # of cards in the Deck

- `max_size` is the capacity of the Deck - how many Cards it can store.
- `nr_cards` is the number of Cards on the Deck at any one time. `nr_cards` is initially 0. As you initialize the Deck or add/remove Cards to it, `nr_cards` will 
 change to reflect the number of Cards on the Deck. At all times `nr_cards` will be smaller than `max_size`. 
- `ptr_cards` is pointer to a Card object. Its role is to point to an array of max_size Cards objects allocated in dynamic memory. The memory for the array will be allocated when a new Deck object is instantiated. When a card object is added to a deck object, then nr_cards will be incremented by 1 and the card copied in the array pointed by ptr_cards. Cards are stored in consecutive locations in the array. For example, a deck of max_size = 52 and nr_cards = 3, will have three Card objects stored in positions 0,1,2 in the array pointed by ptr_cards. 

**Example**

	Deck new_deck(30); // new_deck is an empty deck with max_size = 30, nr_cards = 0, memory for the array is
				   // allocated now but the array is empty
	new_deck.init_deck({"hearts, "spades"}, 1,13) //adds 26 cards with suites hearts and spades and values
							      // in between 1 and 13.
							      
A `Cards` object has an integer face and a string suite as private data members. Functions in the class `Cards` allow you to set the face and the suite for a new `Cards` or an existing `Cards` object, compare `Cards` by suite or by face. Cards class is defined in `Cards.h`, and its functions are already implemented in `Cards.cpp`. Go over these files so you know which data members and which function members are available in the class Cards. A sample test file for the class `Cards` is included as well. You will need to compile it separately with `g++ -o cards test_cards.cpp Cards.cpp` 


**Steps**

 1. Add the definition of all function members of the class `Deck` in file `Deck.cpp`. Each function has a header with: goal, inputs, outputs, processing, preconditions and postconditions. Do not forget to test for preconditions.
 2. Add code for each step to test the function members in the `test_deck.cpp`. Then compile and run the program  
		
		cd Deck_Cards
		make 
		./test_deck

 3. When you finished, run the program once with the command: `./test_deck | tee out_deck`
		
 This will save the output of your program in a file called `out_deck`.  
 
 4. Update changes to your local repository. 
			
			git add out_deck
			git commit -am "your message"

**You should not have to modify any other files, but if you need to do so, please add your explanations in the file `Comments`**

## Problem 2:

**Goal: Implement a card game**

**Description** In the file `card_game.cpp` add logic to play a simple card game. I described the steps of a basic card game between a player and the computer. Use `Deck` objects for the deck of cards, the computer and player hand and the pile. Use `Cards` objects for individual cards. You can implement this game or another game. If you implement another game, please add details of it in the file `Comments`.

**Steps** 

1. Add the logic of the game in the file `card_game.cpp`
4. Compile the program with command: `make`
5. Run the program with command: `./card_game`
6. When you finished, run the program once with the command: `./card_game | tee out_game`
 This will save the output of your program in a file called `out_game`.  
7. Update changes to your local repository. 
			
			git add out_game
			git commit -am "your message"

**You should not have to modify any other files, but if you need to do so, please add your explanations in the file `Comments`**

#### Commit to the online repository by November 4th ###

After you are done with your lab you need to commit your changes to your github online repository so I can see them. Right now, all changes are local to your VM. 
	
		git push

Add a feedback comment on github.com (pull requests) with text "Lab 8 submitted"




