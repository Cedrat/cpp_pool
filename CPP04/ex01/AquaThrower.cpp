#include "AquaThrower.hpp"

AquaThrower::AquaThrower(void) : AWeapon("AquaThrower", 2, 5)
{

}

AquaThrower::~AquaThrower()
{
}

void	AquaThrower::attack() const
{
	std::cout << "* Psssh Psssh *" << std::endl;
}

AquaThrower &AquaThrower::operator=(AquaThrower const & rhs)
{
	this->_name = rhs.getName();
	this->_apcost = rhs.getAPCost();
	this->_damage = rhs.getDamage();
	return *this;
}