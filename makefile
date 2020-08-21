all: lab1_1 lab1_2
# compile lab1_1
lab1_1: lab1_1.cpp 
	g++ -o lab1_1 lab1_1.cpp
# compile lab1_2
lab1_2: lab1_2.cpp
	g++ -o lab1_2 lab1_2.cpp
# delete executable files
clean: 
	$(RM) lab1_1
	$(RM) lab1_2
