// CS1300 Spring 2020
// Author: Wesley Toy
// Recitation: 301 – Telly 
// Project 3 - Store Functions

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;
#include "Companion.h"
#include "Player.h"

Store::Store()
{
    priceMultiplier = 1.00;
    bill = 0;

}

void Store::addPlayer(string username)
{
    P.setPlayerName(username);
    P.setMoney(1000);
    P.setOxen(0);
    P.setFood(0);
    P.setBullets(0);
    P.setWagonParts(0);
    P.setMedical(0);
    
}

double Store::buyOxen(int oxenAmount)
{
    if((oxenAmount * 40) < 100 || (oxenAmount * 40) > 200)
    {
        cout<<"Must purchase between $100 and $200 of oxen."<<endl;
        
        return;
    }
    
    if(P.getMoney() < (oxenAmount * 40))
    {
        cout<<"Not enough money."<<endl;
        
        return;
    }
    
    else
    {
        P.setOxen(oxenAmount);
        P.setMoney((oxenAmount * 40));
        bill = bill + (oxenAmount * 40);
        cout<<"Total Bill: $"<<bill<<endl;
    }
    
}

double Store::buyFood(double foodAmount)
{
    
    if(P.getMoney() < (foodAmount * .5))
    {
        cout<<"Not enough money."<<endl;
        
        return;
    }
    
    else
    {
        P.setFood(foodAmount);
        P.setMoney((foodAmount * .50));
        bill = bill + (foodAmount * .50);
        cout<<"Total Bill: $"<<bill<<endl;
    }
    
}

double Store::buyBullets(int bulletsAmount)
{
    
    if(P.getMoney() < (bulletsAmount * 2))
    {
        cout<<"Not enough money."<<endl;
        
        return;
    }
    
    else
    {
        P.setBullets(bulletsAmount);
        P.setMoney((bulletsAmount * 2));
        bill = bill + (bulletsAmount * 2);
        cout<<"Total Bill: $"<<bill<<endl;
    }
    
}



