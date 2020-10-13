#include <string>
#include <iostream>
using namespace std;

#ifndef TEAM
#define TEAM
class Team
{
    private: // declare private data members
        string name;  
        int num_players;  // number of players
        int num_wins;     // number of wins
        int num_losses;   // number of losses

    public: // declare function members
        Team(); // default constructor
        Team(string new_name, int new_players, int new_wins = 0, int new_losses = 0); // specific constructor
        void setTeam(string other_name, int other_players, int other_wins, int other_losses); 

        void display() const; // accessor function 
	void addWin();  
	void addLoss(); 
	bool isBetter(const Team &other) const; // accessor function - look at the similar function in the Dice.cpp 
	int getPoints() const; // accessor function
};
#endif
