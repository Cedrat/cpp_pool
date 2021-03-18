#include "ScavTrap.hpp"
#include "little_games.h"

ScavTrap::ScavTrap(std::string name) : _name(name), _hit_points(100), _max_hit_points(100), 
    _energy_points(50), _max_energy_points(50), _level(1), _melee_attack_damage(20),
    _ranged_attack_damage(15), _armor_damage_reduction(3)
 {
     std::cout << "I have ben created for open the door master." << std::endl;
     std::cout << "I have \033[1;34m" << _energy_points << "\033[0m energy for a maximum of \033[34;1m" << _max_energy_points << "\033[0m" << std::endl;     
 }

 ScavTrap::~ScavTrap()
 {
     std::cout << "Who can close the door like me ?" << std::endl;
 }

void ScavTrap::rangedAttack(std::string const & target) const
{
    if (_hit_points == 0)
        std::cout << _name << "is dead, he must be cured to be able to do this" << std::endl;
    else
    {
        std::cout << _name << " (lv " << _level << " ) shot " << target 
        << " , causing " << _ranged_attack_damage << " points of damage!" << std::endl;
    }
}

void ScavTrap::meleeAttack(std::string const & target) const
{   
    if (_hit_points == 0)
        std::cout << _name << " is dead, he must be cured to be able to do this" << std::endl;
    else
    {
        std::cout << _name << " (lv " << _level << " ) slap " << target 
        << " , causing " << _melee_attack_damage 
        << " points of damage!" << std::endl;
    }
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (_hit_points == 0)
    {
        std::cout << _name << " is already dead ! Don't go after dead bodies. " << std::endl;
        return ;
    }
    if (amount > (_hit_points + _armor_damage_reduction))
        _hit_points = 0;
    else if (_armor_damage_reduction > amount)
        ;
    else
        _hit_points -= amount - _armor_damage_reduction;
    std::cout << _name << " had taken a hit and have now " << _hit_points << " life points" << std::endl;
    if (_hit_points == 0)
        std::cout << _name << " is dead, he need to be heal " << std::endl;
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    if (_hit_points == _max_hit_points)
    {
        std::cout << _name << " is already full of life ! He don't need heal " << std::endl;
        return ;
    }
    if (_hit_points + amount > _max_hit_points)
    {
        std::cout << "This medicine kit cannot be used to its full potential because " << _max_hit_points << " is the maximum of life" << std::endl;
        _hit_points = _max_hit_points;
    }
    else 
        _hit_points += amount;
    std::cout << _name << " has been healed and have now " << _hit_points << " life points" << std::endl;
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
        std::cout << _name << " do a very beautifull backflip !!" << std::endl;
    else if (index == "2")
    {
        while (shifumi() < 2)
            std::cout << "You don't win, try again !" << std::endl;
    }
    // else if (index == "3")
    //     head_or_tail();
}