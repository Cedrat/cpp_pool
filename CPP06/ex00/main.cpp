#include <string>
#include <iostream>
#include <cmath>
#include <climits>
#include <cfloat>

double conv_str_in_db(std::string str)
{
    double doubly;
    doubly = std::stod(str);
    return (doubly);
}

void c_print_char(double doubly)
{
    if (doubly != static_cast<char>(doubly))
    {
        std::cout << "char : impossible" << std::endl;
        return ;
    }
    char letter = static_cast<char>(doubly);
    if (letter >= 32 && letter <= 126)
        std::cout << "char : " << letter << std::endl;
    else
        std::cout << "char : Non displayable" << std::endl;
}

void c_print_float(float doubly)
{
    if ((doubly != static_cast<float>(doubly) || static_cast<float>(doubly) == INFINITY 
                                                || static_cast<float>(doubly) == -INFINITY) && doubly == doubly)
    {
        std::cout << "float : impossible" << std::endl;
        return ;
    }
    float floaty = static_cast<float>(doubly);
    if (((std::roundf(floaty) == floaty) || std::ceilf(floaty) == floaty) && floaty != INFINITY && floaty != -INFINITY)
        std::cout << "float : " << floaty << ".0f" << std::endl;
    else
        std::cout << "float : " << floaty << "f" << std::endl;
}

void c_print_int(float doubly)
{
    if (doubly != (static_cast<int>(doubly)))
    {
        std::cout << "int : impossible" << std::endl;
        return ;
    }
    int nb = static_cast<int>(doubly);
    std::cout << "int : " << nb << std::endl;
}
void c_print_double(double db)
{
    if (std::roundf(db) == db && db != INFINITY && db != -INFINITY)
        std::cout << "double : " << db << ".0" << std::endl;
    else
        std::cout << "double : " << db <<  std::endl;
    
}
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: nb of arguments invalid" << std::endl;
        return (0);
    }
    double doubly;
    try
    {
       doubly = conv_str_in_db(argv[1]);
    }
    catch (std::invalid_argument &e)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return (0);
    }
    c_print_char(doubly);
    c_print_int(doubly);
    c_print_float(doubly);
    c_print_double(doubly);
}