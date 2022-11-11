#include "Dog.hpp"

Dog::Dog() {
    cout << "Dog Constructor called" << endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &cpy) {
    *this = cpy;
}

Dog::~Dog() {
    cout << "Dog Destructor called" << endl;
}

Dog &Dog::operator=(const Dog &cpy) {
    this->type = cpy.type;
    return (*this);
}
string Dog::makeSound() const{
    cout << "woof, woof, arf arf" << endl;
    return (this->type);
}
