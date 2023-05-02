#include <iostream>


int main(int argc, char **argv)
{
	int	i;
	int j;

	i = 0;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (argv[++i])
	{
		j = -1;
		while(argv[i][++j])
			std::cout << char(toupper(argv[i][j]));
		if (i + 1 != argc)
			std::cout << " ";
	}
	std::cout << std::endl;
	return 0;
}
