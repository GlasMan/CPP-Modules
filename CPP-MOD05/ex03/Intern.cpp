#include "Intern.hpp"

Intern::Intern() {
	cout << "Intern Constructor called" << endl;
}

Intern::Intern(const Intern &cpy) {
	(*this) = cpy;
}

Intern &Intern::operator=(const Intern &cpy) {
	(void)cpy;
	return (*this);
}

Form *Intern::makeForm(const string &name, const string &target) {
	string names[3] = {
			"shrubbery creation",
			"robotomy request",
			"presidential pardon"
	};
	Form *forms[] =  {
		new ShrubberyCreationForm(target),
		new RobotomyRequestForm(target),
	new PresidentialPardonForm(target)};
	for (int i = 0; i < 3; i++){
		int x = (names[i] == name) ?  1 : 0;
		switch (x) {
			case 0:
				break;
			case 1:
				cout << "Intern creates " <<  name << " form" << endl;
				for(int j = 0; j < 3; j++)
					(j != i) ? delete forms[j] : (void)forms[j];
				return (forms[i]);
		}
	}
	cout << "Intern can not create " <<  name << " form" << endl;
	delete forms[0];
	delete forms[1];
	delete forms[2];
	return NULL;
}

Intern::~Intern() {
	cout << "Intern Destructor called" << endl;
}