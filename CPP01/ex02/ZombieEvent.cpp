#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent(std::string type)
{
    this->_typeOfZombies = type;
}

void ZombieEvent::setZombieType(std::string type)
{
    _typeOfZombies = type;
}

std::string ZombieEvent::getZombieType(void)
{
    return (_typeOfZombies);
}

Zombie *ZombieEvent::newZombie(std::string name)
{
    Zombie *zombie;

    zombie = new Zombie();
    zombie->setName(name);
    zombie->setType(_typeOfZombies);
    zombie->advert();
    return zombie;
}