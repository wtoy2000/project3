// CS1300 Spring 2020
// Author: Wesley Toy
// Recitation: 301 – Telly 
// Project 3 - Materials Functions

#include <iostream>
#include <string>
#include "Materials.h"
using namespace std;


Materials::Materials()
{
    money = 1000;
    food = 0;
    wagonParts = 0;
    oxen = 0;
    bullets = 0;
    medKits = 0;
}

void Materials::setFood(double amount)
{
    food = food + amount;
}

int Materials::getFoodAmount()
{
    return food;
}

void Materials::setMoney(double moneyAmount)
{
    money = money + moneyAmount;
}

double Materials::getMoney()
{
    return money;
}


void Materials::setWagonParts(int amount_)
{
    wagonParts = wagonParts + amount_;
}

int Materials::getWagonParts()
{
    return wagonParts;
}

void Materials::setOxen(int yokes_)
{
    oxen = oxen + yokes_;
}

int Materials::getOxen()
{
    return oxen;
}

void Materials::setBullets(int amount_)
{
    bullets = bullets + amount_;
}

int Materials::getBullets()
{
    return bullets;
}

void Materials::setMedical(int amount_)
{
    medKits = medKits + amount_;
}

int Materials::getMedical()
{
    return medKits;
}


