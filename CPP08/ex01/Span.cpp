#include "Span.hpp"

#include <iostream>
#include <climits>
Span::Span(unsigned int N) : _size(N), _nb_actual(0), _sorted(0)
{
}
Span::Span(Span const &rhs)
{
    *this = rhs;
}

Span::~Span()
{
    //
}

int    Span::shortestSpan()
{
    int diff_min = INT_MAX;

    if (_nb_actual < 2)
    {
        throw (Span::NotEnoughNumberException());
    }
    if (_sorted == 0)
    {
        std::sort(_array.begin(), _array.end());
        _sorted = 1;
    }
    for (unsigned int i = 0; (i+1) < _nb_actual ; i++)
    {
        if (diff_min > (_array[i + 1] - _array[i]))
            diff_min = _array[i + 1] - _array[i];
    }
    return (diff_min);
}

int    Span::longestSpan()
{
    if (_nb_actual < 2)
    {
        throw (Span::NotEnoughNumberException());
    }
    if (_sorted == 0)
    {
        std::sort(_array.begin(), _array.end());
        _sorted = 1;
    }
    return (_array[_nb_actual -1] - _array[0]);
}

void            Span::addNumber(int nb)
{
    if (_nb_actual <  _size)
    {
        _array.push_back(nb);
        _nb_actual++;
    }
    else
    {
        throw(Span::NotEnoughSpaceException());
    }
}

void            Span::addNArray(int *array, size_t size)
{
    std::vector<int>::iterator it = this->_array.begin();
    if ((_nb_actual + size) <= _size)
    {
        this->_array.insert(it , array , array + size);
        _nb_actual += size;
    }
    else
    {
        throw(Span::NotEnoughSpaceException());
    }
}

Span &          Span::operator=(Span const &rhs)
{
    this->_size = rhs._size;
    this->_nb_actual = rhs._nb_actual;
    this->_sorted = rhs._sorted;
    this->_array = rhs._array;
    return (*this);
}

 
const char* Span::NotEnoughSpaceException::what() const throw()
{
    return ("NotEnoughSpaceException");
}

const char* Span::NotEnoughNumberException::what() const throw()
{
    return ("NotEnoughNumberException");
}