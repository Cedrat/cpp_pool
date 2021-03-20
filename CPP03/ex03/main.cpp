#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
    srand (time(0));

    ClapTrap CL4P_TP ("ClapTrap");
    FragTrap FR4V_TP("FragTrap");
    ScavTrap SC4V_TP("SC4V_TP");
    NinjaTrap Ninja("Dingo");
    NinjaTrap Ninja_2("Mickey");
    FR4V_TP.rangedAttack("chenipan");
    FR4V_TP.vaulthunter_dot_exe("chenipan");
    FR4V_TP.meleeAttack("Chuck Norris");
    FR4V_TP.takeDamage(50);
    FR4V_TP.vaulthunter_dot_exe("Doflamingo");
    FR4V_TP.takeDamage(35);
    FR4V_TP.vaulthunter_dot_exe("one random dictator");
    FR4V_TP.takeDamage(20);
    FR4V_TP.takeDamage(5);
    FR4V_TP.takeDamage(34);
    FR4V_TP.takeDamage(10);
    FR4V_TP.rangedAttack("chenipan");
    FR4V_TP.meleeAttack("Chuck Norris");
    FR4V_TP.vaulthunter_dot_exe("a bug");
    FR4V_TP.beRepaired(65);
    FR4V_TP.beRepaired(30);
    FR4V_TP.vaulthunter_dot_exe("a bug");
    FR4V_TP.beRepaired(15);
    FR4V_TP.beRepaired(4353);
    FR4V_TP.vaulthunter_dot_exe("nobody");
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
    SC4V_TP.beRepaired(30);
    SC4V_TP.beRepaired(15);
    SC4V_TP.beRepaired(30);
    Ninja.takeDamage(35);
    SC4V_TP.challengeNewcomer();
    Ninja.ninjaShoebox(CL4P_TP);
    Ninja.ninjaShoebox(FR4V_TP);
    Ninja.ninjaShoebox(SC4V_TP);
    Ninja_2.ninjaShoebox(Ninja);
}