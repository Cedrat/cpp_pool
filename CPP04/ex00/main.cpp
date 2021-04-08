#include "color.h"
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Peasant.hpp"

int main(void)
{
    Sorcerer Poseidon("Poseidon", "Olympian GOD");

    Victim Aristote("Aristote");
    Peon    Thesee("Thesee");
    Peasant Persephone("Persephone");
    
    std::cout << Poseidon << Aristote << Thesee << Persephone;
    
    Poseidon.polymorph(Aristote);
    Poseidon.polymorph(Thesee);
    Poseidon.polymorph(Persephone);

    return (0);
}