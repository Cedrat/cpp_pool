#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "color.h"

int main()
{
    Character* Doomguy = new Character("The Doom Slayer");
    
    Enemy* Scorpion = new RadScorpion();
    Enemy* SM = new SuperMutant();
    
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    
    Doomguy->attack(Scorpion);
    std::cout << *Doomguy << std::endl;
    Doomguy->equip(pr);
    std::cout << *Doomguy << std::endl;
    Doomguy->attack(Scorpion);
    std::cout << *Doomguy << std::endl;

    Doomguy->equip(pf);
    Doomguy->attack(Scorpion);
    Doomguy->attack(Scorpion);
    
    std::cout << *Doomguy << std::endl;
    Doomguy->attack(SM);
    std::cout << "The enemy has " << GREEN << SM->getHP() << " HP" << RESET << std::endl;
    Doomguy->attack(SM);
    Doomguy->attack(SM);
    Doomguy->recoverAP();
    Doomguy->attack(SM);
    Doomguy->recoverAP();
    Doomguy->attack(SM);
    std::cout << *Doomguy << std::endl;
    Doomguy->equip(NULL);
    std::cout << *Doomguy << std::endl;
    
    delete Doomguy;
    return (0);
}