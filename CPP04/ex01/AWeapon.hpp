#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <string>

class AWeapon
{
	protected :
		std::string _name;
		int			_apcost;
		int			_damage;

	public : 
		AWeapon(void);
		AWeapon(AWeapon const & src);
		AWeapon(std::string const & name, int apcost, int damage);
		virtual	~AWeapon();

		std::string	const &	getName() const;
		int					getAPCost() const;
		int 				getDamage() const;
		virtual void		attack() const = 0;

		virtual AWeapon		&operator=(AWeapon const & rhs);
};

#endif
