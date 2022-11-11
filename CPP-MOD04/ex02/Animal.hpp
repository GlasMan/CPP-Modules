#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Animal
{
    protected:
        string type;
        Animal();
    public:
    Animal(const Animal &cpy);
    virtual ~Animal() = 0;
    Animal &operator= (const Animal &cpy);
    virtual string getType() const {return type;}
    virtual string makeSound() const;
};

#endif