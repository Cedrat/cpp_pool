#include "Cure.hpp"
#include "color.h"
#include "Character.hpp"

Cure::Cure(void) : AMateria("cure")
{

}

Cure::Cure(AMateria const & src) : AMateria(src)
{
}

Cure::~Cure()
{

}

AMateria*	Cure::clone() const
{
	AMateria *copy = new Cure(*this);
	return (copy);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heal "<< PINK << target.getName() << RESET << " *" << std::endl;
	this->giveXP();
}

Cure &Cure::operator=(Cure const & rhs)
{
	this->_xp = rhs.getXP();
	this->_type = rhs.getType();

	return *this;
}

