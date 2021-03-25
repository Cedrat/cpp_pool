#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public : 
		PlasmaRifle(void);
		PlasmaRifle(AWeapon const & src);
		~PlasmaRifle();

		virtual void		attack() const;
		PlasmaRifle	&operator=(PlasmaRifle const & rhs);
};

#endif
