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
