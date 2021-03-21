#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
        protected :
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
            ClapTrap(std::string name, unsigned int, unsigned int, unsigned int, 
            unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
            ClapTrap(std::string name);
            ~ClapTrap();

            std::string     getName() const;
            unsigned int    getEnergy() const;
            void            rangedAttack(std::string const & target) const;
            void            meleeAttack(std::string const & target) const;
            void            takeDamage(unsigned int amount);
            void            beRepaired(unsigned int amount);
};

#endif