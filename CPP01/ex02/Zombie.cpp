#include "Zombie.hpp"
#include "ZombieEvent.hpp"

Zombie::Zombie()
{
    std::cout << "BORN TO BE ZOMBIE" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "YOU ARE DEAD " << this->_name << std::endl;
}

void Zombie::advert(void)
{
    std::cout << "<" << _name << "(" << _type << ")> Beeeeeeeeeeerrrrrsssss ..." << std::endl;
}

void Zombie::setType(std::string type)
{
    this->_type = type;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
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