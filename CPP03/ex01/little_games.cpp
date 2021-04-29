#include <iostream>
#include <string>
#include <cstdlib>

int shifumi()
{
    std::string answer;
    int enemy_attack;

    while (1)
    {
        std::cout << "\033[1;90m(R)OCK\033[0m , \033[1;32m(P)APER\033[0m or \033[1;96m(S)CISSOR\033[0m ?" << std::endl;
        std::getline(std::cin, answer);
        enemy_attack = rand() % 3;
        if (answer == "R" || answer == "ROCK")
        {
            if (enemy_attack == 0)
                std::cout << "You opponent play \033[1;32mPAPER\033[0m, you lose" << std::endl;
            else if (enemy_attack == 1)
                std::cout << "You opponent play \033[1;90mROCK\033[0m, you tie" << std::endl;
            else if (enemy_attack == 2)
                std::cout << "You opponent play \033[1;96mSCISSOR\033[0m, you win" << std::endl;
            break;
        }
        else if (answer == "S" || answer == "SCISSOR")
        {
            if (enemy_attack == 0)
                std::cout << "You opponent play \033[1;90mROCK\033[0m, you lose" << std::endl;
            else if (enemy_attack == 1)
                std::cout << "You opponent play \033[1;96mSCISSOR\033[0m, you tie" << std::endl;
            else if (enemy_attack == 2)
                std::cout << "You opponent play \033[1;32mPAPER\033[0m, you win" << std::endl;
            break;
        }
        else if (answer == "P" || answer == "PAPER")
        {
            if (enemy_attack == 0)
                std::cout << "You opponent play \033[1;96mSCISSOR\033[0m, you lose" << std::endl;
            else if (enemy_attack == 1)
                std::cout << "You opponent play \033[1;32mPAPER\033[0m you tie" << std::endl;
            else if (enemy_attack == 2)
                std::cout << "You opponent play \033[1;90mROCK\033[0m, you win" << std::endl;
            break;
        }
        else
            std::cout << "bad option, do it again !" << std::endl;
    }
    return (enemy_attack);
}

int head_or_tail(void)
{
    int win;
    std::string answer;
    while (1)
    {
        std::cout << "\033[4;1m(H)EAD\033[0m or \033[4;1m(T)AIL\033[0m ?" << std::endl;
        std::getline(std::cin, answer);
        win = rand() % 2;
        if (answer == "H" || answer == "HEAD")
        {
            if (win == 0)
                std::cout << "The piece lands on \033[1;4mTAIL\033[0m, you lose" << std::endl;
            else if (win == 1)
                std::cout << "The piece lands on \033[1;4mHEAD\033[0m, you win" << std::endl;
            break;
        }
        else if (answer == "T" || answer == "TAIL")
        {
            if (win == 0)
                std::cout << "The piece lands on \033[1;4mHEAD\033[0m, you lose" << std::endl;
            else if (win == 1)
                std::cout << "The piece lands on \033[1;4mTAIL\033[0m, you win" << std::endl;            break;
        }
    }
    return(win);
}