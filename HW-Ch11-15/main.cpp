/* 
 * File:   main.cpp
 * Author: sudoCode
 *
 * Created on October 5, 2017, 7:08 PM
 */
#include "calcPaid.h"
#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototype
HrPaid calcHrPd(HrPaid);
SalyPd calcSlryPd(SalyPd);

/************************************************************************
 * Function Definition:
 * Get hourly worker info. Return calculated pay stub
 ************************************************************************/
HrPaid calcHrPd(HrPaid payStub)
{
    HrPaid tmpTotl;

    cout << "Enter hours worked: " << endl;
    cin >> payStub.hoursWork;

    cout << "Enter hourly pay: " << endl;
    cin >> payStub.hourlyRate;

    tmpTotl.totalPay = payStub.hoursWork * payStub.hourlyRate;

    return tmpTotl;
}

/************************************************************************
 * Function Definition:
 * Get salary worker info. return calculated pay stub
 ************************************************************************/

SalyPd calcSlryPd(SalyPd paySal)
{
    cout << "Enter Salary: " << endl;
    cin >> paySal.salary;
    cout << "Enter Bonus: " << endl;
    cin >> paySal.bonus;

    paySal.totalPaySal = paySal.salary + paySal.bonus;

    return paySal;
}

int main()
{
    HrPaid hourPay;
    SalyPd salPay;

    int choose;

    cout << "Worker Hourly or Salary?" << endl;
    cout << "1. Hourly Worker " << endl
             << "2. Salary Worker " << endl;
    cin >> choose;

    switch (choose)
    {
    case 1: hourPay = calcHrPd(hourPay);
                    break;
    case 2: salPay = calcSlryPd(salPay);
                    break;
    default: cout << "Please enter number 1 or 2." << endl;
    }

    //Output:
    cout << setprecision(2) << fixed << showpoint << endl;
    if (choose == 1)
    {
            cout << "Total Pay: " << endl;
            cout << "$" << hourPay.totalPay;
    }
    else
    {
            cout << "Total Salary Paid: " << endl;
            cout << "$" << salPay.totalPaySal << endl;
    }

    return 0;
}
