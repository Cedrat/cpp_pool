#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{

}

AWeapon::AWeapon(AWeapon const & src)
{
	*this = src;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name) , _apcost(apcost) , _damage(damage)
{

}

AWeapon::~AWeapon()
{

}

std::string	const &AWeapon::getName() const
{
	return (this->_name);
}

int			AWeapon::getAPCost() const
{
	return (this->_apcost);
}

int 		AWeapon::getDamage() const
{
	return (this->_damage);
}

AWeapon &AWeapon::operator=(AWeapon const & rhs)
{
	this->_name = rhs.getName();
	this->_apcost = rhs.getAPCost();
	this->_damage = rhs.getDamage();
	return *this;
}

