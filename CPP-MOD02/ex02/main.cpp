#include "Fixed.hpp"


int main( void ) {

		Fixed a;
		Fixed b(Fixed( 5.05f ) * Fixed( 2 ));
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout <<  b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
		/*
		int x = a > b;
		a = Fixed(4);
		b = Fixed(Fixed(5.f) * Fixed(2.0f));
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "a > b: " << x << std::endl;
		std::cout << "a + b: " << a + b << std::endl;
		std::cout << "a - b: " << a - b << std::endl;
		std::cout << "b - a: " << b - a << std::endl;
		std::cout << "a * b: " << a * b << std::endl;
		std::cout << "a / b: " << a / b << std::endl;
		std::cout << "b / a: " << b / a << std::endl;
		std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
		std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
		 */
	return (0);
}

