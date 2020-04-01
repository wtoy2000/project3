// CS1300 Spring 2020
// Author: Wesley Toy
// Recitation: 301 – Telly 
// Project 3 - Game Driver Header

#include <iostream>
#include <string>
#include <cmath>
#include "Player.h"
#include "Materials.h"
#include "Store.h"
#include "Date.h"
using namespace std;

#ifndef GAMEDRIVER_H
#define GAMEDRIVER_H

class GameDriver
{
    
    public:
    GameDriver();
    void setNames();
    void setMiles(int miles_);
    int getMiles();
    void turns(Materials &, Date d);
    void misfortunes(Materials &);
    void raiders(Materials &);
    void milestones(Materials &, Store &);
    void results(Materials &, Store &);
   
    
    private:
    Date date1;
    int miles;
    Store s;
    Player P[5];
    
    
    
    
};
#endif
