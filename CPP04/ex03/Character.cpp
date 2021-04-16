#include "Character.hpp"
#include <iostream>
#include "color.h"


Character::Character(std::string name) : _name(name)
{
	int i;

	i = 0;
	while (i < 4)
	{
		_bag[i] = NULL;
		i++;
	}
}

Character::Character(Character const & src)
{
	int i;

	i = 0;
	while (i < 4)
	{
		_bag[i] = NULL;
		i++;
	}
	*this = src;
}

Character::~Character()
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (this->_bag[i] != 0)
		{
			delete this->_bag[i];
			this->_bag[i] = 0;
		}
		i++;
	}
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
	if (idx > 3)
	{
		std::cout << "You have only 4 slots on your bag." << std::endl;
		return ;
	}
	else if ( _bag[idx] == 0)
	{
		std::cout << "This slot of your bag is empty." << std::endl;
		return ;
	}
	_bag[idx]->use(target);
}

void Character::equip(AMateria *m)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (_bag[i] == NULL)
		{
			_bag[i] = m;
			std::cout << "Materia of type " << BLUE << m->getType() << RESET << " equiped with success on slot " << i << std::endl;
			return;
		}
		i++;
	}
	std::cout << "Bag already full, please unequip before." << std::endl;
}

void Character::unequip(int idx)
{
	if (idx > 3)
	{
		std::cout << "Your bag have only four slots. Why do you want unequip nothing ? " << std::endl;
		return;
	}
	if (_bag[idx] != 0)
	{
		_bag[idx] = 0;
		std::cout << "Materia on slot " << idx << " unequiped with success." << std::endl;
	}
	else if (_bag[idx] == 0)
	{
		std::cout << "No materia on this slot." << std::endl;
	}
}


Character &Character::operator=(Character const & rhs)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (this->_bag[i] != 0)
		{
			delete this->_bag[i];
			this->_bag[i] = 0;
		}
		i++;
	}
	*this->_bag = rhs.getBag();
	this->_name = rhs.getName();
	return *this;
}
