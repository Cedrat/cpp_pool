#include "Fixed.hpp"

int pow_of_two(int two_power);

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int raw)
{
    std::cout << "Int constructor called" << std::endl;
    this->setRawBits(raw);
}

Fixed::Fixed(float raw)
{
    std::cout << "Float constructor called" << std::endl;
    this->setRawBits(raw);
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
    return (this->_value);
}

void    Fixed::setRawBits(int const raw)
{
    this->_value = raw << _nb_bits;
}

void    Fixed::setRawBits(float const raw)
{
    this->_value = raw * pow_of_two(_nb_bits);
}

int Fixed::toInt(void) const
{
    return (this->_value >> _nb_bits);
}

float Fixed::toFloat(void) const
{
    return ((this->_value / (float) pow_of_two(_nb_bits)));
}

Fixed &Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Assignation operator called" << std::endl; 
    this->_value = rhs.getRawBits();
    return *this; 
}

std::ostream & operator<<( std::ostream &o ,Fixed const & rhs)
{
    o << rhs.toFloat();
    return o; 
}

int pow_of_two(int two_power)
{
    int i;
    int nb;

    i = 0;
    nb = 1;
    while (i < two_power)
    {
        nb *= 2;
        i++;
    }
    return (nb);
}