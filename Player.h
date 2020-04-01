// CS1300 Spring 2020
// Author: Wesley Toy
// Recitation: 301 – Telly 
// Project 3 - Player Header



#include <iostream>
#include <string>
using namespace std;


#ifndef PLAYER_H
#define PLAYER_H

class Player
{
    
    public:
    Player();
    void setPlayerName(string name_);
    string getPlayerName();
    void dead();
    bool getDead();
    
    private:
    
    string name;
    bool death;
  
    
    
    
};
#endif
