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
    DEFAULT,
    HIT,
    MISS,
    DESTROY,

};

enum ShipType
{
    SHIP_DEFAULT,
    AIRCRAFT,
    BATTLESHIP,
    CRUISER,
    DESTROYER,
}; 

enum PlayerType
{
    HUMAN,
    AI,
};