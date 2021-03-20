#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

class NinjaTrap : public ClapTrap
{
    public :
        NinjaTrap(std::string name);
        ~NinjaTrap();
        
        void ninjaShoebox(ClapTrap & ct) const;
        void ninjaShoebox(FragTrap & ft) const;
        void ninjaShoebox(ScavTrap & st) const;
        void ninjaShoebox(NinjaTrap & nt) const;
};

#endif