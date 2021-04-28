#include "Span.hpp"

#include <iostream>
int main()
{
    {
        Span cuillere(10000);

        std::srand(time(0));
        for (unsigned int i = 0; i < 10000;i++)
            cuillere.addNumber(std::rand());
        Span louche(cuillere);
        Span bol(13);

        bol = louche;
        std::cout << cuillere.shortestSpan() << std::endl;
        std::cout << cuillere.longestSpan() << std::endl;
        std::cout << louche.shortestSpan() << std::endl;
        std::cout << louche.longestSpan() << std::endl;
        std::cout << bol.shortestSpan() << std::endl;
        std::cout << bol.longestSpan() << std::endl;
    }
    {
        Span cuillere(3);
        cuillere.addNumber(6);
        cuillere.addNumber(6);
        cuillere.addNumber(8);

        try
        {
            cuillere.addNumber(10);
        }
        catch (Span::NotEnoughSpaceException const &e)
        {
            std::cout << e.what() << std::endl;
        }

        std::cout << cuillere.shortestSpan() << std::endl;
        std::cout << cuillere.longestSpan() << std::endl;
    }

        Span cuillere(3);
        cuillere.addNumber(6);

        try
        {
            std::cout << cuillere.shortestSpan() << std::endl;
        }
        catch (Span::NotEnoughNumberException const &e)
        {
            std::cout << e.what() << std::endl;
        }

        Span passoire(10);
        int array_int[] = {10, 4 , 6, 32 , 245 , 23, 60, 594, 123, 28};

        passoire.addNArray(array_int, 10);
        std::cout << passoire.shortestSpan() << std::endl;
        std::cout << passoire.longestSpan() << std::endl;
}