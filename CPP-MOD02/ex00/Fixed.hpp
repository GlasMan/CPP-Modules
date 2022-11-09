#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

class Fixed
{
	private:
		int fixed_point_nbr;
		static const int fractional_bits = 8;
	public:
		Fixed(); //Default constructor
		Fixed(const Fixed &ref); // copy Constructor
		~Fixed(); // Destructor
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		Fixed &operator= (const Fixed &p);
};

#endif
