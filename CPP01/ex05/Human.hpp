#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{
    public :
    Human();
    std::string identify() const;
    void setBrain(Brain const brain);
    const Brain& getBrain() const;

    private :
    Brain const _brain;
};


#endif