#include "Bureaucrat.hpp"
#include "color.h"
#include "Form.hpp"

int main(void)
{
    {
        Form *hello_world;
        std::cout << "Form with signin rank 0 and exec rank 75" << std::endl;
        try
        {
            hello_world = new Form("Hello World", 0, 75);
        }
        catch (Form::GradeTooHighException const &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch (Form::GradeTooLowException const &e)
        {
            std::cout << e.what() << std::endl;
        }

        std::cout << "Form with signin rank 1 and exec rank 0" << std::endl;
        try
        {
            hello_world = new Form("Hello World", 1, 0);
        }
        catch (Form::GradeTooHighException const &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch (Form::GradeTooLowException const &e)
        {
            std::cout << e.what() << std::endl;
        }

        std::cout << "Form with signin rank 151 and exec rank 1" << std::endl;
        try
        {
            hello_world = new Form("Hello World", 151, 1);
        }
        catch (Form::GradeTooHighException const &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch (Form::GradeTooLowException const &e)
        {
            std::cout << e.what() << std::endl;
        }

        std::cout << "Form with signin rank 15 and exec rank 151" << std::endl;
        try
        {
            hello_world = new Form("Hello World", 15, 151);
        }
        catch (Form::GradeTooHighException const &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch (Form::GradeTooLowException const &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    {
        Bureaucrat Remi("Rémi", 75);
        std::cout << "\n" << Remi << std::endl;
        Form hello_world("Hello World", 140, 150);
        Form end_of_the_world("end of the world", 1 , 5);
        hello_world.beSigned(Remi);
        try
        {
            end_of_the_world.beSigned(Remi);
        }
        catch (Form::GradeTooLowException const& e)
        {
            std::cout << e.what() <<std::endl;
        }
    }
    {
        Bureaucrat Remi("Rémi", 75);
        std::cout << "\n" << Remi << std::endl;
        Form hello_world("Hello World", 140, 150);
        Form end_of_the_world("end of the world", 1 , 5);
        Remi.signForm(hello_world);
        Remi.signForm(hello_world);
        Remi.signForm(end_of_the_world);

    }
}