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

    void        PlayerInit();
    bool        GetIsMyTurn(){ return m_IsMyTurn; }
    void        SetPlayerTunr(bool turn){ m_IsMyTurn = turn; }
    
    HitResult   DoPlayerHitCheck(Position hitPos);
    Position    Attack();
    bool        CheckShipAllSunk();
    void        SetAShip(ShipType shipType, Position startPos, Dir dir);
    void        PlaceShips();
    void        ReceiveHitResult(HitResult hitResult);

protected:
    std::string         m_PlayerName;
    std::vector<Ship*>  m_ShipList;
    PlayerType          m_PlayerType;
    bool                m_IsMyTurn;
    Map*                m_PlayerMap;
    Position            m_TargetPos;

};

