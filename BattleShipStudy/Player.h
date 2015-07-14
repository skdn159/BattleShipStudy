#pragma once
#include "Enum.h"
#include "stdafx.h"

class Ship;

class Player
{
public:
    Player();
    ~Player();

    
    HitResult DoPlayerHitCheck(Position hitPos);
    Position  Attack();

    bool GetIsMyTurn(){ return m_IsMyTurn; }
    void SetPlayerTunr(bool turn){ m_IsMyTurn = turn; }



private:
    std::string m_PlayerName;
    std::vector<Ship*> m_ShipList;
    bool m_IsMyTurn;



};

