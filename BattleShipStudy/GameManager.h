#pragma once
#include "InputManager.h"

class GameManager
{
public:
    GameManager();
    ~GameManager();

    void SetIsGameOver(bool isgameover) { m_IsGameover = m_IsGameover; }
    bool GetIsGameOver(){ return m_IsGameover; }
    int  GameLoop();
    int  GameStart();

private:
    bool m_IsGameover;
    InputManager* m_InputManager;

};

