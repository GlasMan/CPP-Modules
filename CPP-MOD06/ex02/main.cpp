#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
	Base *a;
	for (int i = 0; i < 10; i++) {
		a = generate();
		identify(a);
		identify(*a);
		usleep(700000);
		cout << endl;
	}
}
