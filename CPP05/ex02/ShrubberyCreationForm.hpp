#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <string>

class ShrubberyCreationForm : public AForm
{
	private :
		-

	public : 
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		~ShrubberyCreationForm();


		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const & rhs);
};

#endif
