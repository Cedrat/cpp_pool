#ifndef ICE_HPP
# define ICE_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
	public :
		Ice(void);
		Ice(AMateria const & src);
		virtual ~Ice();

		AMateria*	clone() const;
		void	use(ICharacter& target);
		Ice	&operator=(Ice const & rhs);
};

#endif
