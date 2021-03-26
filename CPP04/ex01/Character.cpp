#include "Character.hpp"
#include "color.h"

Character::Character(std::string const & name) : _name(name) ,_weapon(NULL), _ap(40)
{
	std::cout << PINK << _name << RESET << " is landing on this planet for exterminate the monsters" << std::endl;
}

Character::Character(Character const & src)
{
	std::cout << PINK << _name << RESET << " is landing on this planet for exterminate the monsters" << std::endl;
	*this = src;
}

Character::~Character()
{
	std::cout << "My job is done here. BYE BYE !!" << std::endl;
}

std::string const &	Character::getName(void) const
{
	return (this->_name);
}

int const &			Character::getAP(void) const
{
	return (this->_ap);
}

void				Character::equip(AWeapon *weapon)
{
	if (weapon == NULL)
		std::cout << PINK << _name << RESET << " drop the " << BLUE << _weapon->getName() << RESET << " on the floor." << std::endl;
	_weapon = weapon;
}

void				Character::attack(Enemy* enemy)
{
	if (_weapon == NULL)
	{
		std::cout << PINK << _name << RESET << " has no weapon. He run for this life" << std::endl;
		return ;
	}
	else if (_ap < _weapon->getAPCost())
	{
		std::cout << PINK << _name << RESET << " has no enough energy. He run for this life" << std::endl;
		return ;
	}
	_weapon->attack();
	_ap -= _weapon->getAPCost();
	enemy->takeDamage(_weapon->getDamage());
	if (enemy->getHP() == 0)
		delete enemy;

}

void				Character::recoverAP(void)
{
	if ((_ap + 10) > 40)
		_ap = 40;
	else
		_ap += 10;
	std::cout << PINK << _name << RESET << " recover some " << BLUE << "AP" << RESET << " and have " << BLUE << _ap << " AP " << RESET << "now." << std::endl;
}

AWeapon	*Character::getWeapon(void) const
{
	return (this->_weapon);
}

Character &Character::operator=(Character const & rhs)
{
	this->_name = rhs.getName();
	this->_weapon = rhs.getWeapon();
	this->_ap =	rhs.getAP();
	return *this;
}

std::ostream & operator<<(std::ostream &o,const Character  &Char)
{
	if (Char.getWeapon() == NULL)
		o << PINK << Char.getName() << RESET << " has " << BLUE << Char.getAP() << " AP" RESET << " and is unarmed.";
	else 
		o << PINK << Char.getName() << RESET << " has " << BLUE << Char.getAP() << " AP" RESET << " and wields a " << CYAN << Char.getWeapon()->getName() << RESET;
	return (o);
}
