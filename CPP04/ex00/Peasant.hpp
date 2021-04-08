#ifndef PEASANT_HPP
# define PEASANT_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Peasant : public Victim
{
    public :
        Peasant(std::string name);
        Peasant(const Peasant&);
        virtual ~Peasant();

        virtual void getPolymorphed(void) const;
};

#endif