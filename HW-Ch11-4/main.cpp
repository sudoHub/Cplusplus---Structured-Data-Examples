/* 
 * File:   main.cpp
 * Author: Brandon West
 * Created on October 3, 2017, 6:14 PM
 * 
 * Purpose: Collect weather data, calculate highest, lowest temperatures and 
 * finds total average rainfall.
 */

#include "Stats.h"
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {

    int size  = 12;     //Total months
    Weather month[size];
    Weather result;
    
    cout << "Enter temperature for each month:  " << endl;
    for (int i = 0;i < size;i++)
    {
    cout << i + 1 << ":";
    cin >> month[i].avgTemp;
    }
    cout << "Enter total rainfall for each month: " << endl;
    
    for (int i = 0;i < size;i++)
    {
    cout << i + 1 << ":";
    cin >> month[i].totRain;
    }
   
    //Find lowest/highest temperature
    result.tempLow = month[0].avgTemp;
    result.tempHgh = month[size].avgTemp;
    
    
    for(int i = 1;i < size;i++)
    {
        if(month[i].avgTemp < result.tempLow)
        {
            result.tempLow = month[i].avgTemp;
        }
        else if (month[i].avgTemp > result.tempHgh)
        {
            result.tempHgh  = month[i].avgTemp;
        }
    }
    
     //Calculate average temperature
    result.avgTemp = 0;
    for(int i = 0;i < size;i++)
    {
        result.avgTemp += month[i].totRain;
    }
    cout << "Lowest Temp: " << result.tempLow << endl;
    cout << "highest Temp: " << result.tempHgh << endl; 

    cout << "The average monthly rainfall: " << endl;
    cout << setprecision(2) << fixed;
    cout << result.avgTemp / size;
    
    return 0;
}