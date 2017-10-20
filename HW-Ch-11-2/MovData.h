/* 
 * File:   MovData.h
 * Author: Brandon West
 *
 * Created on October 6, 2017, 11:08 AM
 */

#ifndef MOVDATA_H
#define MOVDATA_H

#include <iostream>
#include <string>
using namespace std;



struct MovData
{
	//private members
	string title;			//Movie Title
	string directr;		//Movie director
	int yrRelse;		//Release year
	int runTime;			//length of movie
	float pdCosts;		//Production costs
	int frstYrRv;		//First year revenue
};


#endif /* MOVDATA_H */

