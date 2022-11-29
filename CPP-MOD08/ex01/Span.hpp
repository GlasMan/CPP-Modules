#ifndef SPAN_HPP
# define SPAN_HPP

#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
#include <string>
#include <list>


using std::cout;
using std::endl;
using std::list;
using std::max_element;
using std::min_element;
using std::string;
using std::vector;


class Span
{
	private:
		vector<int> _container;
		unsigned int _size;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &cpy);
		~Span();
		Span &operator=(const Span &cpy);
		struct vecIsFull : public std::exception {
			const char * what () const throw () {
				return "Vector is full";
			}
		};
		void addNumber(int n);
		int shortestSpan();
		int	longestSpan();
		void print_vec();
};

#endif
