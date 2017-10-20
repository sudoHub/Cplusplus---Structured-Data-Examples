/* 
 * File:   main.cpp
 * Author: Brandon West
 * Created on October 3, 2017, 6:14 PM
 * 
 * Purpose: Collect weather data, calculate highest, lowest temperatures and 
 * finds total average rainfall. Using Enumerators.
 */

#include "Stats.h"
#include <cstdlib>

using namespace std;

enum ToMonth {JANUARY,FEBUARY,MARCH,APRIL,MAY,JUNE,JULY,AUGUST,SEPTEMBER,
              OCTOBER,NOVEMBER,DECEMBER};

int main(int argc, char** argv) {

    int size  = 12;
    Weather month[size];
    Weather result;
    ToMonth count;
    
    cout << "Enter temperature for each month:  " << endl;
    for (count = JANUARY; count <= MARCH;
         count = static_cast<ToMonth>(count + 1))
    {
    cout << count + 1 << ":";
    cin >> month[count].avgTemp;
    }
    cout << "Enter total rainfall for each month: " << endl;
    
    for (count = JANUARY; count <= MARCH;
         count = static_cast<ToMonth>(count + 1))
    {
    cout << count + 1 << ":";
    cin >> month[count].totRain;
    }
   
    //Find lowest/highest temperature
    result.tempLow = month[0].avgTemp;
    result.tempHgh = month[size].avgTemp;
    
    
    for(count = JANUARY; count <= MARCH;
         count = static_cast<ToMonth>(count + 1))
    {
        if(month[count].avgTemp < result.tempLow)
        {
            result.tempLow = month[count].avgTemp;
        }
        else if (month[count].avgTemp > result.tempHgh)
        {
            result.tempHgh  = month[count].avgTemp;
        }
    }
    
     //Calculate average temperature
    result.avgTemp = 0;
    for(count = JANUARY; count <= MARCH;
         count = static_cast<ToMonth>(count + 1))
    {
        result.avgTemp += month[count].totRain;
    }
    
    //Output results
    cout << "Lowest Temp: " << result.tempLow << endl;
    cout << "highest Temp: " << result.tempHgh << endl; 

    cout << "The average monthly rainfall: " << endl;
    cout << setprecision(2) << fixed;
    cout << result.avgTemp / size;
    
    return 0;
}