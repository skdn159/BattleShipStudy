#pragma once
#include "Ship.h"

class AirCraft : public Ship
{
public:
    AirCraft(int maxHp, ShipType shipType);

public:
    AirCraft();
    ~AirCraft();
};

