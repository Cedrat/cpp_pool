#include "ClassContact.hpp"

int main()
{
    std::string command;
	Contact first_name[8];
    int i;
	int p;

	p = 0;
    i = 0;
    while (1)
    {
        std::cout << "What do you want to do ?  (ADD, SEARCH, EXIT)" << std::endl ;
		std::cin>>command;
        if (command == "EXIT")
            break;
        else if (command == "ADD")
        {
			if (i > 7)
			{
				std::cout << "The PhoneBook is full.. is really a trash PhoneBook..." << std::endl;
			}
			else
			{
				first_name[i].setFirstName();
	            i++;
			}
        }
		else if (command == "SEARCH")
		{
			while (p < i)
			{
				first_name[p].getFirstName();
				p++;
			}
			p = 0;
		}
    }
}
