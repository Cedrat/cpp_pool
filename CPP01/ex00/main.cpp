#include "ClassPony.hpp"

Pony ponyOnTheStack()
{
    Pony Tornade;
    Tornade.ponyOfZorro();
    return (Tornade);
}

void ponyOfTheHeap()
{
    Pony *Epona = new Pony();
    Epona->ponyOfLink();
    Epona->~Pony();
}

int main()
{
    ponyOfTheHeap();

    ponyOnTheStack();
    
}