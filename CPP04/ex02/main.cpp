#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include "color.h"

#include <string>
#include <iostream>


int main(void)
{
    ISpaceMarine* sm_1 = new TacticalMarine;
    ISpaceMarine* sm_2 = new AssaultTerminator;
    ISpaceMarine* sm_3= sm_1->clone();
    ISpaceMarine* sm_4 = sm_2->clone();
    ISpaceMarine* sm_5 = new TacticalMarine;
    ISpaceMarine* sm_6 = new AssaultTerminator;
    ISpaceMarine* sm_7= sm_6->clone();
    ISpaceMarine* sm_8 = sm_7->clone();

    ISquad* squad_0 = new Squad;
	ISquad* squad_1 = new Squad;
    squad_1->push(sm_1);
    squad_1->push(sm_2);
    squad_1->push(sm_3);
	ISquad* squad_2 = new Squad(*squad_1);
    std::cout << squad_1->getCount() << std::endl;
    squad_2->push(sm_4);
    squad_2->push(sm_5);
    squad_2->push(sm_6);
    squad_0->push(sm_7);
    squad_0->push(sm_8);
	std::cout << "We had " << squad_2->getCount() <<  " members is squad_2" << std::endl;
    std::cout << PINK << "Assignation copy.. all in squad_0 will die" << RESET << std::endl;
	*squad_0 = *squad_2;
    std::cout << PINK << "End of the carnage" << RESET << std::endl;


    std::cout << "We had " << squad_0->getCount() << " members in this squad." << std::endl;
    for (int i = 0; i < squad_0->getCount(); ++i)
    {
        ISpaceMarine* cur = squad_0->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete squad_0;
    return 0;
}
