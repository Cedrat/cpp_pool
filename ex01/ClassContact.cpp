#include "ClassContact.hpp"

int Contact::_cpt = 0;
Contact::Contact()
{
	_index = std::to_string(_cpt);
	_cpt = _cpt + 1;
}

std::string Contact::getFirstName(void)
{
	return (_first_name);
}

std::string Contact::getLastName(void)
{
	return (_last_name);
}

std::string Contact::getNickname(void)
{
	return (_nickname);
}

std::string Contact::getIndex(void)
{
	return (_index);
}
void Contact::setAllAttributes(void)
{
	std::cout << "What is the first name ? " << std::endl ;
	std::getline(std::cin, _first_name);
    std::cout << "What is the last name ? " << std::endl ;
	std::getline(std::cin, _last_name);
    std::cout << "What is the  nickname ? " << std::endl ;
	std::getline(std::cin, _nickname);
    std::cout << "What is the login ? " << std::endl ;
	std::getline(std::cin, _login);
    std::cout << "What is the postal address ? " << std::endl ;
	std::getline(std::cin, _postal_address);
    std::cout << "What is the email address ? " << std::endl ;
	std::getline(std::cin, _email_address);
    std::cout << "What is the phone number ? " << std::endl ;
	std::getline(std::cin, _phone_number);
    std::cout << "What is the birthday date ? " << std::endl ;
	std::getline(std::cin, _birthday_date);
    std::cout << "What is the favorite meal ? " << std::endl ;
	std::getline(std::cin, _favorite_meal);
    std::cout << "What is the underwear color ? " << std::endl ;
	std::getline(std::cin, _underwear_color);
    std::cout << "What is the darkest secret? " << std::endl ;
	std::getline(std::cin, _darkest_secret);
}

void Contact::GetAllAttributes(void)
{
	std::cout << "The first name is : " << _first_name << std::endl;
	std::cout << "The last name is : " << _last_name << std::endl;
	std::cout << "The nickname is : " << _nickname << std::endl;
	std::cout << "The login is : " << _login << std::endl;
	std::cout << "The postal address is : " << _postal_address << std::endl;
	std::cout << "The email address is : " << _email_address << std::endl;
	std::cout << "The phone number is : " << _phone_number << std::endl;
	std::cout << "The birthday date is : " << _birthday_date << std::endl;
	std::cout << "The favorite meal is : " << _favorite_meal << std::endl;
	std::cout << "The underwear color is : " << _underwear_color << std::endl;
	std::cout << "The darkest secret is : " << _darkest_secret << std::endl;
}
