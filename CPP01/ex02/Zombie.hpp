#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
    public :
    Zombie();
    ~Zombie();
    void advert(void);
    void setType(std::string type);
    void setName(std::string name);

    private :
    std ::string    _name;
    std ::string    _type;
};

std::string randomName(void);
Zombie *randomChump(std::string type);

#endif