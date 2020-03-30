// CS1300 Spring 2020
// Author: Wesley Toy
// Recitation: 301 – Telly 
// Project 3 - Player Header



#include <iostream>
#include <string>
using namespace std;
#include "Companion.h"

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
    
    public:
    Player();
    void setPlayerName(string name_);
    
    void setMoney(double moneyAmount);
    double getMoney();
    
    void addCompanion(string name_, int index);
    string getCompanion(int index);
    
    void setFood(double amount);
    int getFoodAmount();
    
    void setWagonParts(int amount_);
    int getWagonParts();
    
    void setOxen(int yokes_);
    int getOxen();
    
    void setBullets(int amount_);
    int getBullets();
    
    void setMedical(int amount_);
    int getMedical();
    
    
    private:
    
    string name;
    double money;
    int food;
    int wagonParts;
    int oxen;
    int bullets;
    int medKits;
    Companion C[4];

    
    
    
};
#endif
