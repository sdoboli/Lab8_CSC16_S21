# from: https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/
all: test_dice dice_game
CC=g++
CFLAGS=-I.
DEPS = Dice.h  # dependencies 
OBJ_DICE = testDice.o Dice.o # name of object files 
OBJ_GAME = play_dice.o Dice.o

# compile all cpp files to an object file
%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)   
# -c compile 
# -o = output file (.o file) 
# $@ = item on the left of : (%.o)
# $< = first item in the list after : (%.cpp)

# link all object files into an executable file called test_dice
test_dice: $(OBJ_DICE)
	$(CC) -o $@ $^ $(CFLAGS)
# $@ = left side of : (team)
# $^ = right side of : $(OBJ)

dice_game: $(OBJ_GAME)
	$(CC) -o $@ $^ $(CFLAGS)

# delete executable files
clean: 
	$(RM) test_dice dice_game
	$(RM) *.o

