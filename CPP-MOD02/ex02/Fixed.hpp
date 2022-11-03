#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;
using std::ostream;

#define fixed_point (1 << 8)

class Fixed
{
    private:
        int fixed_point_nbr;
        static const int fractional_bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &cpy);
        Fixed(const int nbr);
        Fixed(const float nbr);
        ~Fixed();
        //Arithmetic Operators
        Fixed &operator= (const Fixed &to_cpy);
        Fixed operator+(const Fixed &to) const;
		Fixed operator-(const Fixed &to) const;
		Fixed operator*(const Fixed &to) const;
		Fixed operator/(const Fixed &to) const;
		//Comparison Operators
		bool operator> (const Fixed &gr);
        bool operator< (const Fixed &ls);
        bool operator>= (const Fixed &greq);
        bool operator<= (const Fixed &lseq);
		bool operator== (const Fixed &eq);
		bool operator!= (const Fixed &gr);

		//Increment and Decrement operators
		//pre fix
		Fixed &operator++();
		Fixed &operator--();
		//post fix
		Fixed operator++(int);
		Fixed operator--(int);
		//Member Functions
		int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
		static Fixed const &min(const Fixed &x, const Fixed &y);
		static Fixed &min(Fixed &x, Fixed &y);
		static Fixed const &max(const Fixed &x, const Fixed &y);
		static Fixed &max(Fixed &x, Fixed &y);

};
std::ostream &operator<< (ostream &os, Fixed const &fixed_nbr);
