#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
   std::cout << "\033[3mOne Basic ClapTrap was created\033[0m" << std::endl; 
}

ClapTrap::ClapTrap(std::string name, unsigned int _hit_points, unsigned int _max_hit_points, unsigned int _energy_points, unsigned int _max_energy_points, unsigned int _level, unsigned int _melee_attack_damage, unsigned int _ranged_attack_damage, unsigned int _armor_damage_reduction) : _name(name) , _hit_points(_hit_points), 
_max_hit_points(_max_hit_points) , _energy_points(_energy_points), _max_energy_points(_max_energy_points),
_level(_level), _melee_attack_damage(_melee_attack_damage) , _ranged_attack_damage(_ranged_attack_damage), 
_armor_damage_reduction(_armor_damage_reduction)
 {
     std::cout << "\033[3mOne ClapTrap was created\033[0m" << std::endl;
 }

 ClapTrap::~ClapTrap()
 {
     std::cout << "\033[3mOne ClapTrap was destroyed\033[0m" << std::endl;
 }

std::string ClapTrap::getName() const
{
    return (this->_name);
}
void ClapTrap::rangedAttack(std::string const & target) const
{
    if (_hit_points == 0)
        std::cout << "\033[1;35m" <<  _name << "\033[0m is dead, he must be cured to be able to do this" << std::endl;
    else
    {
        std::cout << "\033[1;35m" <<  _name << "\033[0m attacks " << target 
        << " at range, causing \033[1;91m" << _ranged_attack_damage << " points of damage!\033[0m" << std::endl;
    }
}

void ClapTrap::meleeAttack(std::string const & target) const
{   
    if (_hit_points == 0)
        std::cout << "\033[1;35m" <<  _name << "\033[0m is dead, he must be cured to be able to do this" << std::endl;
    else
    {
        std::cout << "\033[1;35m" <<  _name << "\033[0m attacks " << target 
        << " hand-to-hand attack, causing \033[1;91m" << _melee_attack_damage 
        << " points of damage!\033[0m" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hit_points == 0)
    {
        std::cout << "\033[1;35m"<<  _name << "\033[0m is already dead ! Don't go after dead bodies. " << std::endl;
        return ;
    }
    if (amount > (_hit_points + _armor_damage_reduction))
        _hit_points = 0;
    else if (_armor_damage_reduction > amount)
        ;
    else
        _hit_points -= amount - _armor_damage_reduction;
    std::cout << "\033[1;35m" <<  _name << "\033[0m had taken a hit and have now \033[1;32m" << _hit_points << " life points\033[0m" << std::endl;
    if (_hit_points == 0)
        std::cout << "\033[1;35m" <<  _name << "\033[0m is dead, he need to be heal " << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_hit_points == _max_hit_points)
    {
        std::cout << "\033[1;35m"<<  _name << "\033[0m is already full of life ! He don't need heal " << std::endl;
        return ;
    }
    if (_hit_points + amount > _max_hit_points)
    {
        std::cout << "This medicine kit cannot be used to its full potential because \033[1;92m" << _max_hit_points << " \033[0mis the maximum of life" << std::endl;
        _hit_points = _max_hit_points;
    }
    else 
        _hit_points += amount;
    std::cout << "\033[1;35m" <<  _name << "\033[0m has been healed and have now \033[1;92m" << _hit_points << " life points \033[0m" << std::endl;
}
