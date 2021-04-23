#include "Span.hpp"

#include <iostream>
int main()
{
    Span cuillere(1000000);

    std::srand(time(0));
    for (unsigned int i = 0; i < 1000000;i++)
        cuillere.addNumber(std::rand());
    std::cout << cuillere.shortestSpan() << std::endl;
    std::cout << cuillere.longestSpan() << std::endl;
}