#include "Bureaucrat.hpp"
#include "color.h"

int main(void)
{
    {
        Bureaucrat *salut;
        std::cout << "Attemp to create a bureaucrat rank 151" << std::endl;
        try
        {
            salut =  new Bureaucrat("YOP", 151);
        }
        catch (Bureaucrat::GradeTooHighException const& e)
        {
            std::cout << e.what() << std::endl;
        }
        catch (Bureaucrat::GradeTooLowException const& e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << "\nAttemp to create a bureaucrat rank 0" << std::endl;
        Bureaucrat *salut;
        try
        {
            salut =  new Bureaucrat("YOP", 0);
        }
        catch (Bureaucrat::GradeTooHighException const& e)
        {
            std::cout << e.what() << std::endl;
        }
        catch (Bureaucrat::GradeTooLowException const& e)
        {
            std::cout << e.what() << std::endl;
        }
    }
        {
        std::cout << "\nAttemp to create a bureaucrat rank 1" << std::endl;
        Bureaucrat *salut;
        try
        {
            salut =  new Bureaucrat("YOP", 1);
        }
        catch (Bureaucrat::GradeTooHighException const& e)
        {
            std::cout << e.what() << std::endl;
        }
        catch (Bureaucrat::GradeTooLowException const& e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << *salut << std::endl;
        std::cout << "Attemp to increase this bureaucrat rank" << std::endl;
        salut->upGrade();
        std::cout << "Attemp to decrease at maximum this bureaucrat rank" << std::endl;
        for (int i = 0; i < 149; i++)
        {
            salut->downGrade();
        }
        std::cout << *salut << std::endl;
        std::cout << BLUE"One more time ?"RESET << std::endl;
        salut->downGrade();
        std::cout << *salut << std::endl;
        delete salut;
    }
}