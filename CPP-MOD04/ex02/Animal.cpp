#include "Animal.hpp"

Animal::Animal() {
    cout << "Animal Constructor called" << endl;
    this->type = "";
}

Animal::Animal(const Animal &cpy) {
    *this = cpy;
}

Animal::~Animal() {
    cout << "Animal Destructor called" << endl;
}

Animal &Animal::operator=(const Animal &cpy) {
    this->type = cpy.type;
    return (*this);
}

string Animal::makeSound() const{
    cout << "Animal does not make sound" << endl;
    return (this->type);
}