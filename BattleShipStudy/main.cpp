#include "stdafx.h"
#include "GameManager.h"

int main()
{
    GameManager* gameManager = new GameManager();
    
    int checkNum;
    checkNum = gameManager->GameLoop();


    if (checkNum != 0){
        printf("Abnormally Terminated\n");
        return -1;
    }
    

    delete gameManager;
    return 0;
}