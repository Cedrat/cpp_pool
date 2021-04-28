#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <vector>

class Span
{
    public :

        Span(unsigned int N);
        Span(Span const & rhs);
        ~Span();

        int             shortestSpan();
        int             longestSpan();
        void            addNumber(int nb);
        void            addNArray(int *array, size_t size);
        Span & operator=(Span const &rhs);

        class NotEnoughSpaceException : public std::exception
        {
            public : 
                virtual const char* what() const throw();
        };

        class NotEnoughNumberException : public std::exception
        {
            public : 
                virtual const char* what() const throw();
        };

    private : 
        std::vector <int> _array;
        unsigned int _size;
        unsigned int _nb_actual;
        bool _sorted;


};

#endif