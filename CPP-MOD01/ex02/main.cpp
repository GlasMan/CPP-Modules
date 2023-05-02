#include <string>
#include <iostream>

using std::cout;
using std::string;
using std::endl;

int main()
{
	string str = "HI THIS IS BRAIN";
	string *stringPTR = &str;
	string &stringREF = str;

	cout << "str address: " << &str << endl;
	cout << "stringPTR address: " << stringPTR << endl;
	cout << "stringREF address: " << &stringREF << endl << endl;

	cout << "The value of string: " << str << endl;
	cout << "The value of the stringPTR: " << *stringPTR << endl;
	cout << "The value of the stringREF: " << stringREF << endl;

}