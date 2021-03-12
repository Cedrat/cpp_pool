#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>
#include <typeinfo>
#include <sstream>

class Brain 
{
    public :
    Brain();
    std::string identify() const;
    std::string getCells(void) const;

    private : 
    std::string _cells;
};

#endif