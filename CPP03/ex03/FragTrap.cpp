#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 100 , 100 , 1, 30 , 20, 5)
 {
     std::cout << "\033[3mI am the best robot. Yeah, yeah, yeah, I am the best robot. Ooh, ooh, here we go!\033[0m" << std::endl;
 }

 FragTrap::~FragTrap()
 {
     std::cout << "(Sobbing) I just want to be loved!" << std::endl;
 }


void    FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    std::string skill[5] = {"Hyperion Punch", "Death Machine", "Element of Surprise", "It's a Trap... Card",
                                "You're... GOING TO LOVE ME!!"};

    if (_hit_points == 0)
    {
        std::cout << "\033[1;35m" <<  _name << "\033[0m is dead, he must be cured to be able to do this" << std::endl;
        return ;
    }
    if (_energy_points == _max_energy_points)
        std::cout << "I'm full of energy yeah yeah ! The next attack wanna be EXPLOSIVE" << std::endl;
    if (_energy_points < 25)
    {
        std::cout << "\033[1;35m" <<  _name << "\033[0m have don't enough energy for launch a special attack" << std::endl;
        return ;
    }
    _energy_points -= 25;

    std::cout << "\033[1;35m" <<  _name << "\033[0m(lv " << _level << ") use the special attack : " << skill[rand() % 5] << " on " << target << std::endl;
}
