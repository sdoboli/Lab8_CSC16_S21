all: strings
# compile sort_search
strings: driver_string.cpp functions.cpp
	g++ -o strings driver_strings.cpp functions.cpp -I.
# delete executable files
clean: 
	$(RM) strings
