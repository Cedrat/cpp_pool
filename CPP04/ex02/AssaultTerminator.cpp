#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"

#include <iostream>

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & src)
{
	std::cout << "* teleports from space *" << std::endl;
	*this = src;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator *AssaultTerminator::clone() const
{
	AssaultTerminator * tactical_marine = new AssaultTerminator;
	return (tactical_marine);
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl; 
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl; 
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl; 
}

