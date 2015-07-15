#include "GameManager.h"
#include "InputManager.h"
#include "Player.h"

GameManager::GameManager()
: m_IsGameover(true),
m_TotalGamePlayed(0),
m_TurnCount(0)
{
    m_InputManager = new InputManager;
}


GameManager::~GameManager()
{
    delete m_InputManager;
    delete m_Player1;
    delete m_Player2;
}

int GameManager::GameStart()
{
    SetGame();
    int checkNum;
    checkNum = GameLoop();
    return checkNum;
}

int GameManager::GameLoop()
{   
    HitResult hitResult;
    Position  attackPos;

    while (m_IsGameover!=true)
    {

        switch (m_GameTurn)
        {
        case PLAYER1_TURN:
            attackPos = m_Player1->Attack();
            hitResult= m_Player2->DoPlayerHitCheck(attackPos);
            //print(hitResult);

            break;


        case PLAYER2_TURN:
            attackPos = m_Player2->Attack();
            hitResult = m_Player2->DoPlayerHitCheck(attackPos);
            //print(hitResult);


            break;
        }



    }


    if (m_IsGameover == false){
        return -1;
    }
    return 0; 
    //0 정상적 종료, 비정상적 종료 -1
}

void GameManager::SetGame()
{
    m_Player1 = new Player();
    m_Player1 = new Player();

    m_Player1->PlaceShips();
    m_Player2->PlaceShips();

    m_IsGameover = false;
    m_GameTurn = PLAYER1_TURN;

}

