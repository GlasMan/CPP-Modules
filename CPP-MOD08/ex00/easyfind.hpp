#ifndef EASYFIND
# define EASYFIND

#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::vector;

template <typename T>
int	easyfind(T &container, int to_find){
	std::vector<int>::iterator it = find(container.begin(), container.end(), to_find);
	if (it != container.end()){
		cout << "Find '" << to_find << "' index of: " << it - container.begin()  << endl;
		return (0);
	}
	else
		cout << "container does not includes: " << to_find << endl;
	return 1;
}

#endif
