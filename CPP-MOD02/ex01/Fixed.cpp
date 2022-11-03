#include "Fixed.hpp"

Fixed::Fixed() {
    cout << "Default constructor called" << endl;
    fixed_point_nbr = 0;
}

Fixed::Fixed(const Fixed &cpy) {
    cout << "Copy constructor called" << endl;
    *this = cpy;
}

Fixed::Fixed(const int nbr) {
    cout << "Int constructor called" << endl;
    fixed_point_nbr = (nbr << fractional_bits);
}

Fixed::Fixed(const float nbr) {
    cout << "Float constructor called" << endl;
    fixed_point_nbr = ((int)(nbr * fixed_point));
}
Fixed::~Fixed(){
    cout << "Destructor called" << endl;
}

Fixed &Fixed::operator=(const Fixed &to_cpy) {
    cout << "Copy assignment operator called" << endl;
    this->fixed_point_nbr = to_cpy.getRawBits();
    return (*this);
}

std::ostream &operator<<(std::ostream &os, const Fixed &to_out) {
    os << to_out.toFloat();
    return os;
}

int Fixed::toInt() const {
    return ((fixed_point_nbr) >> fractional_bits);
}

float Fixed::toFloat() const {
    return (((float)(fixed_point_nbr)) / fixed_point);
}

int Fixed::getRawBits() const {
    return (this->fixed_point_nbr);
}

void Fixed::setRawBits(const int raw) {
    this->fixed_point_nbr = raw;
}