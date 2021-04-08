#include "Peasant.hpp"
#include "color.h"
#include "Victim.hpp"

Peasant::Peasant(std::string name) : Victim(name)
{
    std::cout << "I'm here to care of my farm." << std::endl;
}

Peasant::Peasant(const Peasant& src) : Victim(src.getName())
{
    *this = src;
    std::cout << "I'm here to care of my farm." << std::endl;
}

Peasant::~Peasant()
{
    std::cout << "You will never have my farm!!" << std::endl;
}

void Peasant::getPolymorphed(void) const
{
        std::cout << PINK << this->getName() << RESET << " has been turned into a beautifull cow!" << std::endl;
}