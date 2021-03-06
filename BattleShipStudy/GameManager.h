#pragma once
#include "Enum.h"
class InputManager;
class Player;

class GameManager
{
public:
    static GameManager* GetInstance()
    {
        static GameManager gameManager;
        return &gameManager;
    }

    void        SetIsGameOver(bool isgameover) { m_IsGameover = m_IsGameover; }
    bool        GetIsGameOver(){ return m_IsGameover; }
    int         GameLoop();
    int         GameStart();
    void        SetGame();

    int         GetTurnCount(){ return m_TurnCount; }
    int         GetTotalGamePlayed(){ return m_TotalGamePlayed; }


private:
    GameManager();
    ~GameManager();

private:
    bool            m_IsGameover;
    InputManager*   m_InputManager;
    Player*         m_Player1;
    Player*         m_Player2;
    GameTurn        m_GameTurn;
    int             m_TurnCount;
    int             m_TotalGamePlayed;


};

