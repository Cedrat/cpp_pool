#include "ClassContact.hpp"
std::string format(std::string word)
{
    std::string format;

     if (word.size() > 9)
        word = word.substr(0, 9) + ".|";
    else 
    {
        format.assign(10 - word.size(), ' ');
        word = format + word + "|";
    }
    return (word);
}

void write_attributes(Contact contact)
{
    std::string word;
    std::string str;
    word = contact.getIndex();
    str += format(word);
    word = contact.getFirstName();
    str  += format(word);
    word = contact.getLastName();
    str += format(word);
    word = contact.getNickname();
    str +=format(word);
    std::cout << str << std::endl;
}

void search_in_phonebook(Contact *contact, size_t size_phonebook)
{
    std::string command;
    size_t p;
    
    p = 0;
    {
        if (size_phonebook == 0)
            std::cout<< "Phonebook is empty, ADD contact in first" << std::endl;
        else
        {   
			while (p < size_phonebook)
			{
				write_attributes(contact[p]);
				p++;
			}
			p = 0;
            std::cout << "Who do you want the index ?" << std::endl;
            std::getline(std::cin, command);
            if ("0" <= command && command <= "8" && std::stoi(command) <= (int)size_phonebook)
                contact[std::stoi(command)].GetAllAttributes();
            else
                std::cout << "Invalid input/index" << std::endl;
        }
	}
}

void add_in_phonebook(Contact *contact, size_t *nb_of_contact)
{
    if (*nb_of_contact > 7)
		{
			std::cout << "The PhoneBook is full.. is really a trash PhoneBook..." << std::endl;
		}
		else
		{
			contact[*nb_of_contact].setAllAttributes();
	        (*nb_of_contact)++;
		}
}

int main()
{
    std::string command;
	Contact contact[8];
    size_t i;

    i = 0;
    while (1)
    {
        std::cout << "What do you want to do ?  (ADD, SEARCH, EXIT)" << std::endl ;
		std::getline(std::cin, command);
        if (command == "EXIT")
            break;
        else if (command == "ADD")
            add_in_phonebook(contact, &i);
		else if (command == "SEARCH")
            search_in_phonebook(contact, i);
        command = "";
    }
}
