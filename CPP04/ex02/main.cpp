#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

#include <string>
#include <iostream>


int main(void)
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISpaceMarine* hardi = bob->clone();
    ISpaceMarine* enemy = jim->clone();
    ISquad* vlc = new Squad;
	ISquad* squad_1 = new Squad;
	squad_1->push(bob);
	ISquad* squad_2 = new Squad(*squad_1);
	std::cout << squad_2->getCount() << std::endl;
	squad_2->push(enemy);
	squad_1 = squad_2;
	std::cout << squad_1->getCount() << std::endl;
    vlc->push(bob);
    vlc->push(jim);
    vlc->push(hardi);
    vlc->push(enemy);
    std::cout << "We had " << vlc->getCount() << " members in this squad." << std::endl;
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;
    return 0;
}
