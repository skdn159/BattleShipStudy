#include "Cruiser.h"


Cruiser::Cruiser()
{
    m_ShipType = CRUISER;
    m_MaxHp = 3;
    m_CurHp = 3;
    m_IsDead = false;
}


Cruiser::~Cruiser()
{
}

HitResult Cruiser::HitCheck(Position pos)
{
    HitResult hitResult = Ship::HitCheck(pos);

    if (hitResult == DESTROY){
        return DESTROY_CRUISER;
    }

    return hitResult;
}
