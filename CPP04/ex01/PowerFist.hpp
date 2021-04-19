#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public :
		PowerFist(void);
		PowerFist(PowerFist const & src);
		virtual ~PowerFist();

		virtual void		attack() const;
		PowerFist	&operator=(PowerFist const & rhs);
};

#endif
