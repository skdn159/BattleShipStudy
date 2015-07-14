#include "Ship.h"

Ship::Ship():
m_ShipType(SHIP_DEFAULT),
m_MaxHp(-1),
m_CurHp(-1),
m_IsDead(true)
{
    memset(m_Pos, 0, sizeof(Position)* 5);
}


Ship::~Ship()
{

}

void Ship::SetPosition(Position pos)
{

}

HitResult Ship::HitCheck(Position pos)
{

    return MISS;
}
