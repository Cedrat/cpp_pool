#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    private :
        int _value;
        int static const _nb_bits = 8;

    public :
        Fixed(void);
        Fixed(int raw);
        Fixed(float raw);
        Fixed(Fixed const & src);
        ~Fixed();

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        void    setRawBits(float const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
        Fixed   &operator=(Fixed const & rhs);
};

std::ostream   & operator<<(std::ostream &o , Fixed const & rhs);

#endif