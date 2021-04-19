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
		Squad(ISquad const & src);
		virtual ~Squad();

		virtual int	getCount(void) const;
		void		setCount(int);
		virtual ISpaceMarine*	getUnit(int) const;
		virtual int	push(ISpaceMarine*);

		Squad	&operator=(Squad const & rhs);
};

#endif
