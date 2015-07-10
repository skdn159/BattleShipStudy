#pragma once
class GameManager
{
public:
    GameManager();
    ~GameManager();

    void SetIsGameOver(bool isgameover) { isGameover = isGameover; }
    bool GetIsGameOver(){ return isGameover; }
    int  GameLoop();


private:
    bool isGameover;
};

