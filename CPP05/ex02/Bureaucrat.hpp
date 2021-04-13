#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private : 
		std::string _name;
		int			_grade;	

	public : 
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat();

		std::string	const &	getName(void) const;
		int		getGrade(void) const ;
		Bureaucrat	&operator=(Bureaucrat const & rhs);
		void	upGrade();
		void	downGrade();
		void	signForm(AForm  &form);
		void	executeForm(AForm  &form);
		
		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
};

std::ostream & operator<<(std::ostream &o, const Bureaucrat &rhs);

#endif
