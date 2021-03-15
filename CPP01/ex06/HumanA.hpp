#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    public : 
    HumanA(std::string name, Weapon& weapon);

    std::string     getType(void);
    void            setType(std::string type);
    
    void            attack();

    private : 
    Weapon& _weapon;
    std::string  _name;
};

#endif