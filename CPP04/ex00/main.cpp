#include "color.h"
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main(void)
{
    Sorcerer Poseidon("Poseidon", "Olympian GOD");

    Victim Aristote("Aristote");
    Peon    Thesee("Thesee");
    
    std::cout << Poseidon << Aristote << Thesee;
    
    Poseidon.polymorph(Aristote);
    Poseidon.polymorph(Thesee);

    return (0);
}