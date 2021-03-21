#include "SuperTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap(std::string name) : ClapTrap(name, 100, 100, 120, 120, 1, 60 , 20, 5), NinjaTrap(name), FragTrap(name)
{
    std::cout << "\033[3mSuperTrap is hereeee\033[0m" << std::endl;
}

SuperTrap::~SuperTrap()
{
    std::cout << "\033[3mSuperTrap was destroyed\033[0m" << std::endl; 
}

void SuperTrap::rangedAttack(std::string const & target) const
{
    FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target) const
{
    NinjaTrap::meleeAttack(target);
}