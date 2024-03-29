#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & src)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	*this = src;
}

SuperMutant::~SuperMutant()
{
	std::cout <<  "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}

SuperMutant &SuperMutant::operator=(SuperMutant const & rhs)
{
	this->_hp = rhs.getHP();
	this->_type = rhs.getType();
	return *this;
}