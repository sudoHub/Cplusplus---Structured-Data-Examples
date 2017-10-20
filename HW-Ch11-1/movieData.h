/* 
 * File:   movieData.h
 * Author: Brandon West
 * Created on October 6, 2017, 10:06 AM
 */

#ifndef MOVIEDATA_H
#define MOVIEDATA_H

#include <iostream>
#include <string>
using namespace std;

struct MovData
{
    //private members
    string title;
    string direct;
    int yrRelse;
    float runMinutes;

    //public methods
    string getString();
};


#endif /* MOVIEDATA_H */

