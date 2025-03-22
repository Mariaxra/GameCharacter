#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <iomanip>
#include <string>
#include "character.hpp"

class Game
{

private:
    Character v;

public:
    Game(std ::string Name, std :: string  h, std ::string skillname, std :: string lev, std ::string pow);

    void print();
};

#endif