#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : virtual public ClapTrap
{
    public :
        FragTrap(std::string name);
        ~FragTrap();

        void        vaulthunter_dot_exe(std::string const & target);
        void        meleeAttack(std::string const & target) const;
        void        rangedAttack(std::string const & target) const;
};

#endif