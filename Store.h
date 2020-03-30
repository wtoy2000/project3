// CS1300 Spring 2020
// Author: Wesley Toy
// Recitation: 301 – Telly 
// Project 3 - Store Header

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;
#include "Companion.h"
#include "Player.h"

#ifndef PLAYER_H
#define PLAYER_H

class Store
{
    public:
    Store();
    void addPlayer(string username);
    double buyOxen(int oxenAmount);
    double buyFood(double foodAmount);
    double buyBullets(int bulletsAmount);
    double buyWagonParts(int wagonPartsAmount);
    double buyMedKits(int medKitsAmount);
    
    private:
    double priceMultiplier;
    double bill;
    Player P;
    
    
    
};
#endif
