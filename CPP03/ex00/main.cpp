#include "FragTrap.hpp"
#include <cstdlib>

int main(void)
{
    srand (time(0));

    FragTrap ClapTrap("ClapTrap");
    ClapTrap.rangedAttack("chenipan");
    ClapTrap.vaulthunter_dot_exe("chenipan");
    ClapTrap.meleeAttack("Chuck Norris");
    ClapTrap.takeDamage(50);
    ClapTrap.vaulthunter_dot_exe("Doflamingo");
    ClapTrap.takeDamage(35);
    ClapTrap.vaulthunter_dot_exe("one random dictator");
    ClapTrap.takeDamage(20);
    ClapTrap.takeDamage(5);
    ClapTrap.takeDamage(34);
    ClapTrap.takeDamage(10);
    ClapTrap.rangedAttack("chenipan");
    ClapTrap.meleeAttack("Chuck Norris");
    ClapTrap.vaulthunter_dot_exe("a bug");
    ClapTrap.beRepaired(65);
    ClapTrap.beRepaired(30);
    ClapTrap.vaulthunter_dot_exe("a bug");
    ClapTrap.beRepaired(15);
    ClapTrap.beRepaired(4353);
    ClapTrap.vaulthunter_dot_exe("nobody");
}