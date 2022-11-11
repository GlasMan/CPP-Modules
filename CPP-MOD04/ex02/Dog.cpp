#include "Dog.hpp"

Dog::Dog() {
    cout << "Dog Constructor called" << endl;
    this->brain = new Brain();
    this->type = "Dog";
}

Dog::Dog(const Dog &cpy) {
    *this = cpy;
}

Dog::~Dog() {
    delete this->brain;
    cout << "Dog Destructor called" << endl;
}

Dog &Dog::operator=(const Dog &cpy) {
    this->type = cpy.type;
    this->brain = cpy.brain;
    return (*this);
}
string Dog::makeSound() const{
    cout << "woof, woof" << endl;
    return (this->type);
}
