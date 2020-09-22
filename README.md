# Lab 4 - Arrays

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

You need to implement the following functions:
	1. `int min_array(int [], int);`
	2. `void display_array(int [], int );`
	3. `int init_array(int [], int ,string);`
	4. `void swap(int &, int &);`
	5. `void sort_bubble(int [], int);`
	6. `void sort_insert(int [], int);`
	7. `int  linear_search(int [], int, int);`
	8. `int  binary_search(int [], int, int);`

Description of these functions is in the file `functions.cpp`. Searching and sorting algorithms are described in the attached pdf files.

**Coding Files** 

1. `sort_search.cpp`. **Don't need to change this file**
  - Contains the main function
2. `header.h` **Don't need to change this file**
  - .h extension means this is a **header** file.
  - Contains only function declarations, no function definitions
  - `#ifndef`, `#endif`, and `#define` are preprocessor keywords and they avoid redeclarations of the same function multiple times
  - header files are included in cpp files with `#include "header.h"'. 
3. `functions.cpp` **Do change this file**
  - This is the file with all function definitions
  - You need to write the body of all functions called in main
  
**Steps**:
1. Look at `sort_search.cpp` file. 
3. Write code in `functions.cpp` according to the description of each function in the function header - ** DO NOT CHANGE THE FUNCTION PROTOTYPES
4. Compile the program with command: `make`
5. Run the program with command: `./search_sort`
6. When you finished, run the program once with the command `./search_sort | tee out_lab4`. This will save the output 
of your program in a file called `out_lab4`.  
7. Update changes to your local repository. 
			
			git add out_lab4
			git commit -am "your message"

	
#### Commit to the online Assignment repository 

After you are done with your assignment you need to commit your changes to your github online repository so I can see them. Right now, all changes are local to your VM. 
	
		git push


**!USE WITH CARE**: If the online assignment repository was updated by me, type: `git pull` to update your local repository. BE CAREFUL. THIS WILL ERASE YOUR CODE. 






