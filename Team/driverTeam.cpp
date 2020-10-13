/*
    driverTeam.cpp = tests the functions of class Team
*/
#include "Team.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    Team team_default, my_team;
    // 1. Add code to declare a new Team object called 
    // team_default
    cout << "1. Test default constructor\n";
    cout << "\tteam_default object: " << endl;
    // 2. Add code to call the function display to show the values of team_default object

    // 3. Add code to declare a new Team object called my_team with any values you want
    cout << "2. Test specific constructor\n";
    cout << "\tmy_team object: " << endl;
    // 4. Add code to call the function display to show the values of my_team object

    cout << "3. Test setTeam function for team_default\n";
    // 5. Add code to call the function setTeam() and set the values of 
    // the team_default object to whatever values you want
    cout << "\tteam_default object: " << endl;
    // 6. Add code to call the function display to show the values of team_default object

    cout << "4. Test addWin function\n"; 
    // 7. Add code to call function addWin for my_team object
    cout << "\tmy_team object: " << endl;
    // 8. Add code to call the function display to show the values of my_team object
   
    cout << "5. Test addLoss function\n"; 
    // 9. Add code to call function addLoss for team_default object
    cout << "\tteam_default object: " << endl;
    // 10. Add code to call the function display to show the values of team_default object

    cout << "5. Test getPoints function\n"; 
    cout << "\tmy_team has " << my_team.getPoints() << endl;
    cout << "\tteam_default has " << team_default.getPoints() << endl;

    cout << "5. Test isBetter function\n"; 
    if (my_team.isBetter(team_default))
        cout << "\t my_team is better" << endl;
    else
        cout << "\t team_default is better" << endl;
}