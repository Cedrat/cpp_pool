#ifndef AQUATHROWER_HPP
# define AQUATHROWER_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"

class AquaThrower : public AWeapon
{
	public : 
		AquaThrower(void);
		AquaThrower(AWeapon const & src);
		~AquaThrower();

		virtual void		attack() const;
		AquaThrower	&operator=(AquaThrower const & rhs);
};

#endif
