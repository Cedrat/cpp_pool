#include "ClassPony.hpp"

Pony ponyOnTheStack()
{
    Pony Tornade;
    Tornade.ponyOfZorro();
    Tornade.describe();
    Tornade.jump();
    return (Tornade);
}

void ponyOfTheHeap()
{
    Pony *Epona = new Pony();
    Epona->ponyOfLink();
    Epona->describe();
    Epona->jump();
    delete Epona;
}

int main()
{
    ponyOfTheHeap();

    ponyOnTheStack();
}
