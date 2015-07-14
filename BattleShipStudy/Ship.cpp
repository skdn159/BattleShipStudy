#include "Ship.h"

Ship::Ship()
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
