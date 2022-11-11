#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class WrongAnimal
{
    protected:
        string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &cpy);
        virtual ~WrongAnimal();
        WrongAnimal &operator= (const WrongAnimal &cpy);
        virtual string getType() const {return type;}
        virtual string makeSound() const;
};




#endif
