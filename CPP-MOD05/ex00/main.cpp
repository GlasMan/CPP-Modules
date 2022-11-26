#include "Bureaucrat.hpp"

int main()
{
	char name[] = "Burak";
	char name1[] = "Esat";
    Bureaucrat a(151, name);
	Bureaucrat b(10, name1);

	a.increase_grade();
	b.increase_grade();
    cout << a << endl;
	cout << b << endl;
}
