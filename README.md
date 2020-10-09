# Midterm

## Preliminary steps: 

1. Open a terminal window on your machine, go to your CSC16 folder with the Vagrant file (use cd command.
2. Check if you already have a VM running (e.g. you quit your VM with exit): `vagrant global-status`. If this command shows a machine as running, then just type: `vagrant ssh`. Else start your virtual machine (vm) in that folder by typing the following sequence of commands: 

		vagrant up
		vagrant ssh 

2. Type `cd /vagrant`. This folder is mapped to your local CSC16 directory.

3. Clone the github classroom repository locally in /vagrant folder:
	
  - In your browser go to the lab link posted on Blackboard.
  - Login into your github account and you should see a new repository with 
the midterm name. Click on the green button Code and then copy the link from the Clone with HTTPS option
  - Clone the midterm repository on your virtual machine (a new folder will be created with the name of the midterm. All files from the repository will be copied there). Type: `git clone add_https_link_from_above`
  - Check that you have the new midterm folder in /vagrant. Type:`ls -al`
  - Change directory to the new midterm folder. Type: `cd midterm_folder_name`
  - Check the files in the midterm foder. Type: `ls`
		
**Congratulations! You are now ready to start your midterm.**


**Midterm Problems**

You need to implement the following functions:
 1. `int most_frequent(int array[], int size);` (25 pts)
 2. `int count_char(string str, char c);` - RECURSIVE (25 pts)
 3. `string compress(string str);` (25 pts)
 4. `int num_pairs(int array[], int size, int sum);` (25 pts)

Description of the functions is in the file `functions.cpp`. 

**Coding Files** 

1. `driver.cpp`. **Don't need to change this file**
  - Contains the main function and tests all functions defined in functions.cpp
2. `header.h` **Don't need to change this file**
  - Contains only function declarations, no function definitions
  - header files are included in cpp files with `#include "header.h"'. 
3. `functions.cpp` **Change this file**
  - This is the file with all function definitions
  - You need to write the body of all functions
  - You need to add the pseudo-code in the header comment Processing section of each function
  
**Steps**:
1. Look at `driver.cpp` file. 
3. Write your pseudo-code steps in the header comment Processing section of each function in `functions.cpp`. Then write the body of each function definition. - ** DO NOT CHANGE THE FUNCTION PROTOTYPES
4. Compile the program with command: `make`
5. Run the program with command: `./midterm`
6. When you finished, run the program once with the command 

		`./midterm | tee out_mid`. 
This will save the output of your program in a file called `out_mid`.  
7. Update changes to your local repository. 
			
			git add out_mid
			git commit -am "your message"

#### Commit to the online Midterm repository by Saturday at 11:00 am

After you are done with your midterm you need to commit your changes to your github online repository so I can see them. Right now, all changes are local to your VM. 
	
		git push

Add a feedback comment on github.com (pull requests) with text "Midterm submitted"




