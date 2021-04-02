#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <string>
#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
	private :
		AMateria *_source[4];

	public : 
		MateriaSource(void);
		MateriaSource(MateriaSource const & src);
		~MateriaSource();

		void 				learnMateria(AMateria*);
		AMateria* 			createMateria(std::string const & type);
		AMateria *const & 	getSource() const;
		MateriaSource	&operator=(MateriaSource const & rhs);
};

#endif
