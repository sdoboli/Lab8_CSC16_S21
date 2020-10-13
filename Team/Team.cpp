/*
    Team.cpp - this file contains the definition of all function members of class
    Team
*/
#include "Team.h"
#include <iostream>
#include <string>
using namespace std;

/* Team() Default constructor 
   Purpose: initialize a new Team object with 
            default values: name ="", num_players = 0, num_wins = 0, num_losses = 0)
    Inputs: none
    Outputs: none
    Preconditions: none
    Postconditions: A new Team object is instantiated with default values. 
*/
Team::Team()
{
    cout << "Inside default constructor" << endl;
}

/* 
	Team(const string newName, int newPlayers) Specific constructor
    Purpose: initialize a new Team object with specific
             name, players, wins and losses. 
    Inputs: new_name, new_players, new_wins, new_losses
    Preconditions: all values: new_players, new_wins, new_losses >=0
    Postconditions: the new Team object will be instantiated with the new values.
    Call setTeam() in the specific constructor. setTeam() sets new values to 
    the data members of an existing object 
*/
Team::Team(string new_name, int new_players, int new_wins, int new_losses)
{
    cout << "Inside specific constructor" << endl;

}

/*
	void setTeam(string other_name, int other_players, int other_wins, int other_losses)
    Purpose: Changes the data members of an existing team:
    Inputs: new values for all data members
    Outputs: none
    Preconditions: all new_players, new_wins, new_losses >=0
    Postcondition: calling Team object will have other_name, other_players, ...
    
    Called as: old_team.setTeam("new_name", 10, 2, 3);
*/
void  Team::setTeam(string other_name, int other_players, int other_wins, int other_losses)
{

}

/*
	void display()
    Purpose: displays information about the team (name, number of players,
	        number of wins, losses and number of points.
    Inputs/Outputs none
    Precondition/Postcondition: none
*/
void Team::display() const // accessor function 
{

}
/*
	void addWin() 
    Purpose: increment the number of wins by one
    Inputs/Outputs none
    Precondition/Postcondition: none
*/
void Team::addWin()  // mutator function
{

}
/*
	void addLoss() 
    Purpose: increment the number of losses by one.
    Inputs/Outputs none
    Precondition/Postcondition: none
*/
void Team::addLoss() // mutator function
{

}
/*
	bool isBetter(const Team &other) const
    Purpose: compares two team objects: 
            returns true if the calling object has more points than 
            the object other. 
            You can define what 'more points' means for your sport.
            You can call the function getPoints() to get the number of points
    Inputs: a Team object passed by reference (reference to a constant object = 
            means that the object other cannot be modified inside Team)
    Outputs: bool
    Precondition/Postcondition: none
*/
bool Team::isBetter(const Team &other) const
{
    return true;
}
/*
	int getPoints()
    Purpose: returns the number of points the calling team has 
            (a cumulative score depending on the number of losses and wins).
    Inputs: none
    Outputs: an integer value with number of points
    Preconditions/postconditions - none 
*/
int Team::getPoints() const
{
    return 0;
}  