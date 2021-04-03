#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

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
	int i;

	i = 0;
	while(i < 4)
	{
		if (_source[i] == 0)
		{
			_source[i] = materia->clone();
			return ;
		}
		i++;
	}
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (_source[i] && _source[i]->getType() == "ice" && "ice" == type)
		{
			AMateria *copy = new Ice(*_source[i]);
			return copy;
		}
		else if (_source[i] && _source[i]->getType() == "cure" && "cure" == type)
		{
			AMateria *copy = new Cure(*_source[i]);
			return copy;
		}
		i++;
	}
	return (NULL);
}

AMateria *const & MateriaSource::getSource() const
{
	return(*this->_source);
}

MateriaSource &MateriaSource::operator=(MateriaSource const & rhs)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (this->_source[i] != 0)
		{
			delete this->_source[i];
		}
		i++;
	}
	*this->_source = rhs.getSource();
	return *this;
}

