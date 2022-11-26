#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


template <typename T>
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T min(T x, T y)
{
	if (x >= y)
		return y;
	return x;
}

template <typename T>
T max(T x, T y)
{
	if (x > y)
		return x;
	return y;
}

#endif
