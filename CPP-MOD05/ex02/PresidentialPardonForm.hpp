#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>

#include "Form.hpp"
#include "Bureaucrat.hpp"

using std::cout;
using std::endl;
using std::string;

class PresidentialPardonForm : public Form
{
	private:
		const string _target;
		PresidentialPardonForm();
	public:
		PresidentialPardonForm(const string &target);
		PresidentialPardonForm(const PresidentialPardonForm &cpy);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(const PresidentialPardonForm &cpy);
		void execute(const Bureaucrat &executor) const;
};

#endif