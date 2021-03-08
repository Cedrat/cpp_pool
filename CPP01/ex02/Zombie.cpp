#include "Zombie.hpp"
#include "ZombieEvent.hpp"

Zombie::Zombie()
{
    std::cout << "BORN TO BE ZOMBIE" << std::endl;
}

void Zombie::advert(void)
{
    std::cout << "<" << _name << "(" << _type << ")> Beeeeeeeeeeerrrrrsssss ..." << std::endl;
}

void Zombie::setType(std::string type)
{
    this->_type = type;
}