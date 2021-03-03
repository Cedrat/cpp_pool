#include <iostream>

void capslock(char *str)
{
    int i;
    i = 0;

    while (str[i])
    {
        if ( 'a' <= str[i] && str[i] <= 'z')
            str[i] = str[i] - 'a' + 'A';
        i++;
    }
}

int main(int argc, char **argv)
{
    int i;
    std::string str;

    i = 1;
    if (argc == 1)
    {
        std::cout << " * LOUD AND UNBEAREABLE FEEDBACK NOISE * " << std::endl;
        return (1);
    }
    while(argv[i])
    {
        capslock(argv[i]);
        str += argv[i];
        i++;
    }
    std::cout << str << std::endl;
    return (1);
}