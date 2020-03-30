#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

Player::Player()
{
    name = "";
    food = 0;
    money = 1200;
    wagonParts = 0;
    bullets = 0;
    medKits = 0;
    
    for(int i = 0; i < 4; i++)
    {
        C[i].setCompanion("");
    }
    
}

void Player::setPlayerName(string name_)
{
    name = name_;
}

void Player::setFood(double amount)
{
    food = food + amount;
}

void Player::setMoney(double moneyAmount)
{
    money = money + moneyAmount;
}

double Player::getMoney()
{
    return money;
}


void Player::addCompanion(string name_, int index)
{
    C[index].setCompanion(name_);
}

string Player::getCompanion(int index)
{
    return C[index].getCompanionName();
}


int Player::getFoodAmount()
{
    return food;
}

void Player::setWagonParts(int amount_)
{
    wagonParts = wagonParts + amount_;
}

int Player::getWagonParts()
{
    return wagonParts;
}

void Player::setOxen(int yokes_)
{
    oxen = oxen + yokes_;
}

int Player::getOxen()
{
    return oxen;
}

void Player::setBullets(int amount_)
{
    bullets = bullets + amount_;
}

int Player::getBullets()
{
    return bullets;
}

void Player::setMedical(int amount_)
{
    medKits = medKits + amount_;
}

int Player::getMedical()
{
    return medKits;
}


