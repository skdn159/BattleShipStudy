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
{   //0 ������ ����, �������� ���� -1





    return -1;
}

