#ifndef SQUAD_HPP
# define SQUAD_HPP

#include <string>
#include <iostream>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : virtual public ISquad
{
	private :
		int _count;
		ISpaceMarine **_ism;

	public : 
		Squad(void);
		Squad(Squad const & src);
		~Squad();

		virtual int	getCount(void) const;
		virtual ISpaceMarine*	getUnit(int) const;
		virtual int	push(ISpaceMarine*);
		
		virtual Squad	&operator=(Squad const & rhs);
};

#endif
