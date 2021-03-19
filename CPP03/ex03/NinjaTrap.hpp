#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class NinjaTrap : public ClapTrap
{
    public :
        NinjaTrap(std::string name);
        ~NinjaTrap();
};

#endif