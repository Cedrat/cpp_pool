#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include <iostream>
#include "color.h"

int main()
{
    {
        std::cout << RED << "\nPERSONNAL MAIN" << RESET << std::endl;
        Character *me = new Character("Someone");
        AMateria *ball = new Ice();
        AMateria *ball3 = new Cure();
        IMateriaSource* src = new MateriaSource();

        me->equip(ball);
        me->equip(ball3);
        me->unequip(2);
        me->use(0, *me);

        AMateria *ball2 = new Ice(*ball);
        std::cout << ball->getXP() << std::endl;
        me->equip(ball2);
        me->use(1, *me);

        std::cout << ball->getXP() << std::endl;
        *ball = *ball2;
        src->learnMateria(new Cure(*ball3));
        src->learnMateria(new Ice(*ball));
        Character *fake_me = new Character(*me);
        fake_me->unequip(0);
        fake_me->unequip(1);
        fake_me->unequip(2);
        fake_me->unequip(3);
        fake_me->equip(src->createMateria("ice"));
        *ball3 = *ball2;
        *me = *fake_me;
        fake_me->equip(src->createMateria("cure"));
        fake_me->use(0, *me);
        fake_me->use(1, *me);
        me->unequip(0);
        me->use(0, *me);
        me->use(1, *me);
		delete src;
        delete me;
        delete fake_me;
    }
     {
        std::cout << RED << "\nMAIN EXO" << RESET << std::endl;
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter* moi = new Character("moi");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        moi->equip(tmp);
        tmp = src->createMateria("cure");
        moi->equip(tmp);
        ICharacter* bob = new Character("bob");
        moi->use(0, *bob);
        moi->use(1, *bob);
        delete bob;
        delete moi;
        delete src;
        return 0;

    }


}
