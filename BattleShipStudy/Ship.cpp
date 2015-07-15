#include "Ship.h"

Ship::Ship():
m_ShipType(SHIP_DEFAULT),
m_MaxHp(-1),
m_CurHp(-1),
m_IsDead(true)
{
    //memset(m_ShipPos, 0, sizeof(Position)* 5);
}


Ship::~Ship()
{

}

void Ship::SetShipPosition(Position pos)
{

}

HitResult Ship::HitCheck(Position hitPos)
{
    for (auto& shipPos : m_ShipPos)
    {
        if (shipPos.x == hitPos.x && shipPos.y == hitPos.y){
            m_CurHp--; 

            if (m_CurHp <= 0){
                return DESTROY;
            }
            return HIT;
        }
    }
    return MISS;
}


