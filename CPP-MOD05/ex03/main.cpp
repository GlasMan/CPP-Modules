#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern in;
	Form* rrf;
	Bureaucrat burak(10, "Burak");
	cout << endl;
	cout << endl;
	cout << endl;
	rrf = in.makeForm("robotomy request", "Bender");
	if (!rrf){
		exit(1);
	}
	cout << endl;
	cout << endl;
	cout << endl;
	rrf->beSigned(burak);
	rrf->execute(burak);
	cout << endl;
	cout << endl;
	cout << endl;
	delete rrf;
	return 0;
}
