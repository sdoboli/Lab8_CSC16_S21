all: sort_search
# compile sort_search
sort_search: sort_search.cpp functions.cpp
	g++ -o sort_search sort_search.cpp functions.cpp -I.
# delete executable files
clean: 
	$(RM) sort_search
