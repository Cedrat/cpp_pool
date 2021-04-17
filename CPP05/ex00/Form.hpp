#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private : 
		std::string _name;
		bool		_is_signed;
		int			_signin_rank;
		int			_exec_rank;

	public : 
		Form(std::string const name, int signin_rank, int _exec_rank);
		Form(Form const & src);
		~Form();

		bool			getIsSigned() const;
		int				getSigninRank() const;
		int				getExecRank() const;
		std::string	const	getName() const;

		void			signing(); 
		void			beSigned(Bureaucrat const &signatory);

		Form	&operator=(Form const & rhs);

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


	std::ostream 	&operator<<(std::ostream &o, Form const & rhs);
#endif
