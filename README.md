Lab 1 - Primitive Data Types 

Preliminary steps: 

1. Open a terminal window on your machine, go to your CSC16 folder with the Vagrant file (use cd command)  and start your virtual machine (vm) in that folder by typing the following commands: 

		vagrant up
		
		vagrant ssh 

2. Type cd /vagrant. This folder is mapped onto your local CSC16 directory. Type ls -al to see its content. It will be the same content as CSC16 on your machine. Always type cd /vagrant when you start up your VM.

3. Clone the github classroom repository locally in /vagrant folder:
	
	a) Check that you are inside /vagrant folder: 
		
		Type: pwd
	
	b) In your browser accept the assignment:  <add link to the assignment>
	
	c)  Then login into your github account and you should see a new repository with 
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

A) 
	1) Open the the firstProgram.cpp file using the visual studio code editor.  
   	2) Compile the firstProgram.cpp by typing: 
		make firstProgram 
	3) Run the program by typing:
		./firstProgram 
	4) What do you observe about the value of  halfI. Change the expression on the right side of halfI = i/2 with alternatives (2) and (3) mentioned on the same line as comment. After each change  you make,  save the program, compile it and run it with different input value. What is the output in each case?  Do you see any differences?  Pay attention to the values you choose to run the program.

B) Compile your cpp file:
	
	a) Compile the file by itself. Use this when you have only one file to compile
		Type: g++  -o hello helloWorld.cpp
	
	b) Use makefile. Makefile contains a list of compile commands. Check the makefile file in /vanguard or in your CSC16 local directory.
	
	Content makefile 
		hello: helloWorld.cpp 
			g++ -o hello helloWorld.cpp
		clean: 
			$(RM) hello
		
	This compiles the helloWorld.cpp with the first 'target' called hello.
	Then the 'target' clean removes the executable file hello.
	
	You will learn more about writing makefiles to compile your code. Here is a short introduction: https://www.cs.swarthmore.edu/~newhall/unixhelp/howto_makefiles.html - You can check it later when we need more advanced compiling features. 

	To compile using makefile type: make in your VM assignment folder. 

	Then type: ls -l 
	You should see a new file called hello. This is your executable file. 
	
C) Run your executable file hello
	Type:  ./hello 
	
D) Update changes to your local repository 

	See changes you made to helloWorld.cpp 
	Type: git status
	
	You will see the following: 
	
	On branch master
	Your branch is up to date with 'origin/master'.
	
	Changes not staged for commit:
	  (use "git add <file>..." to update what will be committed)
	  (use "git checkout -- <file>..." to discard changes in working directory)
	
		modified:   helloWorld.cpp
	
	Untracked files:
	  (use "git add <file>..." to include in what will be committed)
	
		hello
	
	no changes added to commit (use "git add" and/or "git commit -a")

	You will see the helloWorld.cpp file marked as modified. 
	Then hello file as untracked - means that git does not 'know' about this file. 
	
	You can add files to your local git repository with command: git add file_name
	
	To commit changes to the local git repository type: git commit -a 
		A text editor will open - write a message that describes your change. In my case the nano editor opened. Save your changes with ctrl-o. Exit with ctrl-x. 

	It is a good practice to commit changes frequently. This allows you to return to a previous version. 
	
	Check with the command: git log the history of your commit messages. 
	
E) Update changes to your online repository - master branch 
	
	After you are done with your assignment then you need to commit your changes to the github online repository. Right now, all changes are local to your VM. 
	
	Type: git push

F)   If the online master repository was updated, type: git pull to update your local repository






