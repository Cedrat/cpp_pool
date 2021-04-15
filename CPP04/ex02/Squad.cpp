#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include <typeinfo>

Squad::Squad(void) : _count(0)
{
	std::cout << "Squad created !" << std::endl;
}

Squad::Squad(ISquad const & src) : _count(0)
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
	if (i != 0)
	 	delete [] _ism;
	_count = 0;
}

int	Squad::push(ISpaceMarine* ism)
{
	int i;
	ISpaceMarine** new_ism;

	i = 0;
	if (_count == 0)
	{
		_ism = new ISpaceMarine*[1];
		_ism[0] = ism;
		_count += 1;
	}
	else
	{
		new_ism = new ISpaceMarine*[_count + 1];
		while (i < _count)
		{
			new_ism[i] = _ism[i];
			i++;
		}
		new_ism[i] = ism;
		delete [] _ism;
		_ism = new ISpaceMarine*[_count + 1];
		i = 0;
		while (i <= _count)
		{
			_ism[i] = new_ism[i];
			i++;
		}
		delete [] new_ism;
		_count++;
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

ISquad &Squad::operator=(ISquad const & rhs)
{
	int i;

	i = 0;
	while (i < _count)
	{
		delete this->getUnit(i);
		_ism[i] = NULL;
		i++;
	}
	if (_count != 0)
	{
		delete [] _ism;
	}
	i = 0;
	_ism = new ISpaceMarine*[rhs.getCount() + 1];
	while (i < rhs.getCount())
	{
		_ism[i] = rhs.getUnit(i)->clone();
		i++;
	}
	_count = rhs.getCount();
	return *this;
}
