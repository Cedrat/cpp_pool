#include "Zombie.hpp"

std::string randomName(void)
{
    std::string alpha_num;
    std::string name;
    int         i;

    alpha_num = "0123456789qwertyuiopasdfghjklzxcvbnmQWERTYUIOPADFGHJKLZVBNM";
    name = "";
    i = (rand() % 10) + 3;
    while (i > 0)
    {
        name += alpha_num[rand() % 62];
        i--;
    }
    return (name);
}


int main()
{
    srand(time(0));

    ZombieHorde basic(50);
}
