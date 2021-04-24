#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP


#include <stack>
#include <string>
#include <deque>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
    public :

    class iterator : public std::iterator<std::input_iterator_tag, int>
    {
    };

    iterator begin() {return std::begin(*this);}

};

#endif