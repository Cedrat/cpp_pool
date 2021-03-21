#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include <string>

class SuperTrap : public NinjaTrap, public FragTrap
{
    public :
        SuperTrap(std::string name);
        ~SuperTrap();

        void meleeAttack(std::string const & target) const;
        void rangedAttack(std::string const & target) const;
};

#endif