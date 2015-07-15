#pragma once

#define  MAX_SHIPNUM 5

struct Position
{
    int x; // คั
    int y; // |

    Position()
    {
        x = 0;
        y = 0;
    }

    Position(int _x, int _y)
    {
        x = _x;
        y = _y;
    }

};
enum HitResult
{
    HIT,
    MISS,
    DESTROY,

    DESTROY_AIRCRAFT,
    DESTROY_BATTLESHIP,
    DESTROY_CRUISER,
    DESTROY_DESTROYER,

};

enum ShipType
{
    SHIP_DEFAULT,
    AIRCRAFT=5,
    BATTLESHIP=4,
    CRUISER=3,
    DESTROYER=2,
}; 

enum Dir
{
    HORIZONTAL,
    VERTICAL,
};

enum PlayerType
{
    PLAYER_DEFAULT,
    HUMAN,
    AI,
};

enum GameTurn
{
    PLAYER1_TURN,
    PLAYER2_TURN,
    
};