all: param static dice
# compile demo_passing_parameters.cpp
random: demo_passing_parameters.cpp 
	g++ -o param demo_passing_parameters.cpp
# compile ex_static.cpp
input: ex_static.cpp
	g++ -o static ex_static.cpp
# compile dice
dice: play_dice.cpp dice.cpp
	g++ -o dice play_dice.cpp dice.cpp -I.
# delete executable files
clean: 
	$(RM) param
	$(RM) static
	$(RM) dice
