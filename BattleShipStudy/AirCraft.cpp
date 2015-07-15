#include "AirCraft.h"

AirCraft::AirCraft() 
{
    m_ShipType = AIRCRAFT;
    m_MaxHp = 5;
    m_CurHp = 5;
    m_IsDead = false;
}


AirCraft::~AirCraft()
{
}

HitResult AirCraft::HitCheck(Position pos)
{
    HitResult hitResult = Ship::HitCheck(pos);

    if (hitResult == DESTROY){
        return DESTROY_AIRCRAFT;
    }

    return hitResult;
}
