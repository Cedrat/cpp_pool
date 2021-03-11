#include "Zombie.hpp"

Zombie::Zombie()
{
    this->setName(randomName());
    this->setType("standard");
    this->advert();
}

Zombie::~Zombie()
{
    std::cout << "YOU ARE DEAD " << this->_name << std::endl;
}

void Zombie::advert(void)
{
    std::cout << "< " << _name << " (" << _type << " )> Beeeeeeeeeeerrrrrsssss ..." << std::endl;
}

void Zombie::setType(std::string type)
{
    this->_type = type;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}

ZombieHorde::ZombieHorde(int N)
{
    this->_horde = new Zombie[N];
    this->_sizeHorde = N;
}
ZombieHorde::~ZombieHorde()
{
    delete [] _horde;
}


Zombie *randomChump(std::string type)
{
    Zombie *zombie;

    zombie = new Zombie();
    zombie->setName(randomName());
    zombie->setType(type);
    zombie->advert();
    return zombie;
}