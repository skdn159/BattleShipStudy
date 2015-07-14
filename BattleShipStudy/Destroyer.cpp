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
