#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>

#include "Form.hpp"
#include "Bureaucrat.hpp"

using std::cout;
using std::endl;
using std::string;

class Form;
class Bureaucrat;

class RobotomyRequestForm : public Form
{
	private:
		const string _target;
		RobotomyRequestForm();
	public:
		RobotomyRequestForm(const string target);
		RobotomyRequestForm(const RobotomyRequestForm &cpy);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm &cpy);
		void execute(const Bureaucrat &executor) const;
};

#endif