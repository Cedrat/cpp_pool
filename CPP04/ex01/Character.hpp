#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private :
		std::string _name;
		AWeapon *	_weapon;
		int			_ap;

	public : 
		Character(std::string const & name);
		Character(Character const & src);
		~Character();

		void		recoverAP(void);
		void		equip(AWeapon*);
		void		attack(Enemy*);
		std::string const &	getName(void) const;
		int const &			getAP(void) const;
		AWeapon	*getWeapon(void) const;
		Character	&operator=(Character const & rhs);
};

std::ostream & operator<<(std::ostream &o,const Character  &Char);
#endif
