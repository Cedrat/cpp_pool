#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP


#include <stack>
#include <string>
#include <deque>
#include <iterator>
#include <list>

template <typename T>
class MutantStack : public std::stack<T> 
{

    
    public :
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        
        iterator begin(){return this->c.begin();};
        iterator end(){return this->c.end();};
        reverse_iterator rbegin(){return this->c.rbegin();};
        reverse_iterator rend(){return this->c.rend();};

        MutantStack(){};
        MutantStack(T const & rhs) {this->c = rhs->c;}
        ~MutantStack(){};

        MutantStack & operator=(MutantStack const & rhs)
        {
            this->c = rhs->c;
        }

};

#endif