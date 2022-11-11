#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &cpy);
        ~Dog();
        Dog &operator=(const Dog &cpy);
        string getType() const {return type;}
        string makeSound() const;
};



#endif