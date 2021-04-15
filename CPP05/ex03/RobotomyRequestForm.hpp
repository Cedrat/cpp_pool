#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
	public : 
		RobotomyRequestForm(std::string name);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		~RobotomyRequestForm();
		void execute(Bureaucrat const & executor);


		RobotomyRequestForm	&operator=(RobotomyRequestForm const & rhs);
};

#endif
