#include "player.hpp"
#include <string>
using namespace std;



    Player::Player(string name)
    {
        this->name = name;
    }

    int Player::stacksize()
    {
        return 1;
    }

    int Player::cardesTaken()
    {
        return 1;
    }
