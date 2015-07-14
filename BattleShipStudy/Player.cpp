#include "Player.h"
#include "AirCraft.h"
#include "BattleShip.h"
#include "Cruiser.h"
#include "Destroyer.h"
#include "Map.h"

Player::Player()
{
    m_ShipList.reserve(MAX_SHIPNUM);
    m_ShipList.push_back(new AirCraft());
    m_ShipList.push_back(new BattleShip());
    m_ShipList.push_back(new Cruiser());
    m_ShipList.push_back(new Destroyer());
    m_ShipList.push_back(new Destroyer());

    m_PlayerMap = new Map();

}


Player::~Player()
{
    for (auto& ship : m_ShipList){
        delete ship;
    }

    delete m_PlayerMap;
}

void Player::PlayerInit()
{
    //PlaceShip();
}

HitResult Player::DoPlayerHitCheck(Position hitPos)
{
    HitResult hitResult;
    for (auto& ship : m_ShipList){
        hitResult = ship->HitCheck(hitPos);

        if (hitResult != MISS){
            return hitResult;
        }
    }
    return MISS;
}

Position Player::Attack()
{

    return { 3, 1 };
}

bool Player::CheckShipAllSunk()
{

    return false;
}

void Player::PlaceShip(ShipType shipType, Position startPos, Dir dir)
{

}


