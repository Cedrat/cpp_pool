#include "Character.hpp"
#include <iostream>

Character::Character(std::string name) : _name(name)
{

}

Character::Character(Character const & src)
{
	*this = src;
}

Character::~Character()
{

}

std::string const &	Character::getName() const
{
	return (this->_name);
}

AMateria *const &	Character::getBag() const
{
	return (*this->_bag);
}

void Character::use(int idx, ICharacter& target)
{
	idx = 0;
	std::cout << target.getName() << std::endl;
}

void Character::equip(AMateria *m)
{
	m->getXP();
}

void Character::unequip(int idx)
{
	idx = 1;
}

Character &Character::operator=(Character const & rhs)
{
	*this->_bag = rhs.getBag();
	return *this;
}

