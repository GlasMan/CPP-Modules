#include "Convert.hpp"

int get_size(char *av)
{
	int n = 0;
	int res = 0;
	unsigned long f = 0;
	unsigned long x = 0;
	const string s_nbr(av);
	res = check_type(s_nbr);
	x = s_nbr.find('.');
	f = s_nbr.find('f');
	if (x != string::npos)
		n = (s_nbr.substr(s_nbr.find("."), s_nbr.size())).size() - 1;
	if (f != string::npos)
		n--;
	return n;
}

void check_valid(string s_nbr)
{
	int p = 0;
	int n = 0;
	string::const_iterator it = s_nbr.begin();
	while(it != s_nbr.end() && (std::isdigit(*it) || *it == '.' || *it == 'f' || *it == '+' || *it == '-')) {
		if (*it == '+')
			p++;
		if (*it == '-')
			n--;
		if (p > 1 || n > 1)
			break;
		it++;
	}
	if (it == s_nbr.end() || s_nbr.size() == 1)
		return;
	else
	{
		cout << "It's not convertable: '" << s_nbr << "'" << endl;
		exit(1);
	}
}

int check_type(string s_nbr){

	int x;
	int y;
	if (s_nbr == "nan")
	{
		cout << "char: impossible" << endl;
		cout << "int: impossible" << endl;
		cout << "float: nanf" << endl;
		cout << "double: nan" << endl;
		exit(1);
	}
	x = s_nbr.find('.');
	y = s_nbr.find('f');
	check_valid(s_nbr);
	if (x != -1 && y == -1) // double
		return 2;
	else if (x != -1 && y != -1) // float
		return 3;
	return 4;
}
