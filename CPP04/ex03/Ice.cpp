#include "Ice.hpp"
#include "color.h"
#include "Character.hpp"

Ice::Ice(void) : AMateria("ice")
{

}

Ice::Ice(Ice const & src) : AMateria("ice")
{
	*this = src;
}

Ice::~Ice()
{

}

AMateria*	Ice::clone() const
{
	Ice *copy = new Ice();
	return (copy);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "<< PINK << target.getName() << RESET << " *";
	this->giveXP();
}

AMateria &Ice::operator=(AMateria const & rhs)
{
	this->_xp = rhs.getXP();
	this->_type = rhs.getType();

	return *this;
}

