#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

#include <string> 
#include <iostream>


int main(void)
{
    ISpaceMarine* bob = new TacticalMarine;
    ISquad *vlc = new Squad;
    vlc->push(bob);
    ISpaceMarine* dylan = bob->clone();
    //ISpaceMarine* joseph = new AssaultTerminator;
   //vlc->push(joseph);
    vlc->push(dylan);
    std::cout << vlc->getCount() << std::endl;
    vlc->getUnit(0)->battleCry();
    //vlc->getUnit(1)->battleCry();
    //vlc->getUnit(2)->battleCry();
    // ISpaceMarine* cur = vlc->getUnit(0);
    // cur->battleCry();
    // bob->battleCry();
    // ISpaceMarine* dylan = bob->clone();
    // delete dylan;
    //delete joseph;
    delete vlc;
    system("leaks a.out");
}