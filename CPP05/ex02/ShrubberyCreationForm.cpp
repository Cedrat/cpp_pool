#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target) : _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}


