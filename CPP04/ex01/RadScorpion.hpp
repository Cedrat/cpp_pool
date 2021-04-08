#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include <string>
#include <iostream>
#include "Enemy.hpp"

class RadScorpion : virtual public Enemy
{
	public : 
		RadScorpion(void);
		RadScorpion(RadScorpion const & src);
		~RadScorpion();

		virtual RadScorpion	&operator=(RadScorpion const & rhs);
};

#endif
