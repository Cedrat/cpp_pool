#include "Sorcerer.hpp"
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

Sorcerer &Sorcerer::getSorcerer(void)
{
    this = 
}

Sorcerer& Sorcerer::operator=(const Sorcerer &rhs)
{
    *this = rhs;

    return (*this);
}

