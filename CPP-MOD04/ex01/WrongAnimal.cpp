#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    cout << "WrongAnimal Constructor called" << endl;
    this->type = "";
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy) {
    *this = cpy;
}

WrongAnimal::~WrongAnimal() {
    cout << "WrongAnimal Destructor called" << endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &cpy) {
    this->type = cpy.type;
    return (*this);
}

string WrongAnimal::makeSound() const {
    cout << "WrongAnimal sound" << endl;
    return (this->type);
}