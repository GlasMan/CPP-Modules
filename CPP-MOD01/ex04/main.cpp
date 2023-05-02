#include "file.hpp"

int main(int ac, char **av)
{
	std::ofstream outfile;
	string outfile_name;
	string data;

	if (ac != 4){
		cout << "Error: Wrong argument number!" << endl;
		return (1);
	}
	outfile_name = create_out_file(av[1]);
	data = read_file(av[1]);
	replace(data, av[2], av[3]);
	outfile.open(outfile_name);
	outfile << data;
	outfile.close();
	return 0;
}