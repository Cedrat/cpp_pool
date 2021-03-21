    #include "ScavTrap.hpp"
#include "little_games.h"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 50 , 50 , 1, 20 , 15, 3)
 {
     std::cout << "\033[3mI have ben created for open the door master.\033[0m" << std::endl;
     std::cout << "I have \033[1;34m" << _energy_points << " energy\033[0m for a maximum of \033[34;1m" << _max_energy_points << "\033[0m" << std::endl;     
 }

 ScavTrap::~ScavTrap()
 {
     std::cout << "\033[3mWho can close the door like me ?\033[0m" << std::endl;
 }

void ScavTrap::challengeNewcomer(void)
{
    std::string index;

    std::cout << "I will give you a list of challenges, choose one wisely !" << std::endl;
    std::cout << "1 : Do a backflip !!" << std::endl;
    std::cout << "2 : Beat me at SHIFUMI !!" << std::endl;
    std::cout << "3 : Head or tail ?" << std::endl;

    std::getline(std::cin, index);

    if (index == "1")
        std::cout << "\033[1;35m" <<  _name << "\033[0m do a very beautifull backflip !!" << std::endl;
    else if (index == "2")
    {
        while (shifumi() < 2)
            std::cout << "You don't win, try again !" << std::endl;
    }
    else if (index == "3")
    {
        head_or_tail();
        std::cout << "Nice game " << "\033[1;35m" <<  _name << "\033[0m !" << std::endl;
    }
}

void ScavTrap::rangedAttack(std::string const & target) const
{
    if (_hit_points == 0)
        std::cout << "\033[1;35m" <<  _name << "\033[0m is dead, he must be cured to be able to do this" << std::endl;
    else
    {
        std::cout << "\033[1;35m" <<  _name << "\033[0m attacks " << target 
        << " with one ScavBow, causing \033[1;91m" << _ranged_attack_damage << " points of damage!\033[0m" << std::endl;
    }
}

void ScavTrap::meleeAttack(std::string const & target) const
{   
    if (_hit_points == 0)
        std::cout << "\033[1;35m" <<  _name << "\033[0m is dead, he must be cured to be able to do this" << std::endl;
    else
    {
        std::cout << "\033[1;35m" <<  _name << "\033[0m attacks " << target 
        << " with ScavSword, causing \033[1;91m" << _melee_attack_damage 
        << " points of damage!\033[0m" << std::endl;
    }
}