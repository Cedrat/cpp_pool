#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) , _xp(0)
{

}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
}

AMateria::~AMateria()
{

}

std::string const &	AMateria::getType() const
{
	return (this->_type);
}

unsigned int const &	AMateria::getXP() const
{
	return (this->_xp);
}

void 		AMateria::giveXP()
{
	_xp += 10;
}

AMateria &AMateria::operator=(AMateria const & rhs)
{
	this->_xp = rhs.getXP();
	this->_type = rhs.getType();
	
	return *this;
}

