// CS1300 Spring 2020
// Author: Wesley Toy
// Recitation: 301 – Telly 
// Project 3 - Game Driver Header

#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include "Player.h"
#include "Materials.h"
#include "Store.h"
#include "Date.h"
#include "GameDriver.h"

using namespace std;

GameDriver g;

GameDriver::GameDriver()
{
    miles = 0;
    
}

void GameDriver::setMiles(int miles_)
{
    miles = miles + miles_;
}

int GameDriver::getMiles()
{
    return miles;
}

void GameDriver::setNames()
{
    cout<<"Welcome to Oregon Trail!"<<endl;
    cout<<"This program simulates a trip over the Oregon Trail from"<<endl;
    cout<<"Independence, Missouri to Oregon City, Oregon in 1847. Your family of 5"<<endl;
    cout<<"will cover the 2040 mile Oregon trail in 5-6 months... if you make it alive..."<<endl;
    cout<<endl;
    
    string tempName;
    
    cout<<"Please enter the first name of the wagon leader:"<<endl;
    cin>>tempName;
    P[0].setPlayerName(tempName);
    cout<<endl;
    
    cout<<"What are the names of the 4 other members?"<<endl;
    
    for(int i = 1; i < 5; i++)
    {
        cout<<"Please enter the name of player "<<(i+1)<<":"<<endl;
        cin>>tempName;
        P[i].setPlayerName(tempName);
        cout<<endl;
    }
    
    ifstream myFile;
    myFile.open("store.txt");
    
    if(myFile.is_open())
    {
        while(myFile)
        {
            string str;
            getline(myFile,str);
            cout<<str;
        }
    }
    
    myFile.close();
    cout<<endl;
}

void turns(Materials &materials1, Date d_)
{
    cout<<endl;
    cout<<"Status Update:"<<endl;
    cout<<"Miles traveled: "<<g.getMiles()<<endl;
    
    
    
}
