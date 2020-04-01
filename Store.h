// CS1300 Spring 2020
// Author: Wesley Toy
// Recitation: 301 – Telly 
// Project 3 - Store Header

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;
#include "Materials.h"


#ifndef STORE_H
#define STORE_H

class Store
{
    public:
    Store();
    void shop(Materials &);
    void setTotal(double bill_);
    double getTotal();

    
    private:
    double priceMultiplier;
    double bill;
    
    
};
#endif
