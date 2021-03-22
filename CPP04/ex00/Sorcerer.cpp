#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "color.h"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
    std::cout << PINK << name << RESET " , " PINK << title << RESET " is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& src)
{
    *this = src;
    std::cout << PINK << _name << RESET " , " PINK << _title << RESET " is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << PINK << _name << RESET " , " PINK << _title << RESET " is dead. Consequences will never be the same!" << std::endl;
}

std::string     Sorcerer::getName(void) const
{
    return (_name);
}

std::string     Sorcerer::getTitle(void) const
{
    return (_title);
}

Sorcerer& Sorcerer::operator=(const Sorcerer &rhs)
{
    _name = rhs.getName();
    _title = rhs.getTitle();

    return (*this);
}

void Sorcerer::polymorph(Victim const & Vct) const
{
    Vct.getPolymorphed();
}

std::ostream & operator<<(std::ostream &c, const Sorcerer &rhs)
{
    c << "I am " PINK << rhs.getName() << RESET " , " PINK << rhs.getTitle() << RESET " and i like ponies (like medusa in mare)!" << std::endl;
    return (c);
}

