# from: https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/
all: test_classes
CC=g++
CFLAGS=-I.
DEPS = header.h  # dependencies 
OBJ = test_classes.o  money_functions.o account_functions.o # name of object files 

# compile all cpp files to an object file
%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)   
# -c compile 
# -o = output file (.o file) 
# $@ = item on the left of : (%.o)
# $< = first item in the list after : (%.cpp)

# link all object files into an executable file called test_classes
test_classes: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
# $@ = left side of : (test_classes)
# $^ = right side of : $(OBJ)

# delete executable files
clean: 
	$(RM) test_classes
	$(RM) *.o

