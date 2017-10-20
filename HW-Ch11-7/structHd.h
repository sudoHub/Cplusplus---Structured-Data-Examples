/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   structHd.h
 * Author: rcc
 *
 * Created on October 3, 2017, 12:57 PM
 */

#ifndef STRUCTHD_H
#define STRUCTHD_H

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

struct CustAcc {
    
    int sizeOf;
    string name;
    string city;
    string stName;
    string state;
    int adrsNum;    //Number for address
    int stNum;
    int zip;
    int acctBal;
    int phone;  
};


#endif /* STRUCTHD_H */

