// CS1300 Spring 2020
// Author: Wesley Toy
// Recitation: 301 – Telly 
// Project 3 - Material Header

#include <iostream>
#include <string>
using namespace std;


#ifndef MATERIALS_H
#define MATERIALS_H

class Materials
{
    
    public:
    Materials();
    
    void setMoney(double moneyAmount);
    double getMoney();
    
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
    
    double money;
    int food;
    int wagonParts;
    int oxen;
    int bullets;
    int medKits;
    
    
};
#endif
