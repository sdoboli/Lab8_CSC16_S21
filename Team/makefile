# from: https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/
all: team
CC=g++
CFLAGS=-I.
DEPS = Team.h  # dependencies 
OBJ_TEAM = driverTeam.o Team.o # name of object files 

# compile all cpp files to an object file
%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)   
# -c compile 
# -o = output file (.o file) 
# $@ = item on the left of : (%.o)
# $< = first item in the list after : (%.cpp)

# link all object files into an executable file called team
team: $(OBJ_TEAM)
	$(CC) -o $@ $^ $(CFLAGS)
# $@ = left side of : (team)
# $^ = right side of : $(OBJ)


# delete executable files
clean: 
	$(RM) team 
	$(RM) *.o

