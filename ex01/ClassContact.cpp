#include "ClassContact.hpp"

Contact::Contact()
{
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
