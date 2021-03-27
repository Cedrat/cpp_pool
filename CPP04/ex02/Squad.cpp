#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include <typeinfo>

Squad::Squad(void) : _count(0)
{
	
}

Squad::Squad(Squad const & src)
{
	*this = src;
}

Squad::~Squad()
{
	int i;

	i = 0;
	while (i < _count)
	{
		delete _ism[i];
		i++;
	}
	delete [] _ism;
}

int	Squad::push(ISpaceMarine* ism)
{
	int i;
	ISpaceMarine** new_ism;

	i = 0;
	if (_count == 0)
	{
		_ism = new ISpaceMarine*[0];
		_ism[0] = ism;
		_ism[0]->battleCry();
		_count += 1;
	}
	else
	{
		new_ism = new ISpaceMarine*[_count];
		while (i < _count)
		{
			new_ism[i] = _ism[i];
			i++;
		}
		new_ism[i] = ism;
		delete [] _ism;
		_ism = new ISpaceMarine*[_count];
		i = 0;
		while (i <= _count)
		{
			_ism[i] = new_ism[i];
			i++;
		}
		delete [] new_ism;
		_count++;
		std::cout << "Segfault" << std::endl;
	}
	return (_count);
}

int	Squad::getCount() const
{
	return (this->_count);
}

ISpaceMarine*	Squad::getUnit(int nb) const
{
	return (_ism[nb]);
}

Squad &Squad::operator=(Squad const & rhs)
{
	this->_count = rhs.getCount();
	return *this;
}

