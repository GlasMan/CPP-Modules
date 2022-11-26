#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

template <typename T>
void print_it(const T &x) {
	cout << x << endl;
}

template <typename T>
void iter(T *tab, unsigned int length, void (*function)(const T &))
{
	for (int i = 0; i < (int)length; i++)
		function(tab[i]);
}

#endif
