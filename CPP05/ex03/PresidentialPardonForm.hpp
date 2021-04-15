#ifndef PRESIDENTPARDONFORM_HPP
# define PRESIDENTPARDONFORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
	public : 
		PresidentialPardonForm(std::string name);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		~PresidentialPardonForm();
		void execute(Bureaucrat const & executor);


		PresidentialPardonForm	&operator=(PresidentialPardonForm const & rhs);
};

#endif
