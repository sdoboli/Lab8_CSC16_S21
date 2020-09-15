# Lab 3 - Functions 

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
  - Clone the lab repository on your virtual machine (a new folder will be created with the name of the assignment. All files from the repository will be copied there). Type: `git clone add_https_link_from_above`
  - Check that you have the new assignment folder in /vagrant. Type:`ls -al`
  - Change directory to the new assignment folder. Type: `cd assignment_folder_name`
  - Check the files in the assignment foder. Type: `ls`
		
**Congratulations! You are now ready to start your assignment.**

### Problem 1  (15 pts code + 10 pts run)

**Goal:Understand how data is passed to functions:**

  1. Open the file `demo_passing_parameters.cpp` in visual studio code. Look at the code. 
  2. Compile the program: `make param`
  3. Run the program: `./param`
  4. Fill out answers to questions 1 to 3
  6. When you finished all, run the program once with the command below. This will save the output of the file in a file called `out_lab3_1_param`.
		
	./param |tee out_lab3_1_param
  7. Update changes to your local repository. 

	git add out_lab3_1_param
	git commit -am "your message"

### Problem 2 (15 pts code + 10 pts run)

**Goal: Understand static, local and global variables.**
   1. Open the file `ex_static.cpp` in visual studio code. Look at the code.
   2. Compile the program: `make static` 
   3. Run the program: `./static`
   4. Fill out answers to questions 1 to 3
   6. When you finished all, run the program once with the command below (you need to comment out the line with:  multiple(v_int1,0); otherwise the program will crash) . The whole input/output will be saved in a file `out_lab3_static`
		
	./static |tee out_lab3_2_static
7. Update changes to your local repository.  Type:
  		 
		git add out_lab3_2_static
		git commit -am "your message" 


### Problem 3 (40 pts code + 10 pts run)

**Goal**: Implement a program that plays the dice game **using functions**.

**Dice Game**: The game of craps is perhaps the most famous of all dice games. The player begin by throwing two standard dice. Each dice can have a value of 1 to 6. If the sum of these dice is 7 or 11, the player wins. If the sum is 2,3 or 12, the player loses. Otherwise, the sum becomes the player’s point. The player continues to roll until either the point comes up again, in which case the player wins, or the player throws 7, in which case they lose. You need to write a program that plays the dice game. 

**Files** 

1. `dice_game_functions.cpp`. **Don't need to change this file**
  - Contains the main function
2. `dice.h` **Don't need to change this file**
  - .h extension means this is a **header** file.
  - Contains only function declarations, no function definitions
  - `#ifndef`, `#endif`, and `#define` are preprocessor keywords and they avoid redeclarations of the same function multiple times
  - header files are included in cpp files with `#include "dice.h"'. 
3. `dice.cpp` **Do change this file**
  - This is the file with all function definitions
  - You need to write the body of all functions used in main
  
**Steps**:
1. Look at `dice_game_functions.cpp`, `dice.h`, and `dice.cpp`.
2. Look at the file `use_case_dice_game`. It contains a sample output of the game. 
3. Write code in `dice.cpp` according to the description of each function in the function header - ** DO NOT CHANGE THE FUNCTION PROTOTYPES
4. Compile the program with command: `make dice`
5. Run the program with command: `./dice`
6. When you finished, run the program once with the command `./dice | tee out_lab3_dice`. This will save the output 
of your program in a file called `out_lab3_dice`.  
7. Update changes to your local repository. 
			
			git add out_lab3_dice
			git commit -am "your message"

	
#### Commit to the online Assignment repository 

After you are done with your assignment you need to commit your changes to your github online repository so I can see them. Right now, all changes are local to your VM. 
	
		git push


**!USE WITH CARE**: If the online assignment repository was updated by me, type: `git pull` to update your local repository. BE CAREFUL. THIS WILL ERASE YOUR CODE. 






