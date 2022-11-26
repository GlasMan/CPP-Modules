#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
	Form a("economic forms", 35, 10);
	Form b("science", 30, 11);
	Bureaucrat bureaucrat(33, "Burak");
	cout << b << endl;
	bureaucrat.signForm(b);
	cout << b << endl;
	cout << a << endl;
	a.beSigned(bureaucrat);
	cout << a << endl;

	cout << bureaucrat << endl;
}