#include "Fixed.hpp"

Fixed::Fixed(){
	cout << "Default Constructor called" << endl;
	fixed_point_nbr = 0;
}

Fixed::Fixed(const Fixed &ref){
	cout << "Copy constructor called" << endl;
	*this = ref;
}

Fixed::~Fixed(){
	cout << "Destructor called" << endl;
}

Fixed &Fixed::operator=(const Fixed &p){
	cout << "Copy assignment operator called" << endl;
	fixed_point_nbr = p.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const{
	cout << "getRawBits member function called" << endl;
	return fixed_point_nbr;
}

void Fixed::setRawBits(const int raw){
	fixed_point_nbr = raw;
}