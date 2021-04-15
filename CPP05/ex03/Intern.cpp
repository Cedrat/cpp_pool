#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "color.h"

Intern::Intern(void)
{

}

Intern::~Intern()
{

}

AForm *Intern::createPardon(std::string target)
{
    return (new PresidentialPardonForm(target));
}

AForm *Intern::createShrubbery(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

AForm *Intern::createRobotomy(std::string target)
{
    return (new RobotomyRequestForm(target));
}

AForm* Intern::makeForm(std::string form_name, std::string target)
{
    AForm* (Intern::*tab[3])(std::string);
    std::string ref[3];
    int i;

    i = 0;
    tab[0] = &Intern::createPardon;
    ref[0] = "presidential pardon";
    tab[1] = &Intern::createShrubbery;
    ref[1] = "shrubbery creation";
    tab[2] = &Intern::createRobotomy;
    ref[2] = "robotomy request";

    while (i < 3)
    {
        if (form_name == ref[i])
        {
            std::cout << "Intern create "BLUE << ref[i] << RESET" form with success ! " << std::endl;
            return (this->*tab[i])(target);
        }
        i++;
    }
    std::cout << RED"Error:\ntype of form not found"RESET << std::endl;
    return (NULL);
} 