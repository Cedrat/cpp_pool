#include "Form.hpp"
#include <iostream>
#include "color.h"

Form::Form(std::string const name, int signin_rank, int _exec_rank) : _name(name) , _is_signed(0), _signin_rank(signin_rank) , _exec_rank(_exec_rank)
{
	if (_signin_rank < 1 || _exec_rank < 1)
		throw GradeTooHighException();
	if (_signin_rank > 150 || _exec_rank > 150)
		throw GradeTooLowException();
}

Form::Form(Form const & src)
{
	*this = src;
}

Form::~Form()
{

}

bool			Form::getIsSigned() const
{
	return (this->_is_signed);
}

int				Form::getSigninRank() const
{
	return (this->_signin_rank);
}

int				Form::getExecRank() const
{
	return (this->_exec_rank);
}

std::string	const	Form::getName() const
{
	return (this->_name);
}

Form &Form::operator=(Form const & rhs)
{
	this->_exec_rank = rhs.getExecRank();
	this->_signin_rank = rhs.getSigninRank();
	this->_is_signed = rhs.getIsSigned();
	this->_name = rhs.getName();
	return *this;
}

void			Form::signing() 
{
	this->_is_signed = 1;
}

std::ostream &operator<<(std::ostream &o, Form const & rhs)
{
	o << "The form "PINK << rhs.getName() << RESET" is signed ? ("RED <<  rhs.getIsSigned() << RESET
	"). We need a bureaucrat rank "BLUE << rhs.getSigninRank() << RESET" for signin this and a bureaucrat rank "GREEN << rhs.getExecRank()
	 <<RESET " for exec this.";
	return (o);
}

const char *	Form::GradeTooHighException::what() const throw()
{
	return (RED"GradeTooHighException"RESET);
}

const char *	Form::GradeTooLowException::what() const throw()
{
	return (RED"GradeTooLowException"RESET);
}

void			Form::beSigned(Bureaucrat const &signatory)
{
	if (signatory.getGrade() <= this->getSigninRank())
	{
		_is_signed = 1;
		std::cout << "Form is signed." << std::endl;
	}
	else
	{
		std::cout << "Form not signed because : " << std::endl;
		throw GradeTooLowException();
	}
}