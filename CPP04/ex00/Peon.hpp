#ifndef PEON_HPP
# define PEON_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
    public :
        Peon(std::string name);
        Peon(const Peon&);
        virtual ~Peon();

        virtual void getPolymorphed(void) const;
};

#endif