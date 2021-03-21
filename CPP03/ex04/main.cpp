#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
    srand (time(0));
    SuperTrap Super_TP("SuperTrap");
    ClapTrap CL4P_TP("CL4T_TP");
    Super_TP.takeDamage(20);
    Super_TP.rangedAttack("crash");
    Super_TP.meleeAttack("someone");
    Super_TP.ninjaShoebox(CL4P_TP);
    Super_TP.vaulthunter_dot_exe("anyone");
}