#include "stdafx.h"
#include "GameManager.h"

int main()
{
    GameManager* gameManager = GameManager::GetInstance();
    
    int checkNum;
    checkNum = gameManager->GameStart();

    //������ �� 0 = ������ ����, -1 �������� ����
    if (checkNum != 0){
        printf("Abnormally Terminated\n");
        return -1;
    }
    

    return 0;
}