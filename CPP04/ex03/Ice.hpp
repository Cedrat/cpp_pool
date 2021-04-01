#ifndef ICE_HPP
# define ICE_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
	public : 
		Ice(void);
		Ice(Ice const & src);
		~Ice();

		AMateria*	clone() const;
		void	use(ICharacter& target);
		AMateria	&operator=(AMateria const & rhs);
};

#endif
