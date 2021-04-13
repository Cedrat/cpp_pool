#ifndef AFORM_HPP
# define AFORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private : 
		std::string _name;
		bool		_is_signed;
		int			_signin_rank;
		int			_exec_rank;

	public : 
		AForm(std::string const name, int signin_rank, int _exec_rank);
		AForm(AForm const & src);
		~AForm();

		bool			getIsSigned() const;
		int				getSigninRank() const;
		int				getExecRank() const;
		std::string	const	getName() const;

		void			copyName(AForm const & rhs);
		void			copySigninRank(AForm const & rhs);
		void			copyExecRank(AForm const & rhs);
		void			copyIsSigned(AForm const &rhs);


		virtual void 	execute (Bureaucrat const & executor) = 0;

		void			signing(); 
		void			beSigned(Bureaucrat const &signatory);

		AForm	&operator=(AForm const & rhs);

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
	class FormNotSignedException : public std::exception
	{
		public : 
			virtual const char* what() const throw();
	};
};

	std::ostream 	&operator<<(std::ostream &o, AForm const & rhs);
#endif
