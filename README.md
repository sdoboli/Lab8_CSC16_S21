# Lab 1 - Primitive Data Types 

## Preliminary steps: 

1. Open a terminal window on your machine, go to your CSC16 folder with the Vagrant file (use cd command)  and start your virtual machine (vm) in that folder by typing the following commands: 

		vagrant up
		
		vagrant ssh 

2. Type `cd /vagrant>`. This folder is mapped onto your local CSC16 directory. Type ls -al to see its content. It will be the same content as CSC16 on your machine. Always type `cd /vagrant` when you start up your VM.

3. Clone the github classroom repository locally in /vagrant folder:
	
	a) Check that you are inside /vagrant folder. Type: `pwd`
	
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

1) Open the lab1_1.cpp file using the visual studio code editor. Look at the code. 
2) Compile the lab1_1.cpp by typing: `make lab1_1`
3) Add code for each comment line with add code. You can compile and run the program at any time with:
	`make lab1_1  && ./lab1_1`
4) When you finished, run the program with the following command. This will save the output of the file in a file called 
out_lab1_1.
	`./lab1_1 |tee -a out_lab1_1`
5) Update changes to your local repository Type: `git status`
You will see the following: 
	
	On branch master
	Your branch is up to date with 'origin/master'.
	
	Changes not staged for commit:
	  (use "git add <file>..." to update what will be committed)
	  (use "git checkout -- <file>..." to discard changes in working directory)
	
		modified:  lab1_1.cpp
	
	Untracked files:
	  (use "git add <file>..." to include in what will be committed)
	
		lab1_1
		out_lab_1
	
	no changes added to commit (use "git add" and/or "git commit -a")

You will see the lab1_1.cpp file marked as modified. Then lab1_1 and out_lab1_1 files as untracked - meanining that git does not 'know' about these files. Add out_firstProgram file to your local git repository with command: `git add out_firstProgram`
	
To commit changes to the local git repository type: `git commit -a `
A text editor will open. Write a message that describes your 'change. In my case the nano editor opened. For example write: "Changed firstProgram.cpp" . Save your changes with ctrl-o. Exit with ctrl-x. 

It is a good practice to commit changes frequently. This allows you to return to a previous version. 
	
Check with the command: `git log` the history of your commit messages. 

B) 


E) Update changes to your online repository - master branch After you are done with your assignment then you need to commit your changes to the github online repository. Right now, all changes are local to your VM. 
	
	Type: git push

F)   If the online master repository was updated, type: `git pull` to update your local repository






