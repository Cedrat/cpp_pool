#include "Bureaucrat.hpp"
#include "color.h"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Bureaucrat god("god", 1);
    Intern someone;
    AForm *pardon = someone.makeForm("presidential pardon", "moi");
    god.signForm(*pardon);
    god.executeForm(*pardon); 
    delete pardon;
    pardon = someone.makeForm("shrubbery creation", "little garden");
    god.signForm(*pardon);
    god.executeForm(*pardon);
    delete pardon;
    pardon = someone.makeForm("robotomy request", "bender");
    god.signForm(*pardon);
    god.executeForm(*pardon);
    delete pardon;
    pardon = someone.makeForm("robotomyrequest", "bender");
}
