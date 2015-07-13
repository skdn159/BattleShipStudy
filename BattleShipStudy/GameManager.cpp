#include "GameManager.h"
#include "InputManager.h"


GameManager::GameManager()
: m_IsGameover(false)
{
    m_InputManager = new InputManager;
}


GameManager::~GameManager()
{
    delete m_InputManager;
}

int GameManager::GameStart()
{
    int checkNum;
    checkNum = GameLoop();
    return checkNum;
}
int GameManager::GameLoop()
{   //0 정상적 종료, 비정상적 종료 -1





    return -1;
}

