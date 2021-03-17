#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
    *this = src;
    std::cout << "Copy constructor called" << std::endl; 
}

int    Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl; 
    return (this->_value);
}

void    Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

Fixed &Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Assignation operator called" << std::endl; 
    this->_value = rhs.getRawBits();
    return *this; 
}