#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat *salut;
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

    std::cout << *salut << std::endl;
    salut->downGrade();

}