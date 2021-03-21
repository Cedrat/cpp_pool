#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : virtual public ClapTrap
{
    public :
        ScavTrap(std::string name);
        ~ScavTrap();

        void    challengeNewcomer(void); 
        void    meleeAttack(std::string const & target) const;
        void    rangedAttack(std::string const & target) const;
};

#endif