#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

using std::cout;
using std::endl;
using std::string;

class Form;

class Intern
{
	public:
		Intern();
		Intern(const Intern &cpy);
		~Intern();
		Intern &operator=(const Intern &cpy);
		Form *makeForm(const string &name, const string &target);
};


#endif