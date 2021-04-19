#include <iostream>
#include "Base.hpp"

Base *create_A(void)
{
    Base *base = new A;
    return base;
}

Base *create_B(void)
{
    Base *base = new B;
    return base;
}

Base *create_C(void)
{
    Base *base = new C;
    return base;
}

Base * generate(void)
{
    Base* (*tab[3])(void);

    tab[0] = &create_A;
    tab[1] = &create_B;
    tab[2] = &create_C;

    Base *base;
    base = tab[std::rand()%3]();
    return base;
}

void identify_from_pointer(Base * p)
{
    Base *test = p;
    test = dynamic_cast<A*> (p);
    if (test != NULL)
        std::cout << "Base is A !!!" << std::endl;
    test = p;
    test = dynamic_cast<B*> (p);
    if (test != NULL)
        std::cout << "Base is B !!!" << std::endl;
    test = p;
    test = dynamic_cast<C*> (p);
    if (test != NULL)
        std::cout << "Base is C !!!" << std::endl;
}

void identify_from_reference(Base &p)
{
    try 
    {
        p = dynamic_cast<A &>(p);
        std::cout << "Base is A !!!" << std::endl;
    }
    catch(std::bad_cast &bc)
    {}
    try 
    {
        p = dynamic_cast<B &>(p);
        std::cout << "Base is B !!!" << std::endl;
    }
    catch(std::bad_cast &bc)
    {}
    try 
    {
        p = dynamic_cast<C &>(p);
        std::cout << "Base is C !!!" << std::endl;
    }
    catch(std::bad_cast &bc)
    {}
}

int main()
{
    std::srand(time(0));
    Base *base = generate();
    std::cout << "identification from pointer" << std::endl;
    identify_from_pointer(base);
    std::cout << "identification from reference" << std::endl;
    identify_from_reference(*base);
}