# compile firstProgram.cpp
firstProgram: firstProgram.cpp
        g++ -o firstProgram firstProgram.cpp

clean: 
	$(RM) firstProgram
