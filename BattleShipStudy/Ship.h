#pragma once
#include "stdafx.h"
#include "Enum.h"
class Ship
{
public:
    Ship();
    ~Ship();

    Ship(ShipType shipType, int maxHp);

    void       SetPosition(Position pos);



    ShipType   GetShipType(){ return m_ShipType; }
    Position*  GetPosition(){ return m_Pos; }
    int        GetCurHp(){ return m_CurHp; }
    int        GetMaxHp(){ return m_MaxHp; }
    bool       GetIsDead(){ return m_IsDead; }
    void       Damaged(){ m_CurHp--; }
    
    HitResult  HitCheck(Position pos);

protected:
    ShipType    m_ShipType;
    int         m_CurHp;
    int         m_MaxHp;
    bool        m_IsDead;
    Position    m_Pos[5];


};

