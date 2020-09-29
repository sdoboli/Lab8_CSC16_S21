# Lab 5 - Strings

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


**Tasks**

0. Check the code, compile and run `ex_strings_class.cpp` file. Compile it with: `g++ ex_strings_class.cpp` and run it with `./a.out`.

You need to implement the following functions:
1. `bool unique_char(string);`
2. `bool is_permutation(string, string);`
3. `string add_one(string);`
4. `bool one_edit(string, string);`

Description of these functions is in the file `functions.cpp`. You will use the string class. are described in the attached pdf files.

**Coding Files** 

1. `driver_strings.cpp`. **Don't need to change this file**
  - Contains the main function
2. `header.h` **Don't need to change this file**
  - .h extension means this is a **header** file.
  - Contains only function declarations, no function definitions
  - `#ifndef`, `#endif`, and `#define` are preprocessor keywords and they avoid redeclarations of the same function multiple times
  - header files are included in cpp files with `#include "header.h"'. 
3. `functions.cpp` **Change this file**
  - This is the file with all function definitions
  - You need to write the body of all functions which are then tested in main
  
**Steps**:
1. Look at `driver_strings.cpp` file. 
3. Write code in `functions.cpp` according to the description of each function in the function header - ** DO NOT CHANGE THE FUNCTION PROTOTYPES
4. Compile the program with command: `make`
5. Run the program with command: `./strings`
6. When you finished, run the program once with the command `./strings | tee out_lab5`. This will save the output 
of your program in a file called `out_lab5`.  
7. Update changes to your local repository. 
			
			git add out_lab5
			git commit -am "your message"

	
#### Commit to the online Assignment repository 

After you are done with your assignment you need to commit your changes to your github online repository so I can see them. Right now, all changes are local to your VM. 
	
		git push

**!USE WITH CARE**: If the online assignment repository was updated by me, type: `git pull` to update your local repository. BE CAREFUL. THIS WILL ERASE YOUR CODE. 






