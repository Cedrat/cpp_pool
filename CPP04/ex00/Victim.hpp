#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <string>
#include <iostream>

class Victim 
{
    public :
        Victim(std::string name);
        Victim(const Victim&);
        virtual ~Victim();

        std::string     getName(void) const;
        std::string     getTitle(void) const;
        
        Victim& operator=(const Victim& rhs);

        virtual void            getPolymorphed(void) const;

    private :
        std::string _name;
};

std::ostream & operator<<(std::ostream &c, const Victim &rhs);

#endif