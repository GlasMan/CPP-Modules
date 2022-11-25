#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

template <typename T>
void increase(T *x)
{
	*x += 1;
}
template <typename T>
void print_it(T *x) {
	cout << *x << endl;
}

template <typename T>
void iter(T *tab, int length, void (*function)(T*))
{
	for (int i = 0; i < length; i++)
		function(&tab[i]);
}

#endif
