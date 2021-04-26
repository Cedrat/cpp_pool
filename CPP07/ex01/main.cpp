#include <string>
#include <iostream>
#include "iter.hpp"

template<typename T>
void show_square(T & i)
{
    std::cout << (i)*(i) << std::endl;
}
template<typename T>
void show_opposite(T  &word)
{
    int size = word.size();

    std::string reverse;
    while (size >= 0)
    {
        reverse += word[size];
        size--;
    }
    std::cout << reverse << std::endl;
}

int main()
{
    std::cout << "show the square of the tenth first numbers" << std::endl;
    int integer[] = {1,2,3,4,5,6,7,8,9,10};
    iter<int>(integer, 10, show_square);

    std::cout << "\nshow the reverse sens of many french word" << std::endl;
    std::string word[] = {"nos", "mon", "les", "retartiner" , "trop" , "super", "eniripsa", "amuser"};
    iter<std::string>(word, 8, show_opposite);

    std::cout << "\nshow the square of ten float numbers [float]" << std::endl;
    float floaty[] = {1.5,2.5,3.5,4.5,5.5,6.5,7.5,8.5,9.5,10.5};
    iter<float>(floaty, 10, show_square);
}
