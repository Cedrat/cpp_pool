#include "MutantStack.hpp"
#include <string>
#include <iostream>


int main()
{
   {
    std::cout << "Mutant Stack" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();

    std::cout << "La taille de stack est de " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "Iterator" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "Reverse iterator" << std::endl;
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    while (rit != rite)
    {
        std::cout << *rit << std::endl;
        ++rit;
    }
    std::stack<int> s(mstack);
    
   }
    {
        std::cout << "Same test with std::list" << std::endl;
        std::list<int> mstack;
        mstack.push_back(5);
        mstack.push_back(17);
        std::cout << mstack.back() << std::endl;
        mstack.pop_back();

        std::cout << "La taille de la liste  est de " << mstack.size() << std::endl;
        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);
        mstack.push_back(0);
        std::list<int>::iterator it = mstack.begin();
        std::list<int>::iterator ite = mstack.end();
        ++it;
        --it;
        std::cout << "Iterator" << std::endl;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::cout << "Reverse iterator" << std::endl;
        std::list<int>::reverse_iterator rit = mstack.rbegin();
        std::list<int>::reverse_iterator rite = mstack.rend();
        while (rit != rite)
        {
            std::cout << *rit << std::endl;
            ++rit;
        }
        std::list<int> s(mstack);
        return 0;
   }
}