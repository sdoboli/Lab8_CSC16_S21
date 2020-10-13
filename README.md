# Lab 7: Classes

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
		
**Congratulations! You are now ready to start your assignment.**


**Lab7 Problems**

## Problem 1:

**Goal: Implement a program that plays the dice game using Dice class.**

Dice Game: The game of craps is perhaps the most famous of all dice games. The player begin by throwing two standard dice. Each dice can have a value of 1 to 6. If the sum of these dice is 7 or 11, the player wins. If the sum is 2,3 or 12, the player loses. Otherwise, the sum becomes the player’s point. The player continues to roll until either the point comes up again, in which case the player wins, or the player throws 7, in which case they lose. You need to write a program that plays the dice game.

**Coding Files in Dice folder** 

1. `play_dice.cpp`. **Need change this file: add the game logic using Dice objects as dice **
2. `Dice.h` **Don't need to change this file**
  - Contains the Dice class definition
3. `Dice.cpp` **Don't change this file**
  - This is the file with all function member definitions from class Dice
4. `test_dice.cpp` **Don't change this file**
  - Contains a test of all function members inside class Dice. 

**Steps** 
1. Look at `Dice.h` and `Dice.cpp` files. 
2. Compile the program with command: `make`
3. Run the program test_dice with command: `./test_dice`
4. Write the logic code for the dice game program inside `play_game.cpp`
5. Compile the program with command: `make`
6. Run the program test_dice with command: `./dice_game`
7. When you finished, run the program once with the command 

		`./dice_game | tee out_dice`. 
This will save the output of your program in a file called `out_dice`.  
7. Update changes to your local repository. 
			
			git add out_dice
			git commit -am "your message"

## Problem 2:

**Goal: Implement and test a class Team**

**Coding Files in Team folder** 

1. `driverTeam.cpp`. **Change this file: add code for each step**
2. `Team.h` **Don't need to change this file**
  - Contains the Team class definition
3. `Team.cpp` **Change this file - add code for all Team class function definitions **
  - This is the file with all function member definitions from class Team

**Steps** 
1. Look at `Team.h`file.
2. Write the function definitions in `Team.cpp`.
3. Write code for each step in the main function in `driverTeam.cpp`
4. Compile the program with command: `make`
5. Run the program with command: `./team`
6. When you finished, run the program once with the command 

		`./team | tee out_team`. 
This will save the output of your program in a file called `out_team`.  
7. Update changes to your local repository. 
			
			git add out_team
			git commit -am "your message"

## Problem 3:

**Goal: Implement and test a class Money**

**Coding Files in Money folder** 

1. `test_classes.cpp`. **Change this file: add code for each step**
2. `header.h` **Don't need to change this file**
  - Contains the Money class definition
3. `class_functions.cpp` **Change this file - add code for all Money class function definitions **
  - This is the file with all function member definitions from class Money

**Steps** 
1. Look at `header.h`file.
2. Write the function definitions in `class_functions.cpp`.
3. Write code for each step in the main function in `test_classes.cpp`
4. Compile the program with command: `make`
5. Run the program with command: `./test_classes`
6. When you finished, run the program once with the command 

		`./test_classes | tee out_money`. 
This will save the output of your program in a file called `out_money`.  
7. Update changes to your local repository. 
			
			git add out_money
			git commit -am "your message"

#### Commit to the online repository by October 21st ###

After you are done with your lab you need to commit your changes to your github online repository so I can see them. Right now, all changes are local to your VM. 
	
		git push

Add a feedback comment on github.com (pull requests) with text "Lab 7 submitted"




