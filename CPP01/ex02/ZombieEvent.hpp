#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
    public :
        ZombieEvent(void); 
        void setZombieType(std::string type);
        Zombie *newZombie(std::string name);

    private :
        static std::string _typeOfZombies;
};
#endif