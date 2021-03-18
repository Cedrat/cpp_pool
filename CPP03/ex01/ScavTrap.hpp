#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>

class ScavTrap
{
    private :
        std::string     _name;
        unsigned int    _hit_points;
        unsigned int    _max_hit_points;
        unsigned int    _energy_points;
        unsigned int    _max_energy_points;
        unsigned int    _level;
        unsigned int    _melee_attack_damage;
        unsigned int    _ranged_attack_damage;
        unsigned int    _armor_damage_reduction;

    public :
        ScavTrap(std::string name);
        ~ScavTrap();

        void    rangedAttack(std::string const & target) const;
        void    meleeAttack(std::string const & target) const;
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    challengeNewcomer(void); 
};

#endif