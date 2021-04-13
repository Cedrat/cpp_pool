#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <fstream>
#include "color.h"

PresidentialPardonForm::PresidentialPardonForm(std::string name) : AForm(name, 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src.getName(), 25, 5)
{

	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	if (executor.getGrade() <= this->getExecRank() && this->getIsSigned() == 1)
	{
		std::cout << PINK << this->getName() << RESET <<  " was forgiven with success by " << PINK << "Zaphod" << RESET << std::endl;
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

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	this->copyName(rhs);
	this->copyIsSigned(rhs);
	this->copySigninRank(rhs);
	this->copyExecRank(rhs);
	return *this;
}

