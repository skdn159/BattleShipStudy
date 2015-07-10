#include "GameManager.h"


GameManager::GameManager()
: m_IsGameover(false),
m_InputManager(nullptr)
{

}


GameManager::~GameManager()
{
}

int GameManager::GameStart()
{
    GameLoop();
}
int GameManager::GameLoop()
{

}

