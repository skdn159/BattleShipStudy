#include "BattleShip.h"


BattleShip::BattleShip()
{
    m_ShipType = BATTLESHIP;
    m_MaxHp = 4;
    m_CurHp = 4;
    m_IsDead = false;
}


BattleShip::~BattleShip()
{
}

HitResult BattleShip::HitCheck(Position pos)
{
    HitResult hitResult = Ship::HitCheck(pos);

    if (hitResult == DESTROY){
        return DESTROY_BATTLESHIP;
    }

    return hitResult;
}
