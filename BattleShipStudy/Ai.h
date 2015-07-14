#pragma once
#include "stdafx.h"
#include "Player.h"
class Ai :
    public Player
{
public:
    Ai();
    ~Ai();

   
private:
    std::vector<Position> m_GuessList;

};

