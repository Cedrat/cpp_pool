#include "Victim.hpp"
#include "color.h"

Victim::Victim(std::string name) : _name(name)
{
    std::cout << "Some random victim called " << PINK << name << RESET " just appeared !" << std::endl;
}

Victim::Victim(const Victim& src)
{
    *this = src;
    std::cout << "Some random victim called " << PINK <<  _name << RESET " just appeared !" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " PINK << _name << RESET " just died for no apparent reason!" << std::endl;
}

std::string     Victim::getName(void) const
{
    return (_name);
}

Victim& Victim::operator=(const Victim &rhs)
{
    _name = rhs.getName();

    return (*this);
}

void Victim::getPolymorphed(void) const
{
    std::cout << PINK << _name << RESET << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream & operator<<(std::ostream &c, const Victim &rhs)
{
    c << "I am " PINK << rhs.getName() << RESET << " and i like otters " << std::endl;
    return (c);
}
