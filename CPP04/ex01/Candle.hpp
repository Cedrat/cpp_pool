#ifndef CANDLE_HPP
# define CANDLE_HPP

#include <string>
#include <iostream>
#include "Enemy.hpp"

class Candle : virtual public Enemy
{
	public : 
		Candle(void);
		Candle(Candle const & src);
		~Candle();

		virtual void	takeDamage(int damage);
		virtual Candle	&operator=(Candle const & rhs);
};

#endif
