#include "Ice.hpp"
#include "color.h"
#include "Character.hpp"

Ice::Ice(void) : AMateria("ice")
{

}

Ice::Ice(AMateria const & src) : AMateria(src)
{
}

Ice::~Ice()
{

}

AMateria*	Ice::clone() const
{
	AMateria *copy = new Ice(*this);
	return (copy);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "<< PINK << target.getName() << RESET << " *" << std::endl;
	this->giveXP();
}

Ice &Ice::operator=(Ice const & rhs)
{
	this->_xp = rhs.getXP();
	this->_type = rhs.getType();

	return *this;
}

