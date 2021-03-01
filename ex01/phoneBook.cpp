#include "ClassContact.hpp"

int main()
{
    std::string command;
    int i;

    i = 0;
    while (1)
    {
        std::cout << "What do you want to do ?  (ADD, SEARCH, EXIT)" << std::endl ; std::cin>>command;
        if (command == "EXIT")
            break;
        else if (command == "ADD")
        {
            Contact un;
            i++;
        }
    }
}