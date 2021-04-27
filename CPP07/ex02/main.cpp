#include <iostream>
#include <string>
#include "Array.hpp"

template<typename T>
void    print_tab(T const & rhs, unsigned int size)
{
    for (unsigned  int i = 0 ; i < size ; i++)
    {
        std::cout << rhs[i] << std::endl;
    }
}

int main()
{
    std::cout << "Array of string" << std::endl;
    Array<std::string> first_name(3);
    first_name[0] = "Lea";
    first_name[1] = "Matthieu";
    first_name[2] = "Lou";

    print_tab<Array<std::string> >(first_name, first_name.size());

    std::cout << "\nArray of int" << std::endl;
    Array<int> integer(3);
    integer[0] = 10;
    integer[1] = 100;
    integer[2] = 1000;

    print_tab<Array<int> >(integer, integer.size());


    std::cout << "\nArray of float" << std::endl;
    Array<float> floaty(3);
    floaty[0] = 10.1;
    floaty[1] = 100.1;
    floaty[2] = 1000.1;

    print_tab<Array<float> >(floaty, floaty.size());

    std::cout << "\nCreation of an array with size 0" << std::endl;
    Array<char> letter;

    std::cout << "copy constructor with the array of names" << std::endl;
    Array<std::string> copy_name(first_name);
    std::cout << "\nMatthieu become Mat" << std::endl;
    copy_name[1] = "Mat";
    std::cout << "\nprint copy name" << std::endl;
    print_tab<Array<std::string> >(copy_name, copy_name.size());
    std::cout << "\nreprint the first array" << std::endl;
    print_tab<Array<std::string> >(first_name, first_name.size());
    std::cout << "\nsize of the array is " << first_name.size() << std::endl;
    std::cout << "\ntrying to access slot 4" << std::endl;
    try
    {
        copy_name[4];
    }
    catch (std::exception const &e)
    {
        std::cout << "Exception catch" << std::endl;
    }
}
