#include "Harl.hpp"

int	get_level(string level)
{
	if (level == "DEBUG")
		return 0;
	else if (level == "INFO")
		return 1;
	else if (level == "WARNING")
		return 2;
	else if (level == "ERROR")
		return 3;
	else
		return 4;

}


int main(int ac, char **av)
{
	if (ac == 1 || ac > 2)
		return 1;
	Harl obj;
	string level;
	level.append(av[1]);
	obj.complain(level);

}