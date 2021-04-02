#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

int main()
{
    Character *me = new Character("Loïc");
    AMateria *ball = new Ice();
    AMateria *ball3 = new Cure();
    me->equip(ball3);
    std::cout << ball->getXP() << std::endl;
    ball->giveXP();
    ball->giveXP();
    ball->giveXP();
    std::cout << ball->getXP() << std::endl;
    me->equip(ball);
    me->use(0, *me);
    AMateria *ball2 = new Ice(*ball);
    std::cout << ball->getXP() << std::endl;
    me->equip(ball2);
    me->use(1, *me);
    std::cout << ball2->getXP() << std::endl;
    std::cout << ball->getXP() << std::endl;
    *ball = *ball2;
    std::cout << ball->getXP() << std::endl;
    me->unequip(0);
    me->use(0, *me);
}