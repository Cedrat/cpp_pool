#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    srand (time(0));

    FragTrap ClapTrap("ClapTrap");
    ScavTrap SC4V_TP("SC4V_TP");
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
    SC4V_TP.rangedAttack("chenipan");
    SC4V_TP.meleeAttack("Chuck Norris");
    SC4V_TP.takeDamage(50);
    SC4V_TP.takeDamage(35);
    SC4V_TP.takeDamage(20);
    SC4V_TP.takeDamage(5);
    SC4V_TP.takeDamage(34);
    SC4V_TP.takeDamage(10);
    SC4V_TP.rangedAttack("chenipan");
    SC4V_TP.meleeAttack("Chuck Norris");
    SC4V_TP.beRepaired(65);
    SC4V_TP.beRepaired(30);
    SC4V_TP.beRepaired(15);
    SC4V_TP.beRepaired(4353);
    SC4V_TP.challengeNewcomer();
}