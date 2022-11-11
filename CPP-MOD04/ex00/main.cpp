#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    const Animal* meta = new Animal();
    cout << endl;
    const Animal* j = new Dog();
    cout << endl;
    const Animal* i = new Cat();
    cout << endl;
    std::cout << j->getType() << " " << std::endl;
    cout << endl;
    std::cout << i->getType() << " " << std::endl;
    cout << endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    /*Cat cat;
    Dog dog;
    Animal &x = cat;
    Animal &y = dog;
    x.makeSound();
    y.makeSound();*/
    /*
    WrongCat cat;
    WrongAnimal &a = cat;
    a.makeSound();*/
}