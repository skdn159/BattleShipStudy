#include "Map.h"
#include "Player.h"

Map::Map(Player* owner) :
m_Height(8),
m_Width(8),
m_Map(nullptr),
m_Owner(owner)
{
    m_Map = new int*[m_Width];
    for (int i = 0; i < m_Width; i++){  
        m_Map[i] = new int[m_Height];  // Alloc
    }

    for (int i = 0; i < m_Width; ++i){
        for (int j = 0; j < m_Height; j++){
            m_Map[i][j] = 0;  // init
        }
    }

}


Map::~Map()
{
    for (int i = 0; i < m_Width;i++){
        delete m_Map[i];
    }
    delete m_Map;
}

void Map::ShowMap()
{

}

void Map::MarkResult()
{

}

void Map::ShipOverlapCheck(Position shipPos)
{

}

