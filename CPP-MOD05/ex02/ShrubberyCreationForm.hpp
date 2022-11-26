#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

using std::cout;
using std::endl;
using std::string;

class Form;
class Bureaucrat;

class ShrubberyCreationForm : public Form
{
	private:
		const string _target;
		ShrubberyCreationForm();
	public:
		ShrubberyCreationForm(const string target);
		ShrubberyCreationForm(ShrubberyCreationForm &cpy);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const & executor) const;
		ShrubberyCreationForm &operator=(ShrubberyCreationForm &cpy);
};

#endif