#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <list>


template<typename T>
bool easyfind(T lst, int to_find)
{
    typename T::iterator it;

    it = std::find(lst.begin(), lst.end(), to_find);
    if (it == lst.end())
       return(0);
    return (1);
}

#endif