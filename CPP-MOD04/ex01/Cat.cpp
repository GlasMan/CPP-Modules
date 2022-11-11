#include "Cat.hpp"

Cat::Cat() {
    cout << "Cat Constructor called" << endl;
    this->brain = new Brain();
    this->type = "Cat";
}

Cat::Cat(const Cat &cpy) {
    *this = cpy;
}

Cat::~Cat() {
    delete this->brain;
    cout << "Cat Destructor called" << endl;
}

Cat &Cat::operator=(const Cat &cpy) {
    this->type = cpy.type;
    return (*this);
}

string Cat::makeSound() const{
    cout << "meooooow" << endl;
    return (this->type);
}