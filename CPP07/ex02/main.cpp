#include <iostream>
#include <string>
#include "Array.hpp"

int main()
{
    Array<int> empty;
    Array<int> full(5);
    int *_array = new int[5]; 
    std::cout << empty[0] << std::endl;
    full[0] = 235;
    std::cout << full[0] << std::endl;
    std::cout << _array[0] << std::endl;
}