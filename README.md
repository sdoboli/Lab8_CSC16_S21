Lab 1 - Primitive Data Types 

Preliminary steps: 

1. Open a terminal window on your machine, go to your CSC16 folder with the Vagrant file (use cd command)  and start your virtual machine (vm) in that folder by typing the following commands: 

		vagrant up
		
		vagrant ssh 

2. Type cd /vagrant. This folder is mapped onto your local CSC16 directory. Type ls -al to see its content. It will be the same content as CSC16 on your machine. Always type cd /vagrant when you start up your VM.

3. Clone the github classroom repository locally in /vagrant folder:
	
	a) Check that you are inside /vagrant folder: 
		
		Type: pwd
	
	b) In your browser go to the lab link posted on Blackboard.
	
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
	1) Open the the firstProgram.cpp file using the visual studio code editor. Look at the code. 
	2) Choose at least two testing values for i. Write down the expected output of the program
   	3) Compile the firstProgram.cpp by typing: 
		make firstProgram 
	4) Run the program repeatedly for each testing value you chose:
		./firstProgram |tee -a out_firstProgram
	5) What do you observe about the value of halfI. 
	6) Change the expression on the right side of halfI = i/2 with alternatives 2) and (3) mentioned on the same line as 
	comment. For each alternative save the program, compile it (see 2) and run it (3) with the same testing values you chose
	at 2. Do you see any differences?  If not, go back to 1 and change your testing values. Type: "rm out_firstProgram" to
	delete the output of the program so far and repeat 3 - 6.

D) Update changes to your local repository 

	Type: git status
	
	You will see the following: 
	
	On branch master
	Your branch is up to date with 'origin/master'.
	
	Changes not staged for commit:
	  (use "git add <file>..." to update what will be committed)
	  (use "git checkout -- <file>..." to discard changes in working directory)
	
		modified:   firstProgram.cpp
	
	Untracked files:
	  (use "git add <file>..." to include in what will be committed)
	
		hello
	
	no changes added to commit (use "git add" and/or "git commit -a")

	You will see the firstProgram.cpp file marked as modified. 
	Then firstProgram and out_firstProgram files as untracked - means that git does not 'know' about these files. 
	
	Add out_firstProgram file to your local git repository with command: git add out_firstProgram
	
	To commit changes to the local git repository type: git commit -a 
	A text editor will open 
		- write a message that describes your 'change. In my case the nano editor opened. For example write: "Changed firstProgram.cpp" . Save your changes with ctrl-o. 		Exit with ctrl-x. 

	It is a good practice to commit changes frequently. This allows you to return to a previous version. 
	
	Check with the command: git log the history of your commit messages. 
	
E) Update changes to your online repository - master branch 
	
	After you are done with your assignment then you need to commit your changes to the github online repository. Right now, all changes are local to your VM. 
	
	Type: git push

F)   If the online master repository was updated, type: git pull to update your local repository






