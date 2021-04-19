#ifndef CURE_HPP
# define CURE_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
	public :
		Cure(void);
		Cure(AMateria const & src);
		virtual ~Cure();

		AMateria*	clone() const;
		void	use(ICharacter& target);
		Cure	&operator=(Cure const & rhs);
};

#endif
