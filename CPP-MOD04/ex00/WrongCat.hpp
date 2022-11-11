#ifndef CAT_HPP
# define CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const WrongCat &cpy);
    ~WrongCat();
    WrongCat &operator=(const WrongCat &cpy);
    string makeSound() const;
    string getType() const {return type;}
};

#endif