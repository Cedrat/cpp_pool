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

void Pony::jump() const
{
    std::cout << this->_name << " jumps over a burning building !" << std::endl;
}

void Pony::describe() const
{
    std::cout << this->_name << " is a beautifull " << this->_color << " pony with a " << this->_mane 
    << " mane and this poney reach the incredible speed of " << this->_speed << " miles per hours !" << std::endl; 
}
