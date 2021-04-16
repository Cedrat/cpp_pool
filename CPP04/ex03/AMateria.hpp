#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include "Character.hpp"

class ICharacter;
class Character;

class AMateria
{
	protected :
		std::string 			_type;
		unsigned int			_xp;

	public :
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		virtual ~AMateria();

		std::string const &		getType() const;
		void setType(std::string);
		unsigned int const &	getXP() const;
		void			giveXP();


		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target) = 0;

		AMateria	&operator=(AMateria const & rhs);
};

#endif
