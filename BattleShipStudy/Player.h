#pragma once
#include "Enum.h"
#include "stdafx.h"
#include "Ship.h"

class Player
{
public:
    Player();
    ~Player();


    bool GetIsMyturn(){ return m_IsMyTurn; }
    Position Attack();
    HitResult DoPlayerHitCheck(Position hitPos);

private:
    bool m_IsMyTurn;
    std::vector<Ship*> m_ShipList;

};

