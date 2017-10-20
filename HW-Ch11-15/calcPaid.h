/* 
 * File:   calcPaid.h
 * Author: Brandon West
 * Created on October 5, 2017, 7:16 PM
 */

#ifndef CALCPAID_H
#define CALCPAID_H
struct HrPaid
{
    int hoursWork;		//Total hours worked
    float hourlyRate;	//Hourly rate of worker
    float totalPay;		//Calculated hourly pay
};

struct SalyPd
{
    float salary;		//Salary per year
    float bonus;		//Applied bonus
    float totalPaySal;	//Calculated salary pay
};


#endif /* CALCPAID_H */

