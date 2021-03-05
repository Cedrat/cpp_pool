#include "ClassPony.hpp"

Pony::Pony()
{
    std::cout << "A pony was born ! " << std::endl;
}

Pony::~Pony()
{
    std::cout << _name << " was free !" << std::endl;
}
void Pony::ponyOfZorro()
{
    this->_name = "Tornade";
    this->_color = "black";
    this->_mane = "black";
    this->_speed = "120";
}

void Pony::ponyOfLink()
{
    this->_name = "Epona";
    this->_color = "brown";
    this->_mane = "white";
    this->_speed = "90";
}
