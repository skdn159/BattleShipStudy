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
    int  GameStart();


private:
    GameManager();
    ~GameManager();

private:
    bool m_IsGameover;
    InputManager* m_InputManager;

};

