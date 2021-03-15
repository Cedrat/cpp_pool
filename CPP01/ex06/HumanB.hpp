#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    public : 
    HumanB(std::string name);
    std::string     getType(void);
    void            setType(std::string type);
    void            setWeapon(Weapon &weapon);
    void            attack();

    private : 
    Weapon* _weapon;
    std::string  _name;
};

#endif