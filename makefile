all: midterm
# compile midterm
midterm: driver.cpp functions.cpp
	g++ -o midterm driver.cpp functions.cpp -I.
# delete executable files
clean: 
	$(RM) midterm
