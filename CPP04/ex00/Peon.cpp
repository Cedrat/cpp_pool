#include "Peon.hpp"
#include "color.h"
#include "Victim.hpp"

Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog Zog." << std::endl;
}

Peon::Peon(const Peon& src) : Victim(src.getName())
{
    *this = src;
    std::cout << "Zog Zog." << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed(void) const
{
        std::cout << PINK << this->getName() << RESET << " has been turned into a pink pony!" << std::endl;
}