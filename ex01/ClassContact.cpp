#include "ClassContact.hpp"

Contact::Contact()
{
}

void Contact::getFirstName(void)
{
	std::cout << first_name << std::endl;
}

void Contact::setFirstName(void)
{
	std::cout << "What is the first name ? " << std::endl ;
	std::cin>>this->first_name;
}
