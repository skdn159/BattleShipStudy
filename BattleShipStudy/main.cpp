#include "stdafx.h"
#include "GameManager.h"

int main()
{
    GameManager* gameManager = GameManager::GetInstance();
    
    int checkNum;
    checkNum = gameManager->GameStart();

    //앞으로 쭉 0 = 정상적 종료, -1 비정상적 종료
    if (checkNum != 0){
        printf("Abnormally Terminated\n");
        return -1;
    }
    

    return 0;
}