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
