// CS1300 Spring 2020
// Author: Wesley Toy
// Recitation: 301 – Telly 
// Project 3 - Date Header



#include <iostream>
#include <string>
using namespace std;

#ifndef DATE_H
#define DATE_H

class Date
{
    public:
    Date()
    void setDate(int month_, int day_);
    int getDay();
    int getMonth();
    void userDate();
    void addDays(int days_);
    
    
    private:
    int days;
    int years;
    int month;

    
};
#endif
