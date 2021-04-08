#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <string>
#include <iostream>

class Enemy
{
	protected :
		int	_hp;
		std::string _type;

	public : 
		Enemy(void);
		Enemy(int _hp, std::string const & _type);
		Enemy(Enemy const & src);
		virtual ~Enemy();
		
		int					getHP() const;
		std::string const &	getType() const;
		virtual void 		takeDamage(int);
		virtual Enemy	&operator=(Enemy const & rhs);
};

#endif
