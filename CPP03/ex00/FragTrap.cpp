#include "FragTrap.hpp"
#include <cstdlib>

FragTrap::FragTrap(std::string name) : _name(name), _hit_points(100), _max_hit_points(100), 
    _energy_points(100), _max_energy_points(100), _level(1), _melee_attack_damage(30),
    _ranged_attack_damage(20), _armor_damage_reduction(5)
 {
     std::cout << "I am the best robot. Yeah, yeah, yeah, I am the best robot. Ooh, ooh, here we go!" << std::endl;
 }

 FragTrap::~FragTrap()
 {
     std::cout << "(Sobbing) I just want to be loved!" << std::endl;
 }

void FragTrap::rangedAttack(std::string const & target) const
{
    if (_hit_points == 0)
        std::cout << _name << " is dead, he must be cured to be able to do this" << std::endl;
    else
    {
        std::cout << _name << " attacks " << target 
        << " at range, causing " << _ranged_attack_damage << " points of damage!" << std::endl;
    }
}

void FragTrap::meleeAttack(std::string const & target) const
{   
    if (_hit_points == 0)
        std::cout << _name << " is dead, he must be cured to be able to do this" << std::endl;
    else
    {
        std::cout << "FR4G-TP "<< _name << " attacks " << target 
        << " hand-to-hand attack, causing " << _melee_attack_damage 
        << " points of damage!" << std::endl;
    }
}

void FragTrap::takeDamage(unsigned int amount)
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

void    FragTrap::beRepaired(unsigned int amount)
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

void    FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    std::string skill[5] = {"Hyperion Punch", "Death Machine", "Element of Surprise", "It's a Trap... Card",
                                "You're... GOING TO LOVE ME!!"};

    if (_hit_points == 0)
    {
        std::cout << _name << " is dead, he must be cured to be able to do this" << std::endl;
        return ;
    }
    if (_energy_points == _max_energy_points)
        std::cout << "I'm full of energy yeah yeah ! The next attack wanna be EXPLOSIVE" << std::endl;
    if (_energy_points < 25)
    {
        std::cout << _name << " have don't enough energy for launch a special attack" << std::endl;
        return ;
    }
    _energy_points -= 25;

    std::cout << _name << "(lv " << _level << ") use the special attack : " << skill[rand() % 5] << " on " << target << std::endl;
}
