#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    private :
        int _value;
        int static const _nb_bits = 8;

    public :
        Fixed(void);
        Fixed(Fixed const & src);
        ~Fixed();

        int     getRawBits(void) const;
        Fixed   &operator=(Fixed const & rhs);
};

#endif