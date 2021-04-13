#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
	public : 
		ShrubberyCreationForm(std::string name);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const & executor);


		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const & rhs);
};

#endif
