#include <string>
#include <iostream>

template<typename T>
void iter(T *array, int size_array, void (f)(T *))
{
    for (int i = 0 ; i < size_array; i++)
    {
        f(&array[i]);
    };
}

template<typename T>
void divide_by_two(T  *nb)
{
    *nb /= 2;
}

template<typename T>
void show_square(T *i)
{
    std::cout << (*i)*(*i) << std::endl;
}

void show_opposite(std::string *word)
{
    int size = word->size();

    std::string deference = *word;
    std::string reverse;
    while (size >= 0)
    {
        reverse += deference[size];
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

    std::cout << "\nshow the square of the half tenth first numbers [int]" << std::endl;
    iter<int>(integer, 10, divide_by_two<int>);
    iter<int>(integer, 10, show_square);

    std::cout << "\nshow the square of the half tenth first numbers [float]" << std::endl;
    float floaty[] = {1,2,3,4,5,6,7,8,9,10};
    iter<float>(floaty, 10, divide_by_two<float>);
    iter<float>(floaty, 10, show_square);
}