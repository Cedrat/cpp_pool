#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <string>
#include <deque>

int main(int argc, char **argv)
{
    {   
        std::cout << "Test with deque" << std::endl;
        std::deque<int> lst1;

        for (int i = 1; i < (argc - 1); i++)
            lst1.push_back(atoi(argv[i]));
    
        if (easyfind(lst1, atoi(argv[argc - 1])) == 0)
            std::cout << "Value not found" << std::endl;
        else
            std::cout << "Value found" << std::endl;
    }
    {
        std::cout << "\nTest with vector" << std::endl;
        std::vector<int> lst1;

        for (int i = 1; i < (argc - 1); i++)
            lst1.push_back(atoi(argv[i]));
    
        if (easyfind(lst1, atoi(argv[argc - 1])) == 0)
            std::cout << "Value not found" << std::endl;
        else
            std::cout << "Value found" << std::endl;
    }
    {
        std::cout << "\nTest with list" << std::endl;
        std::list<int> lst1;

        for (int i = 1; i < (argc - 1); i++)
            lst1.push_back(atoi(argv[i]));
    
        if (easyfind(lst1, atoi(argv[argc - 1])) == 0)
            std::cout << "Value not found" << std::endl;
        else
            std::cout << "Value found" << std::endl;
    }
}
