#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>
#include "color.h"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : AForm(name, 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src.getName(), 145, 137)
{

	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	if (executor.getGrade() <= this->getExecRank() && this->getIsSigned() == 1)
	{
		std::ofstream file;
		file.open(this->getName()+"_Shruberry");
		file <<"           ,@@@@@@@," << std::endl;
		file <<"   ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
		file <<",&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
		file <<",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
		file <<"%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
		file <<"%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
		file <<"`&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
		file <<"    |o|        | |         | |" << std::endl;
		file <<"    |.|        | |         | |" << std::endl;
		file <<"  \\/ ._\\//_/__/  ,\\ _//__\\/.  \\_//__/_" << std::endl;
		file.close();
		std::cout << "a lot of bush have been planted by " << PINK << executor.getName() << RESET << " !" << std::endl;
	}
	else if (executor.getGrade() > this->getExecRank())
	{
		throw GradeTooLowException();
	}
	else
	{
		throw FormNotSignedException();
	}
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	this->copyName(rhs);
	this->copyIsSigned(rhs);
	this->copySigninRank(rhs);
	this->copyExecRank(rhs);
	return *this;
}

