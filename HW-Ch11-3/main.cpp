/* 
 * File:   main.cpp
 * Author: Brandon West
 *
 * Created on October 3, 2017, 11:15 AM
 * Purpose: This program asks user to enter sales for each division, and then
 * calculates the average of total sales of the divisions.
 */

#include "dvSales.h"

int main()
{
    int totQtrs = 4;                    //Number of quarters
    int totDiv = 4;                     //Number is divisions    
    
    dvSales east[totQtrs];		//East division sales
    dvSales west[totQtrs];		//West division sales
    dvSales north[totQtrs];		//north division sales
    dvSales south[totQtrs];		//South division sales

    float salsTot;

    cout << "Please enter sales for each quarter: " << endl;

    //Get East Division sales
    cout << "EAST: " << endl;
    for (int i = 0; i < totQtrs; i++)
    {
            cout << "QTR Sales " << i + 1 << endl;
            cin >> east[i].sales;
    }
    //Get West Division sales
    cout << "WEST: " << endl;
    for (int i = 0; i < totQtrs; i++)
    {
            cout << "QTR Sales " << i + 1 << endl;
            cin >> west[i].sales;
    }
    //Get North Division sales
    cout << "NORTH: " << endl;
    for (int i = 0; i < totQtrs; i++)
    {
            cout << "QTR Sales " << i + 1 << endl;
            cin >> north[i].sales;
    }
    //Get South Division sales
    cout << "SOUTH: " << endl;
    for (int i = 0; i < totQtrs; i++)
    {
            cout << "QTR Sales " << i + 1 << endl;
            cin >> south[i].sales;
    }

    for (int i = 0; i < totQtrs; i++)
    {
            //Add sales of all divisions
            salsTot = east[i].sales += west[i].sales += north[i].sales +=
                                     south[i].sales;
    }
    //Output average
    cout << setprecision(2) << fixed << showpoint << endl;
    cout << salsTot / totDiv << endl;

    return 0;
}

