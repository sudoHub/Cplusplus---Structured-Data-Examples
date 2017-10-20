/* 
 * File:   main.cpp
 * Author: Brandon West
 * Created on September 30, 2017, 2:10 PM
 * Purpose: Enter, View, edit customer account data using structures
 */
#include "structHd.h"

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

//Function prototype
void addAccnt (CustAcc *,int);
void chgAccnt (CustAcc *,int);
void viewPay (CustAcc *,int);

int main(int argc, char** argv) {

    int size = 5;
    CustAcc arry;
    CustAcc *currntP;
    
    int choice = 0;
    
    cout << "Customer Account INFO: " << endl;
    
    cout << "1. Add account" << endl
         << "2. Change account " << endl
         << "3. View payments " << endl;
    cin >> choice;
    cin.ignore();
    
    switch (choice)
    {
        case 1: cout << "How many accounts would you like to add? ";
                cin >> size;
                cin.ignore();
                currntP = new CustAcc[size];
                addAccnt(currntP,size);
                break;
        case 2: chgAccnt(currntP,size);
                break;
        case 3: //viewPay(currntP);
                break;
        default: cout << "Enter number between 1-3" << endl;
        }
    
    return 0;
}

/*Function prototype: 
 *Add account data
 */
void addAccnt (CustAcc *currntP,int size){
    cout << "To add a new accounts \nplease enter the following info: " << endl;
    for (int i = 0;i < size;i++)
    {
        cout << "Customer name: ";
        getline(cin,currntP[i].name);

        cout << "Street number: ";
        cin >> currntP[i].stNum;
        cin.ignore();

        cout << "Street name: ";
        getline(cin,currntP[i].stName);

        cout << "City: ";
        cin >> currntP[i].city;
        cout << "State: ";
        cin >> currntP[i].state;
        cout << "ZIP code: ";
        cin >> currntP[i].zip;
        cout << "Phone number: ";
        cin >> currntP[i].phone;
        cin.ignore();
    }
}

/*Function prototype: 
 * Change account data
 */
void chgAccnt (CustAcc *currntP,int size){
    int choose = 0; //For menu system
    int numChg = 0; //Number of changes
    
    cout << "Enter what you want to change: ";
    cout << "1. Name "
         << "2. Address "
         << "3. Phone ";
    cin >> choose;
    cin.ignore();
    
    switch (choose)
    {
        case 1: cout << "How many names? ";
                cin >> numChg;
                cin.ignore();
                for (int i = 0;i < numChg;i++)
                {
                    cout << "Enter name: " << endl;
                    getline(cin,currntP[i].name);
                }
                break;
        case 2: cout << "How many address? ";
                cin >> numChg;
                cin.ignore();
                for (int i = 0;i < numChg;i++)
                {
                    cout << "Enter Street number: " << endl;
                    currntP[i].stNum;
                    cin.ignore();
                    
                    cout << "Street name: ";
                    getline(cin,currntP[i].stName);

                    cout << "City: ";
                    cin >> currntP[i].city;
                    cout << "State: ";
                    cin >> currntP[i].state;
                    cout << "ZIP code: ";
                    cin >> currntP[i].zip;
                    cin.ignore();
                }
                break;
        case 3: cout << "How many phone numbers? ";
                cin >> numChg;
                cin.ignore();
                for (int i = 0;i < numChg;i++)
                {
                    cout << "Enter Phone numbers: " << endl;
                    cin >> currntP[i].phone;
                }
                break;
        default: break;
    }
    
}

/*Function prototype: 
 * View account data
 */
void viewPay (CustAcc *currntP,int size){
    int choose = 0;
    cout << "Enter what you want to view: ";
    cout << "1. Name "
         << "2. Address "
         << "3. Phone ";
    cin >> choose;
    cin.ignore();
    
    switch (choose)
    {
        case 1: for (int i = 0;i < size;i++)
                {
                    cout << "Name: " << currntP[i].name << endl;
                }
        case 2: for (int i = 0;i < size;i++)
                {
                    cout << "Address: " << endl;
                    cout << currntP[i].stNum << endl
                         << currntP[i].stName << endl
                         << currntP[i].city << endl
                         << currntP[i].state << endl
                         << currntP[i].zip;
                }
        case 3: for (int i = 0;i < size;i++)
                {
                    cout << "Phone: " << currntP[i].phone << endl;
                }
    }  
}