#ifndef CLASSPONY_HPP
# define CLASSPONY_HPP

#include <string>
#include <iostream>
class Pony
{
    public :
    Pony();
    ~Pony();
    
    void ponyOfZorro();
    void ponyOfLink();
    void ponyOnTheHeap();
    void jump() const;
    void describe() const;

    private :
    std::string     _name;
    std::string     _color;
    std::string     _mane;
    std::string     _speed;
};

#endif