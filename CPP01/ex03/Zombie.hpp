#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
    public :
    Zombie(void);
    ~Zombie();
    void advert(void);
    void setType(std::string type);
    void setName(std::string name);

    private :
    std ::string    _name;
    std ::string    _type;
};

class ZombieHorde
{
    public :
        ZombieHorde(int N);
        ~ZombieHorde();

    private :
        Zombie *_horde;
        int     _sizeHorde;
};

std::string randomName(void);
Zombie *randomChump(std::string type);

#endif