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
        Fixed &operator= (const Fixed &to_cpy);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};
std::ostream &operator<< (ostream &os, Fixed const &fixed_nbr);
