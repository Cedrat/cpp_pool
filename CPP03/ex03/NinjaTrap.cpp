#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120 , 120 , 1, 60 , 5, 0)
 {
     std::cout << "\033[3mNINJA !!!\033[0m" << std::endl;
 }

 NinjaTrap::~NinjaTrap()
 {
    std::cout << "\033[3mSMOKE BALL !!!\033[0m" <<std::endl;
 }

 void NinjaTrap::ninjaShoebox(ClapTrap &ct) const
 {
     std::cout << "\033[1;35m" <<  this->_name << "\033[0m jumps over " << "\033[1;35m" <<  ct.getName() << "\033[0m" << std::endl;
 }

 void NinjaTrap::ninjaShoebox(FragTrap & ft) const
 {
     std::cout << "\033[1;35m" <<  _name << "\033[0m launch a lot of shuriken on " 
     << "\033[1;35m" <<  ft.getName() << "\033[0m and do \033[1;31m30 points of damages\033[0m" << std::endl;
     ft.takeDamage(_ranged_attack_damage);
 }

  void NinjaTrap::ninjaShoebox(ScavTrap & st) const
  {
           std::cout << "\033[1;35m" <<  _name << "\033[0m use their magnificient blades for cut " 
     << "\033[1;35m" <<  st.getName() << "\033[0m and do \033[1;31m30 points of damages\033[0m" << std::endl;
     st.takeDamage(_melee_attack_damage);
  }
 
   void NinjaTrap::ninjaShoebox(NinjaTrap & nt) const
{
    std::cout << "\033[1;35m" <<  _name << "\033[0m use Jutsu Health on " 
     << "\033[1;35m" <<  nt.getName() << "\033[0m and heal \033[1;32m25 lifes points\033[0m" << std::endl;
     nt.beRepaired(25);
}