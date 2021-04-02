#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	int i;

	i = 0;
	while (i < 4)
	{
		_source[i] = 0;
		i++;
	}
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	*this = src;
}

MateriaSource::~MateriaSource()
{

}

void MateriaSource::learnMateria(AMateria* materia)
{

}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (_source[i] && _source[i].getType() == "ice")
		{
			AMateria *copy = new Ice(_source[i]);
		}
		else if (_source[i] && _source[i].getType() == "cure")
		{
			AMateria *copy = new Cure(_source[i]);
		}
	}
}

AMateria *const & MateriaSource::getSource() const
{
	return(*this->_source);
}

MateriaSource &MateriaSource::operator=(MateriaSource const & rhs)
{
	this->_source = rhs.getSource();
	return *this;
}

