#include "TacticalMarine.hpp"
#include "ISpaceMarine.hpp"

#include <iostream>

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & src)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	*this = src;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine *TacticalMarine::clone() const
{
	TacticalMarine * tactical_marine = new TacticalMarine;
	return (tactical_marine);
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl; 
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl; 
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl; 
}

