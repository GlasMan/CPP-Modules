#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
int main()
{
	ShrubberyCreationForm a("tree");
	RobotomyRequestForm robot("Eyup");
	PresidentialPardonForm presidential("killer");
	cout << endl;
	cout << endl;
	Bureaucrat burak(9, "Burak");
	cout << endl;
	cout << endl;
	a.beSigned(burak);
	burak.executeForm(a);
	cout << endl;
	cout << endl;
	burak.signForm(robot);
	robot.execute(burak);
	cout << endl;
	cout << endl;
	presidential.beSigned(burak);
	burak.executeForm(presidential);
	cout << endl;
	cout << endl;
	return 0;
}