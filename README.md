# Lab 8: Pointers and OOP

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


**Lab8 Problems**

## Problem 1:

**Goal: Learn about pointers and dynamic memory allocation.**

**Coding Files in Pointers folder** 

1. `pointers.cpp`. **Change this file as per instructions inside **


**Steps** 
1. Compile the program with command: `make`
2. Run the program pointers with command: `./pointers`
3. Observe the output and start answering questions in the code.
4. When you finished, run the program once with the command 

		`./pointers | tee out_pointers`. 
This will save the output of your program in a file called `out_pointers`.  
7. Update changes to your local repository. 
			
			git add out_pointers
			git commit -am "your message"

## Problem 2:

**Goal: Implement and test a class Account**

**Coding Files in Money_Account folder** 

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




