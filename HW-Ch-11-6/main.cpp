/* 
 * File:   main.cpp
 * Author: Brandon West
 * Created on October 5, 2017, 6:59 PM
 * Purpose: This program asks user to enter name, player number, and points 
 * scored.Program calculates total points scores from all teams, then displays
 * the roster, and total points scored.
 */
#include "Player.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//struct Players
//{
//    string name;	//Player name
//    int plyrNum;	//Player Number
//    float scredPts;     //Player points scored
//};

int main()
{
    int numTeam = 2;		//Number of teams
    Players teams[numTeam];
    
    int totPts;
    int i;

    totPts = 0;

    cout << "Enter Player Info: " << endl;

    //Get player info
    for (i = 0; i < numTeam; i++)
    {
            cout << "Name: " <<endl;
            getline(cin,teams[i].name);

            cout << "Player Number: " << endl;
            cin >> teams[i].plyrNum;

            cout << "Points Scored: " << endl;
            cin >> teams[i].scredPts;
            cin.ignore();
    }

    //Total points
    for (i = 0; i < numTeam; i++)
    {
            totPts += teams[i].scredPts;
    }

    //Output Roster
    for (i = 0; i < numTeam; i++)
    {
            cout << "Name: " << teams[i].name << endl;
            cout << "Player Number: " << teams[i].plyrNum << endl;
            cout << "Points Scored: " << teams[i].scredPts << endl;
            cout << endl;
    }
    cout << "Total Points Scored: " << endl;
    cout << totPts;

    return 0;
}