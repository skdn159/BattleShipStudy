#include "Destroyer.h"


Destroyer::Destroyer()
{
    m_ShipType = DESTROYER;
    m_MaxHp = 2;
    m_CurHp = 2;
    m_IsDead = false;
}


Destroyer::~Destroyer()
{
}

HitResult Destroyer::HitCheck(Position pos)
{
    HitResult hitResult = Ship::HitCheck(pos);

    if (hitResult == DESTROY){
        return DESTROY_DESTROYER;
    }

    return hitResult;
}
