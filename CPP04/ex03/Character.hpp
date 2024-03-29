#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include "AMateria.hpp"

class AMateria;

class ICharacter
{
	public:
		virtual	~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter
{
	private : 
		AMateria *_bag[4];
		std::string _name;

	public : 
		Character(std::string name);
		Character(Character const & src);
		~Character();

		AMateria *const & getBag() const;
		std::string const &	getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		virtual Character	&operator=(Character const & rhs);
};

#endif
