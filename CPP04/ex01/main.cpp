#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"

int main()
{
    PlasmaRifle Plasma;
    Plasma.attack();
    PowerFist my_fist;
    my_fist.attack();
    SuperMutant sm;
    SuperMutant ms(sm);
    ms = sm;
    std::cout << Plasma.getName() << std::endl;
    std::cout << my_fist.getName() << std::endl;
}