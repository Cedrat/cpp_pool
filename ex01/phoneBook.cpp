#include "ClassContact.hpp"
std::string format(std::string word)
{
    std::string format;

     if (word.size() > 9)
    {
        word = word.substr(0, 9) + ".|";
        //std::cout << word << ".|" << std::endl;
    }
    else 
    {
        format.assign(10 - word.size(), ' ');
        word = format + word + "|";
        //std::cout << word << "|" << std::endl;
    }
    return (word);
}

void write_attributes(Contact contact)
{
    std::string word;
    std::string str;

    word = contact.getFirstName();
    str  += format(word);
    word = contact.getLastName();
    str += format(word);
    word = contact.getNickname();
    str +=format(word);
    std::cout << str << std::endl;
}

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
		std::getline(std::cin, command);
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
				first_name[i].setAllAttributes();
	            i++;
			}
        }
		else if (command == "SEARCH")
		{
			while (p < i)
			{
				write_attributes(first_name[p]);
				p++;
			}
			p = 0;
		}
        command = "";
    }
}
