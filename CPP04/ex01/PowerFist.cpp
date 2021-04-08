#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{

}

PowerFist::~PowerFist()
{

}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist &PowerFist::operator=(PowerFist const & rhs)
{
	this->_name = rhs.getName();
	this->_apcost = rhs.getAPCost();
	this->_damage = rhs.getDamage();
	return *this;
}