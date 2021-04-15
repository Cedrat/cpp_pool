#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include "AForm.hpp"

class Intern
{
	public : 
		Intern(void);
		~Intern();
		
		AForm *createPardon(std::string target);
		AForm *createShrubbery(std::string target);
		AForm *createRobotomy(std::string target);
		AForm *makeForm(std::string form_name, std::string target);

};

#endif
