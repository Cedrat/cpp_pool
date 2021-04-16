#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "color.h"
#include "AquaThrower.hpp"
#include "Candle.hpp"

int main()
{
    Character* Doomguy = new Character("The Doom Slayer");

    Enemy* Scorpion = new RadScorpion();
    Enemy* SM = new SuperMutant();
    Enemy* Candle_1 = new Candle();
    Enemy* Candle_2 = new Candle();
    Enemy* Candle_3 = new Candle();

    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    AWeapon* at = new AquaThrower();

    Doomguy->attack(Scorpion);
    std::cout << *Doomguy << std::endl;
    Doomguy->equip(pr);
    std::cout << *Doomguy << std::endl;
    Doomguy->attack(Scorpion);
    std::cout << *Doomguy << std::endl;
    Doomguy->equip(at);
    Doomguy->attack(Candle_1);
    Doomguy->attack(Candle_2);
    Doomguy->attack(Candle_3);
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
    *at = *pf;
    Doomguy->equip(at);
    std::cout << *Doomguy << std::endl;
    Doomguy->equip(NULL);
	delete at;
	delete pf;
	delete pr;
	delete SM;
    delete Doomguy;
    return (0);
}
