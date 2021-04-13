#include "Bureaucrat.hpp"
#include "color.h"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    AForm *shrubbery = new ShrubberyCreationForm("Yo");
    AForm *robot = new RobotomyRequestForm("Napoleon");
    AForm *pardon = new PresidentialPardonForm("End of the world");
    Bureaucrat nobody("nobody", 75);
    Bureaucrat someone("someone", 45);
    Bureaucrat god("god", 1);
    shrubbery->beSigned(nobody);
    try
    {
        shrubbery->execute(nobody);
    }
    catch (AForm::FormNotSignedException const &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (AForm::GradeTooLowException const &e)
    {
        std::cout << e.what() << std::endl;
    }
    someone.signForm(*robot);
    robot->execute(someone);
    god.executeForm(*pardon);
    god.signForm(*pardon);
    someone.executeForm(*pardon);
    god.executeForm(*pardon);
}
