#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120 , 120 , 1, 60 , 5, 0)
 {
     std::cout << "\033[3mNINJA !!!\033[0m" << std::endl;
 }

 NinjaTrap::~NinjaTrap()
 {
    std::cout << "\033[3mSMOKE BALL !!!\033[0m" <<std::endl;
 }