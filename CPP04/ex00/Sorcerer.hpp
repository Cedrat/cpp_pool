#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer 
{
    public :
        Sorcerer(std::string name, std::string title);
        Sorcerer(const Sorcerer&);
        ~Sorcerer();

        std::string     getName(void) const;
        std::string     getTitle(void) const;
        
        Sorcerer& operator=(const Sorcerer& rhs);

        virtual void polymorph(Victim const &) const;

    private :
        std::string _name;
        std::string _title;
};

std::ostream & operator<<(std::ostream &c, const Sorcerer &rhs);

#endif