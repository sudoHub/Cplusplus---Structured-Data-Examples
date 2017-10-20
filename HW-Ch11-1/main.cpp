/* 
 * File:   main.cpp
 * Author: Brandon West
 * Created on October 6, 2017, 10:03 AM
 * 
 * Purpose: This program stores two variables with MovieData data type and 
 * passes each one to a function that displays the information. In two 
 * different methods.
 */

#include "movieData.h"

//Function Prototype
void outMovi(MovData,MovData);

/*
 * Function Definition:
 * Display movie data. 2nd method.
 */
//Method One
void output(MovData md){
    cout << md.title<<endl;
    cout << md.direct<<endl;
}

int main()
{
    MovData movOne;
    MovData movie2;

    movOne.title = "Fight Club";
    movie2.title = "Step Brother";

    outMovi(movOne ,movie2 );

    //Call function method one
    output(movOne);

    return 0;
}

/*
 * Function Definition:
 * Display movie data.
 */
void outMovi(MovData title1,MovData title2)
{
    cout << title1.getString() << endl;
    cout << title2.getString() <<endl;
}

//Method Two
string MovData::getString(){
    string result = "";
    result += title;
    result += " ";
    result += direct;
    result += " ";

    return result;
}