#include "FragTrap.hpp"

int main(void)
{
    FragTrap ClapTrap("ClapTrap");
    ClapTrap.rangedAttack("chenipan");
    ClapTrap.meleeAttack("Chuck Norris");
    ClapTrap.takeDamage(50);
    ClapTrap.takeDamage(35);
    ClapTrap.takeDamage(20);
    ClapTrap.takeDamage(5);
    ClapTrap.rangedAttack("chenipan");
    ClapTrap.meleeAttack("Chuck Norris");
    ClapTrap.beRepaired(65);
    ClapTrap.beRepaired(30);
    ClapTrap.beRepaired(15);
    ClapTrap.beRepaired(4353);
}