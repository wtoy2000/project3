// CS1300 Spring 2020
// Author: Wesley Toy
// Recitation: 301 – Telly 
// Project 3 - Player Functions


#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

Player::Player()
{
    name = "";
    death = false;
}

void Player::setPlayerName(string name_)
{
    name = name_;
}

string Player::getPlayerName()
{
    return name;
}

void Player::dead()
{
    death = true;
}

bool Player::getDead()
{
    return death;
}

