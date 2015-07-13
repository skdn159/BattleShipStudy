#pragma once
class InputManager;

class GameManager
{
public:
    static GameManager* GetInstance()
    {
        static GameManager gameManager;
        return &gameManager;
    }

    void SetIsGameOver(bool isgameover) { m_IsGameover = m_IsGameover; }
    bool GetIsGameOver(){ return m_IsGameover; }
    int  GameLoop();
<<<<<<< HEAD

private:
    GameManager();
    ~GameManager();
=======
    int  GameStart();
>>>>>>> origin/master

private:
    bool m_IsGameover;
    InputManager* m_InputManager;

};

