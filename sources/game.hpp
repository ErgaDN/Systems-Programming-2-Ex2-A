#pragma once
#include <iostream>
#include <string>
#include "stdio.h"
#include "player.hpp"

namespace areil
{
}
using namespace areil;

class Game
{
    Player p1;
    Player p2;

public:
    Game() {}
    Game(Player p1, Player p2);
    void playTurn();
    void printLastTurn();
    void playAll();
    void printWiner();
    void printLog();
    void printStats();
};
