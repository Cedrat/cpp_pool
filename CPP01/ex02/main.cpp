#include "Zombie.hpp"
#include "ZombieEvent.hpp"

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

    ZombieEvent alcoholic("alcoholic");
    Zombie *Gerard = alcoholic.newZombie("Gerard");
    Zombie *Gertrude = alcoholic.newZombie("Gertrude");
    Zombie *i_1 = randomChump("violent");
    Zombie *i_2 = randomChump("lazy");

    delete Gerard;
    delete Gertrude;
    delete i_1;
    delete i_2;
}
