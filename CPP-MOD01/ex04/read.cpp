#include "file.hpp"

string read_file(char *av)
{
	std::ifstream file(av);
	string data;
	char c[2];

	if (file.is_open() == 0){
		cout << "There is no such a file " << av[1] << endl;
		exit(1);
	}
	while (!file.eof())
	{
		file.read(c, 1);
		data.append(c);
	}
	file.close();
	return data;
}

void replace(string &data, char *to_find, char *to_replace)
{
	int x;
	int len;

	x = 1;
	len = strlen(to_find);
	while(1){
		x = data.find(to_find);
		if (x != -1)
		{
			data.erase(x, len);
			data.insert(x, to_replace);
		}
		else
			break;
	}
}

string create_out_file(char *av)
{
	string outfile_name;

	outfile_name = "";
	outfile_name.append(av);
	outfile_name.append(".replace");
	return outfile_name;
}