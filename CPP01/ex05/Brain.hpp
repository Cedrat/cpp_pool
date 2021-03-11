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
    std::string identify();

    private : 
    std::string _brainAddress;
};

#endif