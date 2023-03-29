#pragma once
#include <iostream>
#include <string>
#include "stdio.h"

namespace ariel
{
}
using namespace ariel;
using namespace std;

class Player
{
    string name;

public:
    Player() {}
    Player(string name);
    int stacksize();
    int cardesTaken();
};