#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include <string>
#include <iostream>
#include "Enemy.hpp"

class SuperMutant : virtual public Enemy
{
	public : 
		SuperMutant(void);
		SuperMutant(SuperMutant const & src);
		~SuperMutant();

		virtual void	takeDamage(int damage);
		virtual SuperMutant	&operator=(SuperMutant const & rhs);
};

#endif
