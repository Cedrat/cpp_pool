#include "ClassContact.hpp"

Contact::Contact(std::string firstname)
{
    first_name = firstname;
    std::cout << "What is the last name ? " ; std::cin>>last_name;
    std::cout << "What is the nickname ? " ; std::cin>>nickname;
    std::cout << "What is the login ? " ; std::cin>>login;
    std::cout << "What is the postal address ? " ; std::cin>>postal_address;
    std::cout << "What is the email address ? " ; std::cin>>email_address;
    std::cout << "What is the phone number ? " ; std::cin>>phone_number;
    std::cout << "When is the birthday date ? " ; std::cin>>birthday_date;
    std::cout << "What is the favorite meal ? " ; std::cin>>favorite_meal;
    std::cout << "What is the underwear color ? " ; std::cin>>underwear_color;
    std::cout << "What is the darkest secret ? " ; std::cin>>darkest_secret;
}