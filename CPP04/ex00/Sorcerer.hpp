#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <string>
#include <iostream>

class Sorcerer 
{
    public :
        Sorcerer(std::string name, std::string title);
        Sorcerer(const Sorcerer&);
        ~Sorcerer();

        Sorcerer& getSorcerer(void);
        Sorcerer& operator=(const Sorcerer& rhs);

    private :
        std::string _name;
        std::string _title;
};

#endif