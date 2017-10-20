/* 
 * File:   main.cpp
 * Author: Brandon West
 *
 * Created on October 6, 2017, 11:04 AM
 * Purpose:  This program alters program #1 to display two additional members 
 * that hold the movie's production costs and first-year revenue. It then
 * outputs the  title, director, release year, running time, and first
 * years profit or loss.
 */

#include "MovData.h"

//Function Prototype
void output(MovData);

/*
 * Method One Function definition:
 * Outputs movie data
*/
void output(MovData md){

    cout << "Title: " << md.title << endl;
    cout << "Director: " << md.directr << endl;
    cout << "First Year Revenue: " << md.frstYrRv << endl;
    cout << "Release Year: " << md.yrRelse << endl;
    cout << "Run-Time: "  << md.runTime << " Min." << endl;
}

int main()
{
    MovData movOne;	//First movie data type
    MovData movieTwo;	//Second movie

    //Initialize
    movOne.title = "Fight Club";
    movOne.directr = "David Fincher";
    movOne.yrRelse = 1999;
    movOne.frstYrRv = 10000000;
    movOne.runTime = 139;

    movieTwo.title = "Step Brother";

    //Call function method one
    output(movOne);

    return 0;
}
