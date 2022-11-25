#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include <typeinfo>
#include "C.hpp"

Base * generate(void)
{
	int random;
	Base *ptr;

	srand((unsigned) time(NULL));
	random = rand() % 100;
	if (random % 5 == 0)
		ptr = new A;
	else if (random % 3 == 0)
		ptr = new B;
	else
		ptr = new C;
	return ptr;
}

void identify(Base* p)
{
	if (dynamic_cast<A *> (p))
		cout << "identified type is: 'A'" << endl;
	else if (dynamic_cast<B *> (p))
		cout << "identified type is: 'B'" << endl;
	else
		cout << "identified type is: 'C'" << endl;
}


void identify(Base &p)
{
	int flag;
	Base buff;
	flag = 1;
	try {
		buff = dynamic_cast<A&>(p);
		cout << "identified type is: 'A'" << endl;
		flag = 0;
	}
	catch (std::exception e){
	}
	try {
		if (flag)
		{
			buff = dynamic_cast<B&> (p);
			cout << "identified type is: 'B'" << endl;
			flag = 0;
		}
	}
	catch (std::exception e){
	}
	if (flag)
		cout << "identified type is: 'C'" << endl;
}
