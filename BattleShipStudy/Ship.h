#pragma once
#include "stdafx.h"
#include "Enum.h"
class Ship
{
public:
    Ship();
    ~Ship();

    Ship(ShipType shipType, int maxHp);




    void                    SetShipPosition(Position pos);
    std::vector<Position>   GetPosition(){ return m_ShipPos; }
    ShipType                GetShipType(){ return m_ShipType; }
    int                     GetCurHp(){ return m_CurHp; }
    int                     GetMaxHp(){ return m_MaxHp; }
    bool                    GetIsDead(){ return m_IsDead; }
    void                    Damaged(){ m_CurHp--; }
    
    HitResult               HitCheck(Position pos);


protected:

    int         m_CurHp;
    int         m_MaxHp;
    bool        m_IsDead;
    ShipType    m_ShipType;
    std::vector<Position> m_ShipPos;

};

