#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
    public :
        ZombieEvent(std::string type); 
        void setZombieType(std::string type);
        std::string getZombieType(void);
        Zombie *newZombie(std::string name);

    private :
        std::string _typeOfZombies;
};
#endif