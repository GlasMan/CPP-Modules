#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat &cpy);
    ~Cat();
    Cat &operator=(const Cat &cpy);
    string makeSound() const;
    string getType() const {return type;}
};

#endif