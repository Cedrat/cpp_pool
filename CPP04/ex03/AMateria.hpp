#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>

class AMateria
{
	protected :
		std::string _type;
		int			_xp;

	public : 
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		~AMateria();

		std::string const &	getType() const;
		unsigned int		getXP() const;


		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

		AMateria	&operator=(AMateria const & rhs);
};

#endif
