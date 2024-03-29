#include "Bureaucrat.hpp"
#include "color.h"
#include <stdexcept>

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name) , _grade(grade)
{
		if (grade < 1)
		{
			throw GradeTooHighException();
		}
		else if (grade > 150)
		{
			throw GradeTooLowException();	
		}
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
}

Bureaucrat::~Bureaucrat()
{

}

std::string	const & Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	 	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void Bureaucrat::upGrade(void)
{
	if ((_grade - 1) < 1)
	{
		std::cout << RED"Impossible Operation:\nGives to the bureaucrat a rank who no exist"RESET << std::endl;
	}
	else
	{
		_grade--;
	}
}

void Bureaucrat::downGrade(void)
{
	if ((_grade + 1) > 150)
	{
		std::cout << RED"Impossible Operation:\nGives to the bureaucrat a rank who no exist"RESET << std::endl;
	}
	else
	{
		_grade++;
	}
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const & rhs)
{
	this->_name = rhs.getName();
	this->_grade = rhs.getGrade();
	return *this;
}

std::ostream & operator<<(std::ostream &o,const Bureaucrat &rhs)
{
	o << PINK << rhs.getName() <<  RESET << ", bureaucrat grade " << BLUE << rhs.getGrade() << RESET << ".";
	return o;
}

void	Bureaucrat::signForm(Form  &form)
{
	if (form.getSigninRank() >= this->getGrade() && form.getIsSigned() != 1)
	{
		std::cout << PINK << this->getName() << RESET << " signs "BLUE << form.getName() << RESET << std::endl;
		form.signing();
	}
	else if (form.getSigninRank() >= this->getGrade() &&form.getIsSigned() == 1)
		std::cout << PINK << this->getName() << RESET << " cant sign "BLUE << form.getName() << RESET << " form because he is already signed" << std::endl;
	else
		std::cout << PINK << this->getName() << RESET << " cant sign "BLUE << form.getName() << RESET << " because bureaucrat rank lower" << std::endl;

}

const char *	Bureaucrat::GradeTooHighException::what() const throw()
{
	return (RED"GradeTooHighException"RESET);
}

const char *	Bureaucrat::GradeTooLowException::what() const throw()
{
	return (RED"GradeTooLowException"RESET);
}