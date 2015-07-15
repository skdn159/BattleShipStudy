#pragma once
#include "Enum.h"
class Player;

class Map
{
public:
    Map(Player* owner);
    ~Map();

    Player* GetMapOwner(){ return m_Owner; }
    int     GetMapHeight(){ return m_Height; }
    int**   GetMap(){ return m_Map; }

    void    ShowMap();
    void    MarkResult(); 
    void    ShipOverlapCheck(Position shipPos);
private:
    Player* m_Owner;
    int     m_Height;
    int     m_Width;
    int**   m_Map;

};

