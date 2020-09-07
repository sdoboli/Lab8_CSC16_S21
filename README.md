# Lab 2 - If/loops 

## Preliminary steps: 

1. Open a terminal window on your machine, go to your CSC16 folder with the Vagrant file (use cd command)  and start your virtual machine (vm) in that folder by typing the following commands: 

		vagrant up
		vagrant ssh 

2. Type `cd /vagrant>`. This folder is mapped onto your local CSC16 directory. Type ls -al to see its content. It will be the same content as CSC16 on your machine. Always type `cd /vagrant` when you start up your VM.

3. Clone the github classroom repository locally in /vagrant folder:
	
	a) In your browser go to the lab link posted on Blackboard.
	
	c)  Login into your github account and you should see a new repository with 
	the assignment name. Click on the green button Code and then copy the link from the Clone with HTTPS option
	
	d) Clone the lab repository on your virtual machine (a new folder will be created with the name of the assignment. All files from the repository will be copied there): 
		
		Type: git clone add_https_link_from_above  
	
	e) Check that you have the new assignment folder in /vagrant: 
		
		Type: ls -al
	
	f) Change directory to the new assignment folder: 
		
		Type: cd assignment_folder_name
	
	g) Check the files in the assignment foder: 
		
		Type: ls     
		
Congratulations! You are now ready to start your assignment.

### Problem 1  

Goal: Understand how to generate random numbers in C++:

  1. Open the file generate_random.cpp in visual studio code. Look at the code. 
  2. Compile the program: make random
  3. Run the program: ./random
  4. Fill out answers to questions 1 to 4
  5. Add code for question 5.
  6. When you finished all, run the program once only with the following command. This will save the output of the file in a file called out_lab2_1_random.
		
	./random |tee out_lab2_1_random
  7. Update changes to your local repository.  Type `git add out_lab2_1_random`. Then commit with a message:

	git commit -am "your message"

### Problem 2

Goal: Understand how to use cin to input data in your program. 
   1. Open the file input.cpp in visual studio code. Look at the code.
   2. Compile the program: make input 
   3. Run the program: ./input
   4. Fill out answers to questions 1 to 5
   5. Add code for question 6.
   6. When you finished all, run the program once (you need to comment out the code for Q4 otherwise the program will crash). 
   This will save the output with the answer to questions in a file called out_lab2_2_input.  
   
   		./input
  7. Update changes to your local repository.  Type `git add out_lab2_2_input`. Then commit with a message:

		git commit -am "your message"


### Problem 3

**Goal**: Implement a program that plays the dice game.

**Dice Game**: The game of craps is perhaps the most famous of all dice games. The player begin by throwing two standard dice. If the sum of these dice is 7 or 11, the player wins. If the sum is 2,3 or 12, the player loses. Otherwise, the sum becomes the player’s point. The player continues to roll until either the point comes up again, in which case the player wins, or the player throws 7, in which case they lose. 

**Steps**:
	1. Write the pseudo-code of the algorithm (the steps) in the file pseudo-code. Make sure that you specify all variables you
	need. Make sure you name the variables with names that indicate their meaning. 
	2. Write the code to play dice game in the file play_dice.cpp
	3. Compile the program with command: `make dice`
	4. Run the program with command: `./dice`
	5. When you finished, run the program once with the command `./dice | tee out_lab2_dice`. This will save the output 
	of your program in a file called out_lab2_dice.  
	6. Update changes to your local repository.  Type `git add out_lab2_dice`. Then commit with a message:

			git commit -am "your message"

	
#### Commit to the online Assignment repository 

After you are done with your assignment you need to commit your changes to your github online repository so I can see them. Right now, all changes are local to your VM. 
	
		git push


**!USE WITH CARE**: If the online assignment repository was updated by me, type: `git pull` to update your local repository. BE CAREFUL. THIS WILL ERASE YOUR CODE. 






