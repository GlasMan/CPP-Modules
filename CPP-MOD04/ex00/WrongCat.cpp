#include "WrongCat.hpp"

WrongCat::WrongCat() {
    cout << "WrongCat Constructor called" << endl;
    this->type = "Cat";
}

WrongCat::WrongCat(const WrongCat &cpy) {
    *this = cpy;
}

WrongCat::~WrongCat(){
    cout << "WrongCat Destructor called" << endl;
}

WrongCat &WrongCat::operator=(const WrongCat &cpy) {
    this->type = cpy.type;
    return (*this);
}

string WrongCat::makeSound() const {
    cout << "meooooow" << endl;
    return (this->type);
}