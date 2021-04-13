#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <fstream>
#include "color.h"

RobotomyRequestForm::RobotomyRequestForm(std::string name) : AForm(name, 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src.getName(), 72, 45)
{

	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	if (executor.getGrade() <= this->getExecRank() && this->getIsSigned() == 1)
	{
		std::cout << "* Drill sound *\n* Drill sound *\n* Drill sound *" << std::endl;
		std::cout << PINK << this->getName() << RESET <<  " was robotomized with success by " << PINK << executor.getName() << RESET << std::endl;
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

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	this->copyName(rhs);
	this->copyIsSigned(rhs);
	this->copySigninRank(rhs);
	this->copyExecRank(rhs);
	return *this;
}

