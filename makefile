all: recursion
# compile sort_search
recursion: driver.cpp functions.cpp
	g++ -o recursion driver.cpp functions.cpp -I.
# delete executable files
clean: 
	$(RM) recursion
