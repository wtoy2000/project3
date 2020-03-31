// CS1300 Spring 2020
// Author: Wesley Toy
// Recitation: 301 – Telly 
// Project 3 - Date Functions

#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

Date::Date()
{
    month = 0;
    days = 0;
    years = 1847;
}

void Date::setDate(int month_,int days_)
{
    month = month_;
    days = days_;
}

int Date::getDay()
{
    return days;
}

int Date::getMonth()
{
    return month;
}

void Date::userDate()
{
    cout<<"Would you like to start on 3/28/1847 or choose your own date? (Must start between March and May)"<<endl;
    cout<<"Press Y to start on 3/28/1847 or N to pick your own date."<<endl;
    char option;
    cin>>option;
    
    if(option == 'y' || option == 'Y')
    {
        setDate(3,28);
        cout<<"You will start on 3/28/1847!"<<endl;
    }
    
    else if(option == 'n' || option == 'N')
    {
        int tempMonth;
        cout<<"Please pick a month:"<<endl;
        cin>>tempMonth;
        
        while(tempMonth < 3  || tempMonth > 5)
        {
            cout<<"Invalid month, pick again:"<<endl;
            cin>>tempMonth;
        }
        
        month = tempMonth;
        
        int tempDay;
        cout<<"Please pick a day:"<<endl;
        cin>>tempDay;
        
        while(tempDay <= 0 || tempDay > 31)
        {
            cout<<"Invalid day, pick again:"<<endl;
            cin>>tempDay;
        }
        
        day = tempDay;
        
        setDate(tempMonth,tempDay);
        
        cout<<"You have chosen "<<getMonth()<<"/"<<getDay()<<"/1847 as your starting day."<<endl;
        
    }
}

void Date::addDays(int days_)
{
    days = days + days_;
    
    if(month == 3 || month == 5 || month == 7 || month == 9 || month == 11)
    {
        if(days > 31)
        {
            days = days - 31;
            month++;
        }
    }
    
    if(month == 4 || month == 6 || month == 8 || month == 10)
    {
        if(days > 30)
        {
            days = days - 30;
            month++;
        }
    }
    
    
    
    
}
