#pragma once
#include "Enum.h"
#include "stdafx.h"

class Ship;
class Map;

class Player
{
public:
    Player();
    ~Player();

    bool GetIsMyTurn(){ return m_IsMyTurn; }
    void SetPlayerTunr(bool turn){ m_IsMyTurn = turn; }
    
    HitResult DoPlayerHitCheck(Position hitPos);
    Position  Attack();
    bool CheckShipAllSunk();
    void PlaceShip(ShipType shipType, Position startPos, Dir dir);

private:
    std::string         m_PlayerName;
    std::vector<Ship*>  m_ShipList;
    PlayerType          m_PlayerType;
    bool                m_IsMyTurn;
    Map*                m_PlayerMap;


};

