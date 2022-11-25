#include "Convert.hpp"

int	ft_isprint(int c)
{
	if (c < 32 || c == 127)
		return (0);
	return (1);
}
template <typename T>
int convert(T nbr, int n)
{
	if (n == 0)
		n = 1;
	if (nbr > 255 || nbr < 0)
		cout << "char: impossible" << endl;
	else if (!ft_isprint(nbr))
		cout << "char: Non displayable" << endl;
	else
		cout << "char: '" << static_cast<char> (nbr) << "'"<< endl;
	int i = static_cast<int> (nbr);
	if (nbr > INT_MAX || nbr < INT_MIN)
		cout << "int: impossible"<< endl;
	else
		cout << "int: " << i << endl;
	float x = static_cast<float> (nbr);
	if (x > std::numeric_limits<float>::max())
		cout << "float: " << std::fixed << std::scientific << std::setprecision(n) << x << "f"<< endl;
	else
		cout << "float: " << std::fixed << std::setprecision(n) << x << "f"<< endl;
	double y = static_cast<double > (nbr);
	if (y > std::numeric_limits<double>::max())
		cout << "double: " << std::scientific << std::setprecision(0) << y << endl;
	else
		cout << "double: " << y << endl;
	return 1;
}

int main(int ac, char **av)
{
	int n;

	n = 0;
	if (ac != 2)
		return 0;
	string str(av[1]);
	if (strlen(av[1]) == 1)
		convert((atoi(av[1])), 0);
	else
	{
		n = get_size(av[1]);
		convert(atof(av[1]), n);
	}
	return 0;
}
